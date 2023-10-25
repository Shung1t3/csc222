#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string vote;
    map<string, int> voteCount;
    map<string, int>::iterator it;

    while (true) {
        getline(cin, vote);

        if (vote == "***") {
            break;
        }

        // Check if the candidate is already in the map
        it = voteCount.find(vote);
        if (it == voteCount.end()) {
            // If not found, insert the candidate with a count of 1
            voteCount.insert(pair<string, int>(vote, 1));
        } else {
            // If found, increment the vote count using a pointer
            it->second++;
        }
    }

    int maxVotes = 0;
    string winner;
    for (it = voteCount.begin(); it != voteCount.end(); it++) {
        if (it->second > maxVotes) {
            maxVotes = it->second;
            winner = it->first;
        } else if (it->second == maxVotes) {
            winner = "Runoff!";
        }
    }

    if (winner != "Runoff!") {
        cout << winner << endl;
    } else {
        cout << "Runoff!" << endl;
    }

    return 0;
}
