#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class MusikInstrument {

public:
    virtual string liefereName  () const =0;
    virtual void spielen () const = 0;
};

