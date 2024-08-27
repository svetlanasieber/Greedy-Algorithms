

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> makeChange(int amount, const vector<int>& coins) {
    vector<int> result;


    vector<int> sortedCoins(coins);
    sort(sortedCoins.rbegin(), sortedCoins.rend());


    for (int i = 0; i < coins.size(); ++i) {
        while (amount >= sortedCoins[i]) {
            result.push_back(sortedCoins[i]);
            amount -= sortedCoins[i];
        }
    }

    return result;
}


int main() {
 
    int amount = 67;
    vector<int> coins = {25, 10, 5, 1};

    vector<int> change = makeChange(amount, coins);

    cout << "Coins used to make change for " << amount << " cents:" << endl;
    for (int coin : change) {
        cout << coin << " ";
    }
    cout << endl;

    return 0;
}
