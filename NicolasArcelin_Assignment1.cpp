// Coin Dispenser Machine by Nicolas Arcelin Ovando
// Created on 01/23/2024
// Input a monetary value in format of $xx.xx and this program will dispense the appropriate change.
// Example: user inputs 5.42, machine dispenses the following; 21 quarters, 1 dime, 1 nickel, 2 pennies

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib> 
using namespace std;

int main() { //Using canadian system

//Coin values are multiplied by 100
    const int TWO_DOLLAR_COIN_VALUE = 200;
    const int ONE_DOLLAR_COIN_VALUE = 100;
    const int QUARTER_VALUE = 25;
    const int DIME_VALUE = 10;
    const int NICKEL_VALUE = 5;
    const int PENNY_VALUE = 1;

    double user_money_input;
    cin >> user_money_input;

    if(user_money_input <= 0 || user_money_input > 100){
        cout << "Invalid input, please place a value between 0 and 100" << endl;
        exit(1);
        return(0);
    }

    int money_x_100 = user_money_input * 100;
    cout << "Money value * 100: " << money_x_100 << endl;

//Two Dollar Coins
    int two_dollar_coins = money_x_100 / TWO_DOLLAR_COIN_VALUE;
    int remainder_after_two_dollar_coins = money_x_100 % TWO_DOLLAR_COIN_VALUE;
    cout << "Two dollar coins: " << two_dollar_coins << endl;

    if(remainder_after_two_dollar_coins == 0){
        cout << "End of program" << endl;
        exit(1);
        return(0);
    }

//One Dollar Coins
    int one_dollar_coins = remainder_after_two_dollar_coins / ONE_DOLLAR_COIN_VALUE;
    int remainder_after_one_dollar_coins = remainder_after_two_dollar_coins % ONE_DOLLAR_COIN_VALUE;

    cout << "One dollar coins: " << one_dollar_coins << endl;
    //cout << remainder_after_one_dollar_coins;
    
    if(remainder_after_one_dollar_coins == 0){
        cout << "End of program" << endl;
        exit(1);
        return(0);
    }
    
//Quater Coins
    int quarter_coins = remainder_after_one_dollar_coins / QUARTER_VALUE;
    int remainder_after_quarter_coins = remainder_after_one_dollar_coins % QUARTER_VALUE;

    cout << "Quarter coins: " << quarter_coins << endl;
    //cout << remainder_after_quarter_coins;
    
    if(remainder_after_quarter_coins == 0){
        cout << "End of program" << endl;
        exit(1);
        return(0);
    }
      
//Dime Coins
    int dime_coins = remainder_after_quarter_coins / DIME_VALUE;
    int remainder_after_dime_coins = remainder_after_quarter_coins % DIME_VALUE;

    cout << "Dime coins: " << dime_coins << endl;
    //cout << remainder_after_dime_coins;
    
    if(remainder_after_dime_coins == 0){
        cout << "End of program" << endl;
        exit(1);
        return(0);
    } 

//Nickel Coins
    int nickel_coins = remainder_after_dime_coins / NICKEL_VALUE;
    int remainder_after_nickel_coins = remainder_after_dime_coins % NICKEL_VALUE;

    cout << "Nickel coins: " << nickel_coins << endl;
    //cout << remainder_after_nickel_coins;
    
    if(remainder_after_nickel_coins == 0){
        cout << "End of program" << endl;
        exit(1);
        return(0);
    } 

//Penny Coins
    int penny_coins = remainder_after_nickel_coins / PENNY_VALUE;
    int remainder_after_penny_coins = remainder_after_nickel_coins % PENNY_VALUE;

    cout << "Penny coins: " << penny_coins << endl;
    //cout << remainder_after_penny_coins;
    
    if(remainder_after_penny_coins == 0){
        cout << "End of program" << endl;
        exit(1);
        return(0);
    } 


    // User inputs money value
    // System checks that user placed valid value
    // System process to find coins needed to hit that values. Can use %
    // System returns coins needed


    return 0;
}