#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "MusikInstrumentImpl.h"

using namespace std;

class Trompete : public MusikInstrumentImpl {

public:

    Trompete () : MusikInstrumentImpl (" Trompete: "){
        cout << " Trompete()\n";
    }

    virtual ~Trompete () {
        cout << "~Trompete()\n";
    }

    void spielen () const {
        cout << " Troeoeoeoet "<< endl;
    }
};