#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <string>
#include "Cards.hpp"
using namespace std;

TEST_CASE("Test create and compare WarCards") {
    WarCard c1(DIAMONDS, JACK);
    WarCard c2(SPADES, JACK);
    WarCard c3(HEARTS, ACE);
    CHECK(c1.to_string() == "Jack of Diamonds");
    CHECK(c1.equals(c2) == true);
    CHECK(c3.is_greater(c2) == true);
}
TEST_CASE("Test create empty pile") {
    Pile p;
    CHECK(p.size() == 0);
}
TEST_CASE("Test add and remove cards from pile") {
    Pile p;
    p.add_card(WarCard(HEARTS, QUEEN));
    CHECK(p.size() == 1);
    p.add_card(WarCard(HEARTS, TEN));
    p.add_card(WarCard(HEARTS, TWO));
    CHECK(p.size() == 3);
    WarCard c = p.remove_card();
    CHECK(p.size() == 2);
    // Check FIFO behavior for piles (removed card is Queen of Hearts)
    CHECK(c.to_string() == "Queen of Hearts");
}
TEST_CASE("Test create pile from subdeck (deck)") {
    Deck d;
    Pile p(d.subdeck(2, 10));
    CHECK(p.size() == 9);
    CHECK(p.remove_card().to_string() == "3 of Clubs");
}
TEST_CASE("Test move cards from one pile to another") {
    Deck d;
    Pile p1(d.subdeck(0, 9));
    Pile p2(d.subdeck(10, 19));
    CHECK(p1.size() == 10);
    CHECK(p2.size() == 10);
    p1.move_cards(p2);
    CHECK(p1.size() == 20);
    CHECK(p2.size() == 0);
}
