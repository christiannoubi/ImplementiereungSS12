#pragma once;
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "MusikInstrumentImpl.h"

using namespace std;

class Klavier : public MusikInstrumentImpl{

public:

    Klavier () : MusikInstrumentImpl ("Klavier: "){
        cout << "Klavier()\n";
    }

    virtual ~Klavier () {
        cout << "~Klavier()\n";
    }

    void spielen () const {
        cout << "KLIMPER " << endl;
    }
};