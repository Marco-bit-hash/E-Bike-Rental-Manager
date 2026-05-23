# E-Bike Rental Manager 🚲🔋

Un prototipo di applicazione gestionale scritta in **C++** (interfaccia a riga di comando) pensata per gestire un servizio di noleggio di biciclette elettriche. Il programma permette di localizzare i mezzi più vicini rispetto alla posizione dell'utente, verificarne l'autonomia residua, simulare i tempi di viaggio (con tanto di imprevisti e traffico casuale) e calcolare la fattura finale.

Questo progetto è stato sviluppato come attività scolastica per la materia di **Informatica**.

---

## 🚀 Funzionalità Principali

* **Localizzazione Utente:** All'avvio il programma chiede di inserire le proprie coordinate cartesiane (X, Y).
* **Ricerca Intelligente:** Mostra l'elenco delle biciclette ordinate in modo crescente in base alla distanza euclidea dall'utente.
* **Filtro Disponibilità:** Vengono mostrate ed è possibile selezionare soltanto le biciclette con stato "disponibile".
* **Verifica Autonomia:** Il sistema controlla che i chilometri che vuoi percorrere non superino la carica residua della e-bike.
* **Simulazione del Tempo di Viaggio:** Calcola la durata del noleggio basandosi su una velocità media di 20 km/h e aggiunge un ritardo casuale (da 1 a 15 minuti) per simulare traffico o semafori.
* **Fatturazione Automatica:** Calcola l'importo finale da pagare applicando una tariffa flat di **0.20€ al minuto**. Atterraggio e rilascio aggiornano i dati della flotta.

---

## 📂 Struttura della Flotta (Dati Iniziali)

Il parco mezzi è composto da un array statico di 5 biciclette precaricate con i seguenti dati di esempio:
* **Bici ID 1:** Disponibile | Autonomia: 12.3 km | Coordinate: (44.49, 11.37)
* **Bici ID 2:** Disponibile | Autonomia: 38.3 km | Coordinate: (44.49, 11.36)
* **Bici ID 3:** *Non Disponibile* | Autonomia: 20.6 km | Coordinate: (44.53, 11.37)
* **Bici ID 4:** Disponibile | Autonomia: 15.8 km | Coordinate: (44.51, 11.39)
* **Bici ID 5:** *Non Disponibile* | Autonomia: 17.8 km | Coordinate: (44.51, 11.33)

---

## 🛠️ Come Compilare ed Eseguire

Per eseguire il programma sul tuo computer, assicurati di avere un compilatore C++ installato (come `g++` o l'ambiente Dev-C++ / VS Code).

### Da Terminale (Linux/Mac/Windows con MinGW)

1. Apri il terminale nella cartella dove si trova il file `main.cpp`.
2. Compila il codice con il seguente comando:
