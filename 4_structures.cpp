// Copyright (c) 2019 Alexandre Du lorier. All rights reserved.

/**
 * arrays
 * strings (c++)
 * pointers
 * refs (c++)
 * structures
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

typedef struct Book {
    char title[50];
    char author[50];
    int id;
} Book;
/*
struct Book {
    char title[50];
    char author[50];
    int id;
};
typedef struct Book Book;
*/

int * getArray() {
    static int array[] = {2, 3};

    return array;
}

char * getCharArray() {
    static char array[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    return array;
}

int main() {
    int array[10];

    int initArray[2] = {2, 3};

    cout << initArray[0] << endl;
    cout << getArray()[0] << endl;
    cout << getArray() << endl;
    cout << getCharArray() << endl;

    string str = "Hello";

    cout << str.size() << endl;

    int i = 20;
    int *p = &i;

    cout << "Adresse " << p << " contient " << *p << endl;

    int &j = i;

    struct Book book1;
    Book book2;

    book1.id = 3;
    strcpy(book1.title, "title");
}
