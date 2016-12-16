#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string input;
    while(cin >> input)
    {
        if(input != "#")
        {
            if(next_permutation(input.begin(), input.end() ) )
            {
                cout << input << endl;
            } // if for next_permutation()
            else
                cout << "No Successor" << endl;
        } // if for EOF with '#'
    } // while

} //main()
