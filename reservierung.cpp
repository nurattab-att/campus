#include "reservierung.h"

reservierung::reservierung(int n, string k, int start, int ende)
{
    nummer = n;
    kunde = k;
    startZeit = start;
    endZeit = ende;
}



void reservierung::anzeigen()
{
    cout << "Nr. " << nummer
         << ": " << kunde
         << " reserviert von Zeiteinheit " << startZeit
         << " bis " << endZeit
         << "."<< endl;
}

int reservierung::getNummer()
{
    return nummer;
}
