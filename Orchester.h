#pragma once;
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Musiker.h"
#include "Trompete.h"
#include "Klavier.h"

template <const int ANZAHL_TROMPETER, const int ANZAHL_PIANISTEN>


class Orchester {

private:
    vector<const Musiker*> musiker;
public:

    Orchester ();

    virtual ~Orchester () {
        cout << "~Orchester()\n";
        for(unsigned int i=0; i<musiker.size(); i++) {
            delete musiker[i];
        }
    }

    void operator* () {
        for (const Musiker* e : musiker) {
            e->spielen();
        }
    }

    Orchester<ANZAHL_TROMPETER, ANZAHL_PIANISTEN> :: Orchester() {

        cout << "Orchester()\n";

        for (int i = 0; i < ANZAHL_TROMPETER; i++) {
            stringstream name;
            name << (i + 1) << ".Trompeter";
            for (auto e : musiker) {
                musiker.push_back(new Musiker(name.str(), new Trompete())) ;
            }
        }

        for (int i = 0; i < ANZAHL_PIANISTEN; i++) {
            stringstream name;
            name << (i + 1) << ".Pianist";
                musiker.push_back(new Musiker(name.str(), new Klavier())) ;
        }
    }
};



