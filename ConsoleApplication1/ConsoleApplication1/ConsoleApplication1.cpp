#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "张";
    string lastName = "三";

    string fullName = firstName + " " + lastName;
    cout << fullName << endl; 

    string str = "Hello";
    str += " World";
    str += "!";
    cout << str << endl;
    return 0;
}