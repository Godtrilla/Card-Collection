

#ifndef UNTITLED13_MAGICDECK_H
#define UNTITLED13_MAGICDECK_H


#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <string>
#include "magic.h"


using namespace std;


class magicDeck:public magic

{

public:
    //CONSTRUCTOR
    //Takes magic object as a paramter
    magicDeck(magic& card);

    //DECONSTRUCT
    ~magicDeck(){};

    //READ FILE PROTOTYPE
    void readFile(magic& card);

    //PRINT FILE PROTOTYPE
    void printFile();

    //DECK MONETARY VALUE RETRIEVAL PROTOTYPE
    double get_DeckValue();

    //TOTAL CARDS IN DECK RETRIEVAL PROTOTYPE
    int get_DeckQuantity();

    //MOST VALUALBE CARD PROTOTYPE
    void get_mostValuable();

    //MOST COMMON CARD PROTOTYPE
    void get_mostNumerous();

    //STL CONTAINER TO HOLD MAGIC OBJECTS (THE CARD DECK)
private:
vector<magic> Deck;
};



#endif //UNTITLED13_MAGICDECK_H
