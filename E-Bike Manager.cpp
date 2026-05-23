using namespace std;
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>

struct Bici {
    bool Disponib;
    int IDBici;
    double Autonom;
    double CoordXBici;
    double CoordYBici;
};


// Coordinate utente
    double coordX;
    double coordY;


// Calcolo distanza bici-utente
    double calcolaDistanza(Bici BiciDisponibili) {
        return sqrt(pow(BiciDisponibili.CoordXBici - coordX,2) + pow(BiciDisponibili.CoordYBici - coordY,2));
};


// Scelta bici 
    int sceltaBici;


// Distanza che vuole percorrere l'utente con la bici
    double DistTarget;


// Bici più vicina
    bool confronta(Bici bike1, Bici bike2){
        return calcolaDistanza(bike1) < calcolaDistanza(bike2);
}


// Flag di verifica se la prenotazione della bicicletta è avvenuta con successo

bool biciPrenotata = false; 


// Gestione tempo

double vMedia=20.0;
double tariffaMinuto=0.20;


// Elenco biciclette disponibili
Bici BiciTotali [5]{
    {true,  1, 12.3, 44.49,  11.37},
    {true,  2, 38.3, 44.49,  11.36},
    {false, 3, 20.6, 44.53,  11.37},
    {true,  4, 15.8, 44.51,  11.39},
    {false, 5, 17.8, 44.51,  11.33},
    
};





int main(){

// Dichiarazione funzione per la creazione di numeri casuali    
srand(time(0));


//Tutto il codice è messo in un ciclo
while (!biciPrenotata){


// Inserimento delle proprie coordinate
cout << "\n--------------------------------------------------------------------" << endl;
    cout << "Inserisci le tue coordinate " << endl;
    cout << "Usa i numeri decimali (es. 40.7128° di lat. e 74.0060° di long.) " << endl;
    cout << "Ora inserisci le coordinate della latitudine (X) >> ";
    cin >> coordX;
    cout << "Ora inserisci le coordinate della longitudine (Y) >> ";
    cin >> coordY;
    cout << "Le tue coordinate: " << coordX << " e " << coordY << endl;


//KM che si vogliono percorrere
    cout << "Quanti KM vuoi percorrere? >> ";
    cin >> DistTarget;


// Menu bici

    cout << "--------------- LA NOSTRA FLOTTA ---------------" << endl;
    cout << " | id BICI |" << "  AUTONOMIA " << " | COORDINATE DELLA BICI | " << endl;
    for (int i=0; i<5; i++) {
    cout << " |   " << BiciTotali[i].IDBici << "     |  " << BiciTotali[i].Autonom << "       |    " <<  BiciTotali[i].CoordXBici <<  "    "  << BiciTotali[i].CoordYBici << "     |" << endl;
    }
    
    
// Ordinamento bici in base alla distanza dalla posiz. dell'utente
   
    cout << "--------------- PIU' VICINE A TE ---------------" << endl;
    int indiceTrovato = -1;
    for (int i=0; i<3; i++) {
    cout << "Bici ID: " << BiciTotali[i].IDBici << " | Distanza: " << calcolaDistanza(BiciTotali[i]) << endl;
    }
    sort(BiciTotali, BiciTotali + 3, confronta);
    
    
// Scelta bici e conferma prenotazione bici
    cout << "Scegli la bici che vuoi noleggiare >> " ;
    cin >> sceltaBici;
    cout << endl;
    
    if (sceltaBici<=0 && sceltaBici>=5) {
        cout << "ATTENZIONE: la bici che vuoi selezionare non esiste!" << endl;
        cout << "RIPROVA!" << endl;
    } if (BiciTotali[sceltaBici].Disponib==false) {
        cout << "ATTENZIONE: Bici non disponibile" << endl;
        cout << "RIPROVA!" << endl;
    } if (BiciTotali[sceltaBici].Autonom<=DistTarget) {
        cout << "ATTENZIONE: L'autonomia della bici selezionata è minore dalla distanza che vuoi percorrere" << endl;
        cout << "RIPROVA!" << endl;
    } else {
        cout << "Hai prenotato la bici!" << endl;
        biciPrenotata=true;
        

// Gestione tempo e calcolo autonomia restante bici
    double tMedio = (DistTarget/vMedia)*60.0;
    int rCasuale = rand () % 15+1;
    double tFinale = tMedio + rCasuale;
    double costFinale = tFinale * tariffaMinuto; 

    double autoRest = (BiciTotali[sceltaBici].Autonom - DistTarget);
    
    
// Riepilogo e fatturazione    
        cout << "Hai percorso " << DistTarget << " KM" << endl;
        cout << "Hai pedalato per " << tMedio << " minuti" << endl;
        cout << "Hai avuto rallentamenti per " << rCasuale << " minuti" << endl;
        cout << "Quindi >> hai pedalato per " << tFinale << "minuti" << endl;
        cout << "La bici ha ancora " << autoRest << " KM di autonomia" << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "Dovrai pagare " << costFinale << " EURO" << endl;
        cout << "La tariffa applicata: " << tariffaMinuto << "EURO/min" << endl;
        cout << "E... alla prossima pedalata!" << endl;    
        cout << "--------------------------------------------------------------------" << endl;
    }

  }

}