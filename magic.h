#ifndef UNTITLED13_MAGIC_H
#define UNTITLED13_MAGIC_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <string>
#include "magic.h"


using namespace std;


typedef std::string string;

class magic {

public:
    //CONSTRUCTOR
            magic();
    //DECONSTRUCTOR
    ~magic(){};

    //GETTER FUNCTION PROTOTYPES
    string get_CardName_() const;
    int get_ManaCost_() const;
    string get_Type_() const;
    string get_CardText_() const;
    int	get_CardNumber_() const;
    string get_rarity_() const;
    string get_condition_() const;
    double get_purchasePrice_() const;
    double get_currentValue_() const;
    int get_quantity_() const;

    //SETTER FUNCTION PROTOTYPES
    void set_Cardname(string name);
    void set_ManaCost(int cost);
    void set_Type(string type);
    void set_CardText(string text);
    void set_CardNumber(int number);
    void set_rarity(string rarity);
    void set_condition(string condition);
    void set_purchasePrice(double price);
    void set_currentValue(double value);
    void set_quantity(int quantity);

    //PRINT METHOD PROTOTYPES
    void print(ostream& out = cout) const;


    //PRIVATE VARIABLES FOR CARD
private:
    string CardName_;
    int ManaCost_;
    string Type_;
    string CardText_;
    int	CardNumber_;
    string rarity_;
    string condition_;
    double purchasePrice_;
    double currentValue_;
    int quantity_;

};


#endif //UNTITLED13_MAGIC_H
