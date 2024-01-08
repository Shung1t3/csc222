#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include "Cards.hpp"
#include "random.cpp"
using namespace std;

Card::Card()
{
    suit = NONE;
    rank = JOKER;
}

Card::Card(Suit s, Rank r)
{
    suit = s; rank = r;
}

string Card::to_string() const
{
    if (rank == JOKER) return "Joker";

    vector<string> suit_strings = {"Clubs", "Diamonds", "Hearts", "Spades"};
    vector<string> rank_strings = {"Joker", "Ace", "2", "3", "4", "5", "6", "7",
                               "8", "9", "10", "Jack", "Queen", "King"};

    return rank_strings[rank] + " of " + suit_strings[suit];
}

bool Card::equals(const Card& c2) const
{
    return (suit == c2.suit && rank == c2.rank);
}

bool Card::is_greater(const Card& c2) const
{
    // first check the suits
    if (suit > c2.suit) return true;
    if (suit < c2.suit) return false;

    // if suits are equal, check ranks 
    if (rank > c2.rank) return true;
    if (rank < c2.rank) return false;

    // if ranks are equal too, 1st card is not greater than the 2nd 
    return false;
}

int Card::find(const Deck& deck) const
{
    for (int i = 0; i < deck.cards.size(); i++) {
        if (deck.cards[i].equals(*this)) return i;
    }
    return -1;
}


/*
void swap_cards(Card* c1, Card* c2)
{
    Card temp;
    temp.suit = c1->suit;
    temp.rank = c1->rank;
    c1->suit = c2->suit;
    c1->suit = c2->suit;
    c2->suit = temp.suit;
    c2->rank = temp.rank;
}
*/


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

void Deck::swap_cards(int i, int j)
{
    Card temp_card = cards[i];
    cards[i] = cards[j];
    cards[j] = temp_card;
}

int Deck::find_lowest(int l, int h)
{
    int lowest = l;
    for (int i = l + 1; i <= h; i++) {
        if (cards[lowest].is_greater(cards[i])) lowest = i;
    }
    return lowest;
}

void Deck::shuffle()
{
    for (int i = 0; i < cards.size(); i++) {
        int rand_card = random_between(0, cards.size() - 1);
        swap_cards(i, rand_card);
    }
}

void Deck::add_card(const Card& c)
{
    cards.push_back(c);
}

Card Deck::remove_card()
{
    Card card = cards[cards.size()-1];
    cards.pop_back();
    return card;
}

void Deck::add_cards(const Deck& d)
{
    cards.resize(cards.size() + d.cards.size());
    int i = d.cards.size();
    for (int j = 0; j < d.cards.size(); j++) {
        cards[i++] = d.cards[j];
    }
}

void Deck::sort()
{
    for (int i = 0; i < cards.size(); i++) {
        int lowest = find_lowest(i, cards.size() - 1);
        swap_cards(i, lowest);
    }
}

Deck Deck::merge(const Deck& d) const
{
    Deck result(cards.size() + d.cards.size());
    int i = 0;
    int j = 0;
    for (int k = 0; k < result.cards.size(); k++) {
        if (!(i < cards.size())) {
            result.cards[k] = d.cards[j++];
        }
        else if (!(i < d.cards.size())) {
            result.cards[k] = cards[i++];
        }
        else if (cards[i].is_greater(d.cards[j])) {
            result.cards[k] = d.cards[j++];
        }
        else {
            result.cards[k] = cards[i++];
        }
    }
    return result;
}

Deck Deck::merge_sort() const
{
    int mid = cards.size() / 2;
    Deck lhalf = subdeck(0, mid);
    Deck uhalf = subdeck(mid+1, cards.size()-1);
    
    lhalf.sort();
    uhalf.sort();

    return lhalf.merge(uhalf);
}

Deck Deck::subdeck(int l, int h) const
{
    Deck sub(h-l+1);

    for (int i = 0; i < sub.cards.size(); i++) {
        sub.cards[i] = cards[l+i];
    }
    return sub;
}

void Deck::print() const
{
    for (int i = 0; i < cards.size(); i++) {
        cout << cards[i].to_string() << endl;
    }
}


bool WarCard::equals(const WarCard& c2) const
{
    return (rank == c2.rank);
}

bool WarCard::is_greater(const WarCard& c2) const
{
    // Handle Aces high
    if (rank == ACE && c2.rank != ACE) return true;
    if (c2.rank == ACE && rank != ACE) return false;
    // Handle rest of ranks
    if (rank > c2.rank) return true;
    return false;
}


Pile::Pile() {}

Pile::Pile(const Deck& d) {
    for (int i = 0; i < d.cards.size(); i++) {
        cards.push(WarCard(d.cards[i].suit, d.cards[i].rank));
    }
}

int Pile::size()
{
    return cards.size();
}

void Pile::add_card(const WarCard& c)
{
    cards.push(c);
}

WarCard Pile::remove_card()
{
    WarCard c = cards.front();
    cards.pop();
    return c;
}

void Pile::move_cards(Pile& p)
{
    while (p.size() > 0) {
        add_card(p.remove_card());
    }
}
