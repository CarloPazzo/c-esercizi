/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int mese;
    
    cout<<"Scegli mese di cui vuoi sapere i giorni\n";
    cout<<"Gennaio\n";
    cout<<"Febbraio\n";
    cout<<"Marzo\n";
    cout<<"Aprile\n";
    cout<<"Maggio\n";
    cout<<"Giugno\n";
    cout<<"Luglio\n";
    cout<<"Agosto\n";
    cout<<"Settembre\n";
    cout<<"Ottobre\n";
    cout<<"Novembre\n";
    cout<<"Dicembre\n";
    cin>>mese;
    switch(mese){
        case 1:
        cout<<"Gennaio ha 31 giorni\n";
        break;
        case 2:
         cout<<"Febbraio ha 28 giorni\n";
        break;
        case 3:
         cout<<"Marzo ha 31 giorni\n";
        break;
        case 4:
         cout<<"Aprile ha 30 giorni\n";
        break;
        case 5:
         cout<<"Maggio ha 31 giorni\n";
        break;
        case 6:
         cout<<"Giugno ha 30 giorni\n";
        break;
        case 7:
         cout<<"Luglio ha 31 giorni\n";
        break;
        case 8:
         cout<<"Agosto ha 31 giorni\n";
        break;
        case 9:
         cout<<"Settembre ha 30 giorni\n";
        break;
        case 10:
         cout<<"Ottobre ha 31 giorni\n";
        break;
        case 11:
         cout<<"Novembre ha 30 giorni\n";
        break;
        case 12:
         cout<<"Dicembre ha 31 giorni\n";
        break;
    }
    return 0;
}
