/*
*   Essential C++ : Basic C++ Programmming
*   Author : Pranav Choudhary
*   Date : 16 Jan 2021
*/

#include <iostream>
//#include <string>  // Program run fine 
using namespace std; // Errors

int main()
{
    string user_name; // string is undeclared
    cout << "Please enter your first name: "; // cout is undeclared
    cin >> user_name; // cin is undeclared
    cout << "Hi, " << user_name << "... and goodbye!\n";
    return 0;
}
