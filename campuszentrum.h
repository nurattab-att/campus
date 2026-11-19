#ifndef CAMPUSZENTRUM_H
#define CAMPUSZENTRUM_H

#include "raum.h"
#include <vector>

using namespace std;

class campuszentrum
{
private:
    vector<raum*> raeume;


public:
    campuszentrum();
    void dialog();
};

#endif // CAMPUSZENTRUM_H
