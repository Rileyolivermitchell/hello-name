# include <iostream>
# include <string>
# include <sstream>
using namespace std;

int main () {
    int num1 = 8, num2 = 10, num3, output;

    cout << "What Is Number 3?: " << endl;
    cin >> num3;

    output = num1 + num2 + num3;

    cout << "\n";

    cout << "======================" << endl;
    cout << num1 << " + " << num2 << " + " << num3 << " = " << output << endl;
    cout << "======================" << endl;


    return 0;
}