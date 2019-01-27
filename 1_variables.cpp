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


typedef int NewType;
typedef enum Color { red, green, blue } Color;

int g = 20;         // variable globale
int h;              // automatiquement initialisée à 0
extern int n;       // variable globale partagée entre plusieurs fichiers
static int l = 10;  // cette variable n'est déclarée qu'une seule fois pour
                    // toute utilisation

int main(void) {
  // std::cout << "hello" << std::endl; Sans using
  cout << "hello" << endl;

  cout << "Size of char : " << sizeof(char) << " octet" << endl;
  cout << "Size of int : " << sizeof(int) << " octets" << endl;
  cout << "Size of short int : " << sizeof(short int) << " octets" << endl;
  cout << "Size of long int : " << sizeof(long int) << " octets" << endl;
  cout << "Size of float : " << sizeof(float) << " octets" << endl;
  cout << "Size of double : " << sizeof(double) << " octets" << endl;
  cout << "Size of wchar_t : " << sizeof(wchar_t) << " octets" << endl;

  int i = 0;
  NewType j = 0;

  Color c = green;
  cout << "c value is : " << c << endl;

  cout << "global value equals " << g << endl;

  // variable locale non initialisée par défaut -> dangereux
  int k;  // variable locale non initialisée par défaut -> utilisation
          // dangereuse
  // cout << k << endl;     // valeur aléatoire
  k = 3;                   // OK pour utilisation
  const int CONSTANT = 3;  // cette valeur ne peut en aucun cas être altérée
  // CONSTANT = 4;          // ne compilera pas
  unsigned int l = 50000;  // non signé, pas de nombre négatif possible
  static int m = 5;  // cette variable n'est définie qu'une seule fois pour tout
                     // appel de fonction

  float d = 3.3;
  int casted = static_cast<int>(d);  // 3

  cout << casted << endl;
  return 0;
}
