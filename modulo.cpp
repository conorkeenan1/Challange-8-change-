#include <iostream>
using namespace std;

int main(){

    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};

    int change_amount{};

    cout << "Enter an amount in cents: ";
    cin >> change_amount;

    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

    dollars = change_amount/dollar_value; // dollars = 127 / 100 which is 1
    balance = change_amount % dollar_value; // balance = 127 % 100 which is 27

    quarters = balance/quarter_value; // quarters = 27 / 25 which is 1
    balance %= quarter_value; // balance = 27 % 25 which nis 2

    dimes = balance/dime_value; // dimes = 2 / 10 which is 0
    balance %= dime_value; // balance = 2 % 10 (remains the same)

    nickels = balance/nickel_value; // dimes = 2 / 5 which is 0
    balance %= nickel_value; // balance = 2 % 5 (remains the same)

    pennies = balance; // 2

    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: : " << quarters << endl;
    cout << "Dimes: : " << dimes << endl;
    cout << "Nickels: : " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
}
