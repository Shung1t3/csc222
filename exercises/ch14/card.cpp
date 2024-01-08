#include "card.hpp"

Card::Card(){
rank = ACE;
suit = SPADES;

}

Card::Card(Suit s, Rank r){
rank = r;
suit = s;

}


string Card::to_String() {
    vector<string> suit_strings = {"Clubs", "Diamonds", "Hearts", "Spades"};
    vector<string> rank_strings = {"", "Ace", "2", "3", "4", "5", "6", "7","8", "9", "10", "Jack", "Queen", "King"};

    return rank_strings[rank] + " of " + suit_strings[suit];
}

bool Card::equals(Card& c2) const
{
    return (rank == c2.rank && suit == c2.suit);
}

bool Card::is_greater(const Card& c2) const
{
    if (suit > c2.suit) return true;
    if (suit < c2.suit) return false;

    if (rank > c2.rank) return true;
    if (rank < c2.rank) return false;

    return false;
}

Deck::Deck(int size)
{
    vector<Card> temp(size);
    cards = temp;
}

Deck::Deck()
{
    vector<Card> temp(52);
    cards = temp;
    int i = 0;
    for (Suit suit = CLUBS; suit <= SPADES; suit = Suit(suit+1)) {
        for (Rank rank = ACE; rank <= KING; rank = Rank(rank+1)) {
            cards[i].suit = suit;
            cards[i].rank = rank;
            i++;
        }
    }
}


void Deck::print() 
{
    for (int i = 0; i < cards.size(); i++) {
        cout << cards[i].to_String() << endl;
    }
}

int Deck::find(Card& card) 
{
    Deck p = *this;
    for (int i = 0; i < p.cards.size(); i++) {
        if (p.cards[i].equals(card)) return i;
    }
    return -1;
}

