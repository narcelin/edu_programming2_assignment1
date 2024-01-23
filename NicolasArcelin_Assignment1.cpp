// Coin Dispenser Machine by Nicolas Arcelin Ovando
// Created on 01/23/2024
// Input a monetary value in format of $xx.xx and this program will dispense the appropriate change.
// Example: user inputs 5.42, machine dispenses the following; 21 quarters, 1 dime, 1 nickel, 2 pennies

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() { //Using canadian system
    const int TWO_DOLLAR_COIN_VALUE = 2;
    const int ONE_DOLLAR_COIN_VALUE = 1;
    const int QUARTER_VALUE = 25;
    const int NICKEL_VALUE = 5;
    const int PENNY_VALUE = 1;

    double user_money_input;
    cin >> user_money_input;
    int money_x_100 = user_money_input * 100;
    cout << money_x_100 << endl;
    if(money_x_100 <= 100 || money_x_100 > 10000){
        cout << "Invalid input, please place a value between 0 and 100" << endl;
        return 0;
    } else {
        int two_dollar_coins = money_x_100 / TWO_DOLLAR_COIN_VALUE;
        double remainder_after_two_dollar_coins = money_x_100 % TWO_DOLLAR_COIN_VALUE;
        cout << two_dollar_coins;
    }
    

    // User inputs money value
    // System checks that user placed valid value
    // System process to find coins needed to hit that values. Can use %
    // System returns coins needed


    return 0;
}