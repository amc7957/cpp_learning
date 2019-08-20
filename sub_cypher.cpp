#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {

  string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string key = "1234567890!@#$%^&*()_+-=<>?{}~zyxwvutsrqponmlkjihgfe";
  string message{};
  string message_encode {};
  
  cout << "Please enter the message that you would like to encrypt.";

  cin >> message;

  int i = 0;
  int message_len = message.length();
  char found;
  cout << message_len;
  while (i<=message_len){
    found = alphabet.find(message[i]);
    cout << found;
    i= i+1;
  }
}
