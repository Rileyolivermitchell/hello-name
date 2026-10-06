# include <iostream>
# include <string>
using namespace std;
const int HELLO = 100;

int main (){
    int myInt;
    double myDouble, myOtherDouble;
    char myChar;
    bool myBool;
    string name;

    //int
    cout << "My Int is: " << myInt << endl;
    myInt = 1;
    cout << "Enter a new number: " << endl;
    cin >> myInt;
    cout << "My Int is now: " << myInt << endl;

    cout << "\n";

    //string
    name = "Riley";
    cout << name << endl;
    name.append(" Mitchell");
    cout << name << endl;
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "My name is now: " << name << endl;
    cout << "Your surname is now:" << name.append(" Mitchell");

    cout << "\n";

    //ASCII
    myChar = 'Z';
    cout << "Character: " << myChar << endl;

    return 0;
}