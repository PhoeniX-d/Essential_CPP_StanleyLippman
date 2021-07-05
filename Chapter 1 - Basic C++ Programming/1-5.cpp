/*
*   Essential C++ : Basic C++ Programmming
*   Author : Pranav Choudhary
*   Date : 5 July 2021
*/

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    /* Way 1
    string user_name;
    cout << "Enter your name:";
    cin >> user_name;
    if(user_name.size() > 2)
    {
        cout << "Nice name, " << user_name << endl;
    }
    else
    {
        cout << "Your name is too short" << endl;
    }*/

    char user_name[20] = {'\0'};
    cout << "Enter your name :";
    cin >> user_name;
    if(strlen(user_name) <= 2)
        cout << "Your name is too short" << endl;
    else
        cout << "Nice name " << user_name << endl;
    return 0;
}
