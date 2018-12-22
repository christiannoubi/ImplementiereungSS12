#include <iostream>
#include "Orchester.h"
using namespace std;

int main() {
    cout << "+++ Orchester besetzen\n";
    Orchester<2,1> *orchester;
    cout << "+++ Das Konzert beginnt\n";
    *orchester;
    cout << "+++ Applaus\n";
}

/* +++ Orchester besetzen
Orchester()
MusikinstrumentImpl(string): Trompete
Trompete()
Musiker(string, const Musikinstrument*): 1.Trompeter
MusikinstrumentImpl(string): Trompete
Trompete()
Musiker(string, const Musikinstrument*): 2.Trompeter
MusikinstrumentImpl(string): Klavier
Klavier()
Musiker(string, const Musikinstrument*): 1.Pianist
+++ Das Konzert beginnt
1.Trompeter spielt Trompete: TRÖÖÖÖT
2.Trompeter spielt Trompete: TRÖÖÖÖT
1.Pianist spielt Klavier: KLIMPER
+++ Applaus
~Orchester()
~Musiker(): 1.Trompeter
~Trompete()
~MusikinstrumentImpl(): Trompete
~Musiker(): 2.Trompeter
~Trompete()
~MusikinstrumentImpl(): Trompete
~Musiker(): 1.Pianist
~Klavier()
~MusikinstrumentImpl(): Klavier
*/
