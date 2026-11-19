#ifndef RAUM_H
#define RAUM_H

#include "reservierung.h"
#include <iostream>
#include <vector>

using namespace std;

class raum
{
private:

    string name;
    int kapazitaet;
    vector<reservierung>reservierungen;

public:
    raum();
    void reservieren (reservierung r);
    void reservierungAnzeigen(int nummer);
    void alleReservierungenAnzeigen();


};
#endif // RAUM_H
