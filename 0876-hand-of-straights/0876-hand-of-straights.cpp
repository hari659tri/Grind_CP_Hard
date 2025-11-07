#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if (n % groupSize != 0) return false;

        map<int, int> mp;
        for (int card : hand) {
            mp[card]++;
        }

        // Iterate safely using while loop instead of for(auto it : mp)
        while (!mp.empty()) {
            int start = mp.begin()->first; // smallest card in current group

            for (int i = 0; i < groupSize; i++) {
                int card = start + i;
                if (mp.find(card) == mp.end()) return false; // missing card

                mp[card]--;
                if (mp[card] == 0) {
                    mp.erase(card);
                }
            }
        }

        return true;
    }
};
