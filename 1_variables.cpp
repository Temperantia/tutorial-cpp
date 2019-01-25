// Copyright (c) 2019 Alexandre Du lorier. All rights reserved.

/*
    Ceci est un commentaire multiligne

    - Standard output
    - main function
    - includes
    - using namespace
    - return
    - data types
    - sizeof
    - typedef
    - statements
    - assignation
    - enums
    - scope
    - constants
    - unsigned
    - cast
*/
// Ceci est un commentaire monoligne

#include <iostream>
// using namespace std;
using std::cout;
using std::endl;

typedef int newtype;
enum color { red, green, blue };

// définition d'une constante C like
#define NEWLINE '\n'

// variable globale
int g = 20;

// automatiquement initialisée à 0
int h;

// variable globale partagée entre plusieurs fichiers
extern int n;

// cette variable n'est déclarée qu'une seule fois pour toute utilisation
static int l = 10;

int main(void) {
    // std::cout << "hello" << std::endl; Sans using namespace
    cout << "hello" << endl;

    cout << "Size of char : " << sizeof(char) << " octet" << endl;
    cout << "Size of int : " << sizeof(int) << " octets" << endl;
    cout << "Size of short int : " << sizeof(short int) << " octets" << endl;
    cout << "Size of long int : " << sizeof(long int) << " octets" << endl;
    cout << "Size of float : " << sizeof(float) << " octets" << endl;
    cout << "Size of double : " << sizeof(double) << " octets" << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << " octets" << endl;

    int i = 0;
    newtype j = 0;

    color c = green;
    cout << "c value is : " << c << endl;

    cout << "global value equals " << g << endl;

    // variable locale non initialisée par défaut -> dangereux
    int k;

    cout << NEWLINE;

    const int CONSTANT = 3;  // cette valeur ne peut en aucun cas être altérée

    unsigned int l = 50000;  // se référer aux types de base du C

    // cette variable n'est définie qu'une seule fois
    // pour tout appel de fonction
    static int m = 5;

    double d = 3.3;
    int cPlusPlusCasted = static_cast<int>(d);  // 3 // C++
    int cPlusCasted = int(d);  // 3 // C+
    int cCasted = (int)d;  // 3 // C et C+

    cout << cPlusPlusCasted << endl;
    cout << cPlusCasted << endl;
    cout << cCasted << endl;
    return 0;
}
