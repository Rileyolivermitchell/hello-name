# include <iostream>
# include <string>
# include <sstream>
using namespace std;

int main () {
    string book, author;
    int year;

    // input
    cout << "What Is Your Favourite Book?:" << endl;
    cin >> book;
    cout << "Who Wrote " << book << "?:" << endl;
    cin >> author;
    cout << "What Year Was " << book << " Published?:" << endl;
    cin >> year;

    cout << "\n";

    // output
    cout << "======================" << endl;
    cout << "Favourite Book: " << book << endl;
    cout << "Writen By: " << author << endl;
    cout << "Year Published: " << year << endl;
    cout << "======================" << endl;

    return 0;
}