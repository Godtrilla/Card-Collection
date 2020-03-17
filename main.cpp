#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <string>
#include "magic.h"
#include "magicDeck.h"
#include <ostream>


using namespace std;

//Switches Output from console to a Text file
void streamSWITCH()
{
    freopen("/Users/DeeDee/CLionProjects/untitled13/output","a+",stdout);
}

//Function that runs the commands
void GO_function()
{


    magic card;

    magicDeck Deck(card);


    cout << "Deck Value: $" << Deck.get_DeckValue() << endl << endl;

    cout << "Deck Quantity: " << Deck.get_DeckQuantity() << endl << endl;

    cout << "Most Valuable Card: " << endl;
    Deck.get_mostValuable();

    cout<<endl;

    cout << "Most Common Card In Deck:"  << endl;

    cout<<endl;
    Deck.get_mostNumerous();

    cout << endl << endl << endl;

    cout<<"A PRINT OF THE COMPLETE DECK:" << endl << endl;

    Deck.printFile();


}


int main() {

    GO_function();

    streamSWITCH();

    GO_function();

    return 0;
}