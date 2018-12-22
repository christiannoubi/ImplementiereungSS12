#pragma once;
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "MusikInstrument.h"

using namespace std;

class Musiker {

private:

    string name;
    const MusikInstrument* instrument;

public:

    Musiker (string name,   const MusikInstrument* instrument) {
        this->name = name;
        this->instrument = instrument;
        cout << " Musiker(string, const Musikinstrument*): " << name << "\n";
    }
    ~Musiker() {
        cout << "~Musiker(): " << name <<"\n";
        delete instrument;
    }

    string liefereName () const {
        return name;
    }

    void spielen () const {
        cout << name << " spielt " << instrument->liefereName() << ":" << endl;
            instrument->spielen();
    }
};