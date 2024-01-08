#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum Suit {NONE, CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {JOKER, TWO=2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,
           NINE, TEN, JACK, QUEEN, KING, ACE};

struct Card
{
    Rank rank;
    Suit suit;
    Card();
    Card(Suit s, Rank r);
    string to_String();
    bool equals(Card& c2) const;
    bool is_greater(const Card& c2) const;

};

struct Deck {
    vector<Card> cards;

    Deck();
    Deck(int n);

    Deck::Deck(int size);
    void print();
    int find(Card& card);

};



