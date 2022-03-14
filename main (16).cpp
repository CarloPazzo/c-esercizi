/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() 
{
    float piano;
    float prezzoTotale=0;
    float somma;
    int scelta;
    int giorni;
    
    cout<<"Scegli il piano in cui vuoi essere\n";
    cout<<"Piano 1 prezzo 35 euro\n";
    cout<<"Piano 2 prezzo 45 euro\n";
    cout<<"Piano 3 prezzo 55 euro\n";
    cout<<"Piano 4 prezzo 65 euro\n";
    cin>>scelta;
    switch(scelta){
        case 1:
        cout<<"Per quanti giorni vuoi stare?\n";
        cin>>giorni;
        prezzoTotale= prezzoTotale + 35 * giorni;
        cout<<"Prezzo totale è "<<prezzoTotale<<endl;
        break;
        
          case 2:
        cout<<"Per quanti giorni vuoi stare?\n";
        cin>>giorni;
        prezzoTotale= prezzoTotale + 45 * giorni;
        cout<<"Prezzo totale è "<<prezzoTotale<<endl;
        break;
        
          case 3:
        cout<<"Per quanti giorni vuoi stare?\n";
        cin>>giorni;
        prezzoTotale= prezzoTotale + 55 * giorni;
        cout<<"Prezzo totale è "<<prezzoTotale<<endl;
        break;
        
          case 4:
        cout<<"Per quanti giorni vuoi stare?\n";
        cin>>giorni;
        prezzoTotale= prezzoTotale + 65 * giorni;
        cout<<"Prezzo totale è "<<prezzoTotale<<endl;
        break;
        
        
    }

    return 0;
}
