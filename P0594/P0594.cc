#include <iostream>
#include <istream>
using namespace std;

long convert(long a)
{
    int b1 = (a & 0x000000ff) << 24;
    int b2 = (a & 0x0000ff00) << 8;
    int b3 = (a & 0x00ff0000) >> 8;
    int b4 = (a & 0xff000000) >> 24;

    return b1 | b2 | b3 | b4;
}// long convert(long)

int main()
{
    int val;
    while(cin >> val)
    {
        cout << val << " converts to " << convert(val) << endl;
    } //while
}//main()
