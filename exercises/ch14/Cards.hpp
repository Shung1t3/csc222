#include <string>
#include <vector>
#include <queue>
using namespace std;

enum Suit {CLUBS, DIAMONDS, HEARTS, SPADES, NONE};
enum Rank {JOKER, ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,
           NINE, TEN, JACK, QUEEN, KING};

struct Deck;

struct Card
{
    Suit suit;
    Rank rank;

    // constructors
    Card();
    Card(Suit s, Rank r);

    // member functions
    string to_string() const;
    bool equals(const Card& c2) const;
    bool is_greater(const Card& c2) const;
    int find(const Deck& deck) const;
};

// void swap_cards(Card* c1, Card* c2);

struct Deck
{
    vector<Card> cards;

    // constructors
    Deck(int size);
    Deck();

    // modifiers
    void swap_cards(int i, int j);
    void shuffle();
    void add_card(const Card& c);
    Card remove_card();
    void add_cards(const Deck& d);
    void sort();

    // member functions
    Deck subdeck(int l, int h) const;
    Deck merge(const Deck& d) const;
    Deck merge_sort() const;
    void print() const;
    int find_lowest(int l, int h);
};

struct WarCard : Card
{
    using Card::Card;

    bool equals(const WarCard& c2) const;
    bool is_greater(const WarCard& c2) const;
};

struct Pile 
{
    queue<WarCard> cards;

    // constructors
    Pile();
    Pile(const Deck& d);

    // function
    int size();

    // modifiers
    void add_card(const WarCard& c);
    WarCard remove_card();
    void move_cards(Pile& p);
};
