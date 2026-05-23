# E-Bike Rental Manager 🚲🔋

[cite_start]Un prototipo di applicazione gestionale scritta in **C++** (interfaccia a riga di comando) pensata per simulare un servizio di noleggio di biciclette elettriche in sharing[cite: 4]. [cite_start]Il programma permette all'utente di localizzare i mezzi più vicini, verificarne l'autonomia residua, simulare i tempi di viaggio (tenendo conto del traffico) e calcolare la fattura finale[cite: 5].

[cite_start]Questo progetto è stato sviluppato come attività scolastica per la materia di **Informatica**[cite: 1].

---

## 🚀 Funzionalità Principali

* [cite_start]**Localizzazione Utente:** All'avvio il programma richiede l'inserimento delle proprie coordinate cartesiane (X, Y)[cite: 8].
* [cite_start]**Ricerca Intelligente:** Mostra l'elenco delle biciclette ordinate in modo crescente in base alla distanza euclidea dall'utente.
* [cite_start]**Filtro Disponibilità:** Vengono mostrate (ed è possibile selezionare) soltanto le biciclette con stato "disponibile"[cite: 11].
* [cite_start]**Verifica Autonomia:** Il sistema controlla che i chilometri che si vogliono percorrere non superino la carica residua della e-bike prescelta.
* [cite_start]**Simulazione del Tempo di Viaggio:** Calcola la durata del noleggio basandosi su una velocità media di 20 km/h e aggiunge un ritardo casuale (da 1 a 15 minuti) per simulare code, traffico o semafori[cite: 17, 19].
* [cite_start]**Fatturazione Automatica:** Calcola l'importo finale da pagare applicando una tariffa di **0.20€ al minuto**[cite: 24]. [cite_start]Al termine, i dati dell'autonomia vengono aggiornati e la bici torna disponibile[cite: 23, 26].

---

## 📂 Struttura della Flotta (Dati Iniziali)

[cite_start]Il parco mezzi è composto da un array di 5 biciclette precaricate con dati di esempio[cite: 29]:
* **Bici ID 1:** Disponibile | Autonomia: 12.3 km | Coordinate: (44.49, 11.37)
* **Bici ID 2:** Disponibile | Autonomia: 38.3 km | Coordinate: (44.49, 11.36)
* **Bici ID 3:** *Non Disponibile* | Autonomia: 20.6 km | Coordinate: (44.53, 11.37)
* **Bici ID 4:** Disponibile | Autonomia: 15.8 km | Coordinate: (44.51, 11.39)
* **Bici ID 5:** *Non Disponibile* | Autonomia: 17.8 km | Coordinate: (44.51, 11.33)

---

## 🛠️ Istruzioni di Compilazione e Avvio

Il programma è scritto in C++ standard e non richiede librerie esterne. Può essere eseguito facilmente in due modi:

### Opzione 1: Da Terminale (Consigliato per Windows con MinGW, macOS o Linux)
1. Apri il terminale del computer.
2. Spostati nella cartella in cui si trova il file `main.cpp` usando il comando `cd` (ad esempio: `cd Documenti/ProgettoEBike`).
3. Compila il file lanciando il compilatore `g++`:
   ```bash
   g++ main.cpp -o EbikeManager
