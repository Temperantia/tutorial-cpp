// Copyright (c) 2019 Alexandre Du lorier. All rights reserved.

/*
    - functions
    - random
    - time
    - entrée standard (c++)
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cerr;
using std::cin;
using std::clog;
using std::cout;
using std::endl;

int twice(int i);  // déclaration d'une fonction
// int twice(int); // valide

int twice(int i) {
    return i * 2;
}

int main(void) {
    cout << twice(3) << endl;

    // srand(time(NULL));  // C
    unsigned int seed = static_cast<unsigned int>(time(nullptr));  // C++

    int i = rand_r(&seed);
    int j = rand_r(&seed) % 10;

    cout << i << endl;
    cout << j << endl;

    time_t now = time(nullptr);
    char *str = new char[40];
    char *dt = ctime_r(&now, str);

    cout << dt << endl;

    tm localtime;
    tm *ltm = localtime_r(&now, &localtime);
    cout << "Année " << ltm->tm_hour << endl;

    char name[50];

    cout << "Enter name";
    cin >> name;
    cout << name;

    cerr << "error";
    clog << "log";
}
