#include <iostream>

    using namespace std;

    int main(){
    int scelta;
    float passeggeri;
    int Catania_Roma=30;
    int Catania_Praga=55;
    int Catania_NewYork=400;
    int scelta_bagagli_in_stiva;
    int destinazioni_Europee;
    int destinazioni_Intercontinentali;
    float sconto;
    float costo_totale;
    bool f=false;
    cout<<"===================================\n";
    cout<<"=== Compagnia Rapisardiairlines ===\n";
    cout<<"===================================\n";
    cout<<"SCEGLI LA TUA DESTINAZIONE\n";
    cout<<"1) Catania_Roma 30 euro\n";
    cout<<"2) Catania_Praga 55 euro\n";
    cout<<"3) Catania_New York 400 euro\n";
    do{
    cin>>scelta;
    switch(scelta){
        case 1:
        cout<<"Per quanti passeggeri stai prenotando?\n";
        cin>> passeggeri;
        cout<< "Quanti bagagli vuoi mettere in stiva?\n";
        cin>>scelta_bagagli_in_stiva;
        if(scelta_bagagli_in_stiva==0){
            cout<<"Nessun bagaglio\n";
        }else{
            cout<<"Hai aggiunto alla stiva "<<scelta_bagagli_in_stiva<<" bagagli\n";
            cout<<"Recarsi al gate N°8 per il check-in\n";
        }
        cout<<"Stai prenotando una destinazione Europea che equivale a 20 euro per ogni bagaglio in stiva\n";
        cout<<"inserisci i 20 euro da pagare in più per ogni bagaglio che hai messo in stiva\n";
        cin>>destinazioni_Europee;
        cout<<"Essendo una destinazione europea le imposte di imbarco sono del 10%\n";
        cout<<"Il prezzo lordo e' di "<<30*passeggeri<<" euro\n";
        cout<<"Le imposte sono di "<<(30*passeggeri/100*10)<<" euro\n";
        costo_totale= (30*passeggeri)+(30*passeggeri/100*10);
        cout<<"Il totale gli viene "<<costo_totale<<" euro\n";
        cout<<"-SCONTO AUTUNNO-\n";
        cout<<"Se siamo a novembre la nostra agenzia ti darà uno sconto del 10 % \n";
        cout<<"Siamo a novembre?\n";
        cout<<"1)si\n2)no\n";
        cin>>sconto;
        if(sconto!=1){
            cout<<"-SCONTO AUTUNNO- non avviato\n";

        }
        if(sconto==1){
            cout<<"Procedi\n";
            cout<<"Il costo della tua prenotazione e' superiore a 500 euro?\n";
            cout<<"1)si\n2)no\n";
            cin>>sconto;


        }
        if(sconto==1) {

            cout<<"-SCONTO AUTUNNO- applicato\n";
            cout<<"Lo sconto totale gli verra' "<<costo_totale/100*10<<" euro\n";
            cout<<"Quindi il totale gli verra' "<<costo_totale-costo_totale/100*10<<" euro"<<endl;




        } else {
            cout<<"-SCONTO AUTUNNO- non applicato\n";
            cout<<"Il totale rimane "<<costo_totale<<" euro\n";

        }
        cout<<"====================================================================\n";
        cout<<"======== La ringraziamo per aver scelto la nostra compagnia ========\n";
        cout<<"==================== LE AUGURIAMO BUON VIAGGIO =====================\n";
        cout<<"====================================================================\n";
        f=true;
        break;
        case 2:
        cout<<"Per quanti passeggeri stai prenotando?\n";
        cin>> passeggeri;
        cout<< "Quanti bagagli vuoi mettere in stiva?\n";
        cin>>scelta_bagagli_in_stiva;
        if(scelta_bagagli_in_stiva==0){
            cout<<"Nessun bagaglio\n";
        }else{
            cout<<"Hai aggiunto alla stiva "<<scelta_bagagli_in_stiva<<" bagagli\n";
            cout<<"Recarsi al gate N°8 per il check-in\n";
        }
        cout<<"Stai prenotando una destinazione Europea che equivale a 20 euro per ogni bagaglio in stiva\n";
        cout<<"inserisci i 20 euro da pagare in più per ogni bagaglio che hai messo in stiva\n";
        cin>>destinazioni_Europee;
        cout<<"Essendo una destinazione europea le imposte di imbarco sono del 10%\n";
        cout<<"Il prezzo lordo e' di "<<55*passeggeri<<" euro\n";
        cout<<"Le imposte sono di "<<(55*passeggeri/100*10)<<" euro\n";
        costo_totale= (55*passeggeri)+(55*passeggeri/100*10);
        cout<<"Il totale gli viene "<<costo_totale<<" euro\n";
        cout<<"-SCONTO AUTUNNO-\n";
        cout<<"Se siamo a novembre la nostra agenzia ti darà uno sconto del 10 % \n";
        cout<<"Siamo a novembre?\n";
        cout<<"1)si\n2)no\n";
        cin>>sconto;
        if(sconto!=1){
            cout<<"-SCONTO AUTUNNO- non avviato\n";

        }
        if(sconto==1){
            cout<<"Procedi\n";
            cout<<"Il costo della tua prenotazione e' superiore a 500 euro?\n";
            cout<<"1)si\n2)no\n";
            cin>>sconto;


        }
        if(sconto==1) {

            cout<<"-SCONTO AUTUNNO- applicato\n";
            cout<<"Lo sconto totale gli verra' "<<costo_totale/100*10<<" euro\n";
            cout<<"Quindi il totale gli verra' "<<costo_totale-costo_totale/100*10<<" euro"<<endl;




        } else {
            cout<<"-SCONTO AUTUNNO- non applicato\n";
            cout<<"Il totale rimane "<<costo_totale<<" euro\n";

        }
        cout<<"====================================================================\n";
        cout<<"======== La ringraziamo per aver scelto la nostra compagnia ========\n";
        cout<<"==================== LE AUGURIAMO BUON VIAGGIO =====================\n";
        cout<<"====================================================================\n";
        f=true;
        break;
        case 3:
        cout<<"Per quanti passeggeri stai prenotando?\n";
        cin>> passeggeri;
        cout<< "Quanti bagagli vuoi mettere in stiva?\n";
        cin>>scelta_bagagli_in_stiva;
        if(scelta_bagagli_in_stiva==0){
            cout<<"Nessun bagaglio\n";
        }else{
            cout<<"Hai aggiunto alla stiva "<<scelta_bagagli_in_stiva<<" bagagli\n";
            cout<<"Recarsi al gate N°8 per il check-in\n";
        }
        cout<<"Stai prenotando una destinazione Intercontinentale che equivale a 50 euro per ogni bagaglio in stiva\n";
        cout<<"inserisci i 50 euro da pagare in più per ogni bagaglio che hai messo in stiva\n";
        cin>>destinazioni_Intercontinentali;
        cout<<"Essendo una destinazione Intercontinentale le imposte di imbarco sono del 17%\n";
        cout<<"Il prezzo lordo e' di "<<400*passeggeri<<" euro\n";
        cout<<"Le imposte sono di "<<(400*passeggeri/100*17)<<" euro\n";
        costo_totale= (400*passeggeri)+(400*passeggeri/100*17);
        cout<<"Il totale gli viene "<<costo_totale<<" euro\n";
        cout<<"-SCONTO AUTUNNO-\n";
        cout<<"Se siamo a novembre la nostra agenzia ti darà uno sconto del 10 % \n";
        cout<<"Siamo a novembre?\n";
        cout<<"1)si\n2)no\n";
        cin>>sconto;
        if(sconto!=1){
            cout<<"Sconto non avviato\n";

        }
        if(sconto==1){
            cout<<"Procedi\n";
            cout<<"Il costo della tua prenotazione e' superiore a 500 euro?\n";
            cout<<"1)si\n2)no\n";
            cin>>sconto;


        }
        if(sconto==1) {

            cout<<"-SCONTO AUTUNNO- applicato\n";
            cout<<"Lo sconto totale gli verra' "<<costo_totale/100*10<<" euro\n";
            cout<<"Quindi il totale gli verra' "<<costo_totale-costo_totale/100*10<<" euro"<<endl;




        } else {
            cout<<"-SCONTO AUTUNNO- non applicato\n";
            cout<<"Il totale rimane "<<costo_totale<<" euro\n";

        }
        cout<<"====================================================================\n";
        cout<<"======== La ringraziamo per aver scelto la nostra compagnia ========\n";
        cout<<"==================== LE AUGURIAMO BUON VIAGGIO =====================\n";
        cout<<"====================================================================\n";
        f=true;
        break;
    default:
    cout<<"Non è tra le destinazioni\n";
    cout<<"RIPROVA\n";
        }
        }while(f==false);



    return 0;
    }
