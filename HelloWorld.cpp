
#include <iostream>
#include <string>
using namespace std;

int main() {
    // insert code here...

    string user_name = "";
     // prompts user to enter a name
    std::cout << "Enter name: " << flush;
    cin >> user_name;
    // greats user
    std::cout << "Hello, " << user_name << "!" <<  endl;
    std::cout << "Welcome to CSE 100!" << endl;
    return 0;
}
