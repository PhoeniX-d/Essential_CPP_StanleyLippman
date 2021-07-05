/*
*   Essential C++ : Basic C++ Programmming
*   Author : Pranav Choudhary
*   Date : 5 July 2021
*/

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    int n, sum = 0;
    vector<int> vec_el;
    cout << "Enter the numbers"<< endl;
    while(cin >> n)
        vec_el.push_back(n);
    for(vector<int>::iterator itr = vec_el.begin(), vec_end = vec_el.end(); itr != vec_end; itr++)
    {
        sum = sum + *itr;
    }
    cout << "Summation is " << sum << " and average is " << ((double)sum / vec_el.size()) << endl;
    return 0;
}
