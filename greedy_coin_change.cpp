/**
 * @file greedy_coin_change.cpp
 * @brief Example of a greedy algorithm for making change using coins of different denominations.
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * @brief Function to make change for a given amount using a set of coins.
 * 
 * @param amount The amount of money to make change for.
 * @param coins Vector containing the denominations of available coins.
 * @return Vector containing the coins used to make the change.
 */
vector<int> makeChange(int amount, const vector<int>& coins) {
    vector<int> result;

    // Sort the coins in descending order
    vector<int> sortedCoins(coins);
    sort(sortedCoins.rbegin(), sortedCoins.rend());

    // Iterate through the coins
    for (int i = 0; i < coins.size(); ++i) {
        while (amount >= sortedCoins[i]) {
            // Add the largest coin that is less than or equal to the remaining amount
            result.push_back(sortedCoins[i]);
            amount -= sortedCoins[i];
        }
    }

    return result;
}

/**
 * @brief Main function to demonstrate the use of the makeChange function.
 */
int main() {
    // Example: making change for 67 cents using coins of denominations 1, 5, 10, and 25 cents
    int amount = 67;
    vector<int> coins = {25, 10, 5, 1};
    
    // Call the makeChange function to get the coins used for making change
    vector<int> change = makeChange(amount, coins);

    // Print the coins used to make change
    cout << "Coins used to make change for " << amount << " cents:" << endl;
    for (int coin : change) {
        cout << coin << " ";
    }
    cout << endl;

    return 0;
}
