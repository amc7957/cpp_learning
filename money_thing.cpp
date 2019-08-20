#include <iostream>

using namespace std;

int main()
{
  const int dollar_val{100};
  const int quarter_val{25};
  const int dime_val{10};
  const int nickel_val{5};

  int change {};

  int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

  cout << "Enter your change value:";
  cin >> change;
    
  dollars = change/dollar_val;
  balance = change%dollar_val;

  quarters = change/quarter_val;
  balance %=quarter_val;

  dimes = change/dime_val;
  balance %= dime_val;

  nickels = change/nickel_val;
  balance %= nickel_val;

  pennies = balance;

  cout << "\nYour change amount is:"<<endl;
  cout << "Dollars:" << dollars<<endl;
  cout << "QUarters:" << quarters<<endl;
  cout << "Nickels:" <<nickels<<endl;
  cout << "Dimes:" <<dimes<<endl;
  cout << "Pennies:" <<pennies<<endl;

}
