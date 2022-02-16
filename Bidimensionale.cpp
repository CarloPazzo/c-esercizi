/*Realizzare un programma che permetta di registrare in una tabella bidimensionale i nomi e i cognomi dei clienti di un'azienda. */

#include <iostream>

using namespace std;

int main()
{
    string clientiAzienda [10] [2];
    for(int i=0;i<5;i++){
        cout<<"Metti il nome del "<<i + 1<<"° \n";
        cin>> clientiAzienda[i] [0];
        cout<<"Metti il cognomedel "<<i + 1<<"° \n";
        cin>> clientiAzienda[i] [1];
    }
    for(int i=0;i<5;i++){
        cout<<clientiAzienda [i] [0]<<": "<<clientiAzienda [i] [1]<<"\n";
    }
    

    return 0;
}
