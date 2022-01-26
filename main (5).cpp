///implementare un programma che rappresenti un contocorrente bancario 
//il contocorrente in questione conserva i seguenti dati: 
//nome dell'intestatario; cognome; data di nascita; 
//codice fiscale, saldo sul conto; data di inizio del conto e il nome della banca
//il conto ha le seguenti funzionalità:visualizza conto; versa importo ; preleva il conto ;
//il programma e dotato di un menu che consente all'utente di scegliere una delle precedenti opzioni


#include <iostream>
#include <string.h>

using namespace std;


int main(){
    int prelievo;
    int conto=3000;
    bool punto=false;
    int scelta;
    int scelta2;
    int versamento;
    string nome;
    string nomeInserito="Carlogiordano";
    int CodiceFiscale=47201953;
    int fiscale;
    int Inizio;
    int qualsiasi;
    
    
    cout<<"\e[1m==============================\n";
    cout<<"\e[1m========= CARLO BANK =========\n";
    cout<<"\e[1m==============================\n";
    
    cout<<"Salve e benvenuto\n\n";
    cout<<"Inserisci il login\n";
    cout<<"Nome:\n";
    cin>> nome;
    if(nome != nomeInserito){
        cout<<"\nPROSEGUI\n";
    }
    else if(nome == nomeInserito){
        cout<<"Riprova\n";
        return 0;
    }
    
        cout<<"Inserisci il codice fiscale\n";
        cin>>fiscale;
        
        if(fiscale == CodiceFiscale){
        cout<<"\nPROSEGUI\n\n";
    }else{
        cout<<"Riprova\n";
        return 0;
        
    }
    
    cout<<"Digita qualsiasi numero per andare avanti\n";
    cin>>qualsiasi;
    system("clear");
    
     do{
    cout<<"===============MENU==============\n";
    cout<<"Seleziona 1 per vedere il conto\n";
    cout<<"Seleziona 2 per prelevare un importo\n";
    cout<<"Seleziona 3 per versare un importo\n";
    cout<<"Seleziona 4 per uscire\n";
    

    cin>>scelta;
    
    switch (scelta){
        
        case 1:
        system ("clear");
        cout<<"Nome: Carlo Marco\n";
        cout<<"Cognome: Giordano\n";
        cout<<"Data di nascita: 26/04/2005\n";
        cout<<"Codice fiscale: 47201953\n";
        cout<<"Conto corrente: "<< conto << " euro\n";
        cout<<"Data di inizio del conto: 19/01/2022\n";
        cout<<"Nome della banca: CARLO BANK\n\n\n\n";
        punto=true;
        break;
        case 2:
        system ("clear");
        cout<<"Il tuo conto corrente e' di "<< conto <<" euro\n";
        cout<<"Scrivi quanto vuoi prelevare:\n";
        cin>>prelievo;
        cout<<"Hai prelevato "<< prelievo <<" euro\n";
        conto= conto - prelievo;
        cout<<"Nel tuo conto ti rimangono "<< conto << " euro\n\n\n\n";
        punto=true;
        break;
        case 3:
        system ("clear");
        cout<<"Il tuo conto corrente e' di "<< conto <<" euro\n";
        cout<<"Scrivi quanto vuoi versare:\n";
        cin>>versamento;
        cout<<"Hai versato "<< versamento <<" euro\n";
        conto= conto + versamento;
        cout<<"Nel tuo conto ti rimangono "<< conto << " euro\n\n\n\n";
        punto=true;
        break;
        case 4:
        system ("clear");
        cout<<"\e[1m ===================\n";
        cout<<"\e[1m ====ARRIVEDERCI====\n"; 
        cout<<"\e[1m ===================\n";
        punto=false;
    }
        
        
    }while(punto==true);

    return 0;
}