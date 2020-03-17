

#include "magicDeck.h"


//Calls the read function upon the creation of the object
magicDeck::magicDeck(magic& card)
{

this->readFile(card);
}

//Reads text file that contains information about
//16 cards that relate to Magic The Gathering Card Game.
//It the stores the values into variables, copy to a
//"Magic" object by the name of "card" and pushes the object
//into the Vector STL container named "Deck"
void magicDeck::readFile(magic& card)
{

    string temp_CardName_;
    int temp_ManaCost_;
    string temp_Type_;
    string temp_CardText_;
    int	temp_CardNumber_;
    string temp_rarity_;
    string temp_condition_;
    double temp_purchasePrice_;
    double temp_currentValue_;
    int temp_quantity_;

    ifstream fin;
    fin.open("/Users/DeeDee/CLionProjects/untitled13/magic_cards");
    if (fin.fail())
    {
        cout<<"fail" << endl;
    }
    else
       while(fin >> temp_CardName_ >> temp_ManaCost_ >> temp_Type_ >>
        temp_CardText_ >> temp_CardNumber_ >>temp_rarity_ >>
        temp_condition_ >> temp_purchasePrice_ >>
        temp_currentValue_ >> temp_quantity_ )
       {


           card.set_Cardname(temp_CardName_);
           card.set_ManaCost(temp_ManaCost_);
           card.set_Type(temp_Type_);
           card.set_CardText(temp_CardText_);
           card.set_CardNumber(temp_CardNumber_);
           card.set_rarity(temp_rarity_);
           card.set_condition(temp_condition_);
           card.set_purchasePrice(temp_purchasePrice_);
           card.set_currentValue(temp_currentValue_);
           card.set_quantity(temp_quantity_);

Deck.push_back(card);
    }
    fin.close();
}


//Iterates through each element within the
//STL Vector Container and prints its contents
void magicDeck::printFile()
{


    for(auto& index : this->Deck)
    {
        index.print();
    }
}

//Process to find the total value of the deck
double magicDeck::get_DeckValue()
{
    double value;

    for(auto& index : this-> Deck)
    {

        value +=index.get_currentValue_() * index.get_quantity_();
    }
    return value;
}

//Process to find the total amount of cards within the deck
int magicDeck::get_DeckQuantity()
{
    double value;

    for(auto& index : this-> Deck)
    {

        value +=index.get_quantity_();
    }
    return value;
}

//Finds the most valuable card within the deck.
void magicDeck::get_mostValuable()
{
    double value;
    double counter = 0;
    magic temp_object;

   for(auto index : this->Deck)
   {

       if (index.get_currentValue_() > temp_object.get_currentValue_())
       {

           temp_object = index;

       }
   }
   temp_object.print();

}

//Process to find the most common card
void magicDeck::get_mostNumerous()
{
    double value;
    magic temp_object;

    for(auto index : this->Deck)
    {

        if (index.get_quantity_() > temp_object.get_quantity_())
        {

            temp_object = index;

        }
    }
    temp_object.print();

}