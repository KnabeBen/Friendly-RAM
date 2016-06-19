#include <iostream>
using namespace std;
#include "allocate.h"

void allocate::allcocate(unsigned int modus, unsigned int Anzahl_K) {
    cout << "RUN" << endl;
    if (modus == 1) {
        while (true) {
            int *p; // Zeiger fuer den neuen Speicherbereich

            p = new int; // Speicherbereich fuer 1 int reservieren
            *p = 15;
        }
    } else {
        if (modus == 2) {
            unsigned int durchlauf = Anzahl_K * 1000;

            for (int i = 0; i < durchlauf; i++) {
                int *p; // Zeiger fuer den neuen Speicherbereich

                p = new int; // Speicherbereich fuer 1 int reservieren
                *p = 15; // schreiben in Neuen Speicherbereich
            }
        }


    }
}
