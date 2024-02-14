# Greedy-Algorithms
This C++ source code implements a greedy algorithm for making change using coins of different denominations. The makeChange() function takes an integer amount representing the amount of money to make change for and a vector coins representing the denominations of available coins. It returns a vector containing the coins used to make the change.

The function starts by sorting the coins vector in descending order to ensure that the largest coins are considered first. Then, it iterates through the sorted coins and, for each coin, it repeatedly adds the coin to the result vector until the remaining amount is less than the value of the current coin.

In the main() function, an example is provided where we want to make change for 67 cents using coins with denominations of 25, 10, 5, and 1 cents. The makeChange() function is called with these inputs, and the result is printed to the console, showing the coins used to make the change.

The documentation provided above describes the process of making change for 67 cents using the greedy algorithm implemented in the code. It explains each step of the algorithm and notes that while the greedy algorithm finds a solution in this case, it may not always produce the optimal solution for every problem.
