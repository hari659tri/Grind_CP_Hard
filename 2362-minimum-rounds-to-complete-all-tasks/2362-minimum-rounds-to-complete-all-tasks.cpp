class Solution {
public:
    int minimumRounds(vector<int>& packageSizes) {
        unordered_map<int, int> freq;
    for (int size : packageSizes) {
        freq[size]++;
    }

    int trips = 0;

    for (auto [size, count] : freq) {
        if (count == 1) return -1;  // Cannot make a pair or triplet

        // Minimize trips using 3s
        trips += count / 3;
        int rem = count % 3;

        if (rem != 0) {
            // If remainder is 1 or 2, we need 1 more trip
            trips++;
        }
    }

    return trips;
    }
};