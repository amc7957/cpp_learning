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
  getline(cin,message);

  int i = 0;
  int message_len = message.length();
  string found;

  for (char letter: message) {
    size_t found = alphabet.find(letter);
    if (found != string::npos) {
      char found_letter {key.at(found)};
      message_encode += found_letter;
    } else{
      message_encode += letter;
    }
  }
  cout << "Encrypted message: " << message_encode << endl;

  string undo_encode {};

  for(char letter: message_encode){
    size_t found = key.find(letter);
    if (found != string::npos){
      char found_letter {alphabet.at(found)};
      undo_encode += found_letter;  
    } else{
      undo_encode += letter;
    }
  }
  cout << "Original message: " << undo_encode << endl;
}
