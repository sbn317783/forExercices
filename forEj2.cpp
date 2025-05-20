#include <iostream>
using namespace std;

int main()

{
int primo = 1, n ,modu;

cout << "Escriba un  numero entero \n";
cin >>n;
    for (int i = n-1; i >= 2; i--){
        modu = n%i;
        cout << modu; //delete after
       
        if(modu == 0){
            cout << "Numero no es primo \n";
            primo = 0;
            break;
        } else {
            break;    
        }

        if (primo ==1){
            cout << "Es Primo";
        }
        else {
           break;
        } 
        

    }
    return 0;
}
