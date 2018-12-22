#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "MusikInstrument.h"
using namespace std;

class MusikInstrumentImpl : public MusikInstrument{

private:
    string name;
public:

    MusikInstrumentImpl (string name) {
        cout << "MusikinstrumentImpl(string): " << name << "\n";
    }

    virtual ~MusikInstrumentImpl () {
        cout << "~MusikinstrumentImpl(): " << name << "\n";
    }
    string liefereName () const {
        return name;
    }
};