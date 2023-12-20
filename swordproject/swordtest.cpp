#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "sword.cpp"

TEST_CASE("Test can create and render a sword") {
    Sword d;
    CHECK(d.to_string() == "0");

    Sword d2(42);
    CHECK(d2.to_string() == "42");

    Sword d3(200);
    CHECK(d3.to_string() == "200");

}

TEST_CASE("Test member functions for outputting damage and armor damage") {
    Sword d;
    CHECK(d.damage() == 0);

    Sword e(40);
    CHECK(e.damage() == 40);

    Sword f(20);
    int orc = 5;
    CHECK(f.armor_damage(orc) == 4);

} 





