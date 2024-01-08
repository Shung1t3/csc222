#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cmath>
#include "Cards.h"
#include "random.h"
using namespace std;

#define PLAYER1 1
#define PLAYER2 2

int main()
{
    srand(time(0));
    Deck deck;
    deck.shuffle();
    Pile player1(deck.subdeck(0, 25));
    Pile player2(deck.subdeck(26, 51));
    Pile discards;
    WarCard player1card;
    WarCard player2card;
    bool no_winner = true;
    int winner;

    while (no_winner) {
        // Confirm each player still has a card
        if (!player1.size() || !player2.size()) {
            no_winner = false;
            winner = (!player1.size()) ? PLAYER2 : PLAYER1;
            break;
        }

        // Get a card from each player and add them to discards pile
        player1card = player1.remove_card();
        player2card = player2.remove_card();
        discards.add_card(player1card);
        discards.add_card(player2card);

        // Compare the cards give cards to winner if there is one
        if (player1card.is_greater(player2card)) {
            player1.move_cards(discards);
        } else if (player2card.is_greater(player1card)) {
            player2.move_cards(discards);
        } else {                             // It's war!
            // Confirm each player has enough cards
            if (player1.size() < 4 || player2.size() < 4) {
                no_winner = false;
                winner = (player1.size() < 4) ? PLAYER2 : PLAYER1;
                break;
            }
            // deal 3 cards face down
            for (int i = 0; i < 3; i++) {
                discards.add_card(player1.remove_card());
                discards.add_card(player2.remove_card());
            }
            continue;
        }
        cout << "Player 1 has " << player1.size() << " cards ";
        cout << "and Player 2 has " << player2.size() << " cards.\n";
    }

    cout << "Player " << winner << " wins!" << endl;

    return 0;
}
