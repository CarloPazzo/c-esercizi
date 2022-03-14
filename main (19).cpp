/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int scelta;
    
    cout<<"Metti il voto dell'alunno\n";
    cout<<"1. A = Ottimo\n";
    cout<<"2. B = Distinto\n";
    cout<<"3. C = Discreto\n";
    cout<<"4. D = Sufficiente\n";
    cout<<"5. E = Insufficiente\n";
    cin>>scelta;
    
    switch(scelta){
        
        case 1:
         cout<<"Ottimo\n";
         break;
         case 2:
         cout<<"Distinto\n";
         break;
         case 3:
         cout<<"Discreto\n";
         break;
         case 4:
         cout<<"Sufficiente\n";
         break;
         case 5:
         cout<<"Insufficiente\n";
         break;
         default:
         cout<<"Riprova\n";
    }

    return 0;
}
