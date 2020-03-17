

#include "magic.h"

magic::magic()
{
}

//GETTER FUNCTIONS
//Used to retrieve the value of private variables.

string magic::get_CardName_() const
{
    return this->CardName_;
}
int magic::get_ManaCost_() const
{
    return this->ManaCost_;
}
string magic::get_Type_() const
{
    return this->Type_;
}
string magic::get_CardText_() const
{
    return this->CardText_;
}
int	magic::get_CardNumber_() const
{
    return this->CardNumber_;
}
string magic::get_rarity_() const
{
    return this->rarity_;
}
string magic::get_condition_() const
{
    return this->condition_;
}
double magic::get_purchasePrice_() const
{
    return this->purchasePrice_;
}
double magic::get_currentValue_() const
{
    return this->currentValue_;
}
int magic::get_quantity_() const
{
    return this->quantity_;
}


//PRINT METHOD
//Used to print details about a single card

void magic::print(ostream& out) const
{
    out << "Card Name: " << this->get_CardName_() << endl
    << "Mana Cost: " << this->get_ManaCost_() << endl
    << "Type: " << this->get_Type_() << endl
    << "Card Description: " << this->get_CardText_() << endl
    << "Card Number: " << this->get_CardNumber_() << endl
    << "Rarity of Card: " << this->get_rarity_() << endl
    << "Card Condition: " << this->get_condition_() << endl
    << "Original Price: $" << this->get_purchasePrice_() << endl
    << "Market Value: $" << this->get_currentValue_() << endl
    << "Quantity: " << this->get_quantity_() << endl << endl << endl;

}


//SET FUNCTIONS
//Used to set the private variabls within the "magic" class.

void magic::set_Cardname(string name)
{
    this->CardName_ = name;
}
void magic::set_ManaCost(int cost)
{
    this->ManaCost_ = cost;
}
void magic::set_Type(string type)
{
    this->Type_ = type;
}
void magic::set_CardText(string text)
{
    this->CardText_ = text;
}
void magic::set_CardNumber(int number)
{
    this->CardNumber_ = number;
}
void magic::set_rarity(string rarity)
{
    this->rarity_ = rarity;
}
void magic::set_condition(string condition)
{
    this->condition_ = condition;
}
void magic::set_purchasePrice(double price)
{
    this->purchasePrice_ = price;
}
void magic::set_currentValue(double value)
{
    this->currentValue_ = value;
}
void magic::set_quantity(int quantity)
{
    this->quantity_ = quantity;
}