#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
  
  char a ;
  int spaces;
  int letters;
  int i;
  int position;
  
  cout << "Please enter a string to turn into a pyramid."<<endl;

  string in_string {};

  cin >> in_string;


  int rows = in_string.length();
  int center = 1;
  for (i=1;i<=rows;i++) {
    for (spaces = 1; spaces<=rows-i;spaces++){
	cout << " ";
    }
    for (position = 0; position <= (center/2); position++){
      cout << in_string.at(position);
    }
    for (position = (center/2)-1; position >= 0; --position){
      cout << in_string.at(position);
    }
    center = center +2;
    cout << endl;
  }
}
