#include <iostream>

using namespace std;

int main() {

    cout << "hello\n"; // works same as endl to move to new line
    cout << "world" << endl;

    string sentence = "hello world";
    cout << sentence << endl;
    cout << sentence.length() << endl;
    cout << sentence[0] << endl;
    sentence[0] = 'H'; //changes sentence index position 0 to 'H'
    cout << sentence << endl;

    cout << sentence.find("world", 0) << endl; //searches string for given "world" starting at given index 0 and prints the index which world starts at ,6
    cout << sentence.substr(6, 5); // prints section of string starting at index position given ,6 , and goes for number of characters given ,5

    return 0;
}
