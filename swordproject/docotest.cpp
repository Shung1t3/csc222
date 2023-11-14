#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "sword.h"

TEST_CASE("Test weapon and dummy interactions") {
    // Create a weapon with a base damage and critical chance.
    weapon myWeapon(20, 0.3);

    // Create a dummy with an initial health.
    dummy myDummy(100);

    // Test the weapon's damage calculation.
    SUBCASE("Test weapon damage calculation") {
        myWeapon.test();
        // Example output: "Damage: <calculated damage>"
    }

    // Attack the dummy with the weapon and display the results.
    SUBCASE("Test weapon attack and dummy health") {
        myWeapon.attack(myDummy);
        // Example output: "Damage: <calculated damage> Dummy Health: <remaining health>"
    }

    // Check the current health of the dummy.
    SUBCASE("Test dummy health check") {
        myDummy.check();
        // Example output: "Health: <remaining health>"
    }
}