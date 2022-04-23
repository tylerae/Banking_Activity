//
//  main.cpp
//  W01_project
//
//  Created by Tyler  Elms on 4/23/22.
//
#include <iostream> // for cout, cin
#include <string>   // for string
using namespace std;

// Main function to collect and display bank data
int main(){
    // sets the account number to 0
    int acct_num= 0;
    // takes name of the customer
    string bank_holder;
    std::cout << "Enter name on account: ";
    std::getline(std::cin, bank_holder);
    // takes in the user balance
    double account_balance;
    cout << "Enter the Balance: ";
    cin >> account_balance;
    cout.setf(ios::fixed);
    cout.precision(2);
    
    
    
    int option_value = 1;
    // runs until the user selects the number 0 to quit. It simply returns 0 to break the loop
    while (option_value!= 0){
        // displays the option menu
        cout << " \nAccount Menu:\n";
        cout << "0. Quit Program\n";
        cout << "1. Display Account Information\n";
        cout << "2. Add a deposit to an account\n";
        cout << "3. Withdraw from an account\n";
        //user selection of the menu
        int user_input;
        cout << "Your choice: ";
        cin >> user_input;
        //the user can deposit money which is added to the total balance
        if (user_input == 2){
            double deposit;
            cout << "Amount to Deposit: ";
            cin >> deposit;
            account_balance = deposit + account_balance;
        }
        //returns 0 to the loop so that it breaks and the program quits
        if (user_input == 0){
            option_value = 0;
            return option_value;
        }
        //displays the account info
        if (user_input == 1){
            std::cout << "Account ID: " << acct_num;
            std::cout << "\tName: " << bank_holder;
            std::cout << "\tBalance: $" << account_balance;
            std::cout << " \n";
        }
        // allows the user to subtract from the current account balance 
        if (user_input == 3){
            double withdrawl;
            cout << "Amount to withdraw: ";
            cin >> withdrawl;
            account_balance = account_balance - withdrawl;
        }
        
        }
        
}
        
        


