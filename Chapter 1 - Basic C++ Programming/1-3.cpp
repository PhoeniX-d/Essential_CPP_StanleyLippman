/*
*   Essential C++ : Basic C++ Programmming
*   Author : Pranav Choudhary
*   Date : 16 Jan 2021
*/

#include <iostream>
#include <string>
using namespace std;

int my_main()   // Linker error entry point must be defined
{
    string user_name;
    cout << "Please enter your first name: ";
    cin >> user_name;
    cout << "Hi, " << user_name << "... and goodbye!\n";
    return 0;
}
