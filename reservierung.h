#ifndef RESERVIERUNG_H
#define RESERVIERUNG_H

#include <iostream>

using namespace std;

class reservierung
{
private:
    int nummer;
    string kunde;
    int startZeit;
    int endZeit;

public:

    reservierung(int n, string k, int start, int ende);
    void anzeigen();
    int getNummer();


    };

#endif // RESERVIERUNG_H
