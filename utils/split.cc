#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print_vec(vector<string> input)
{
    for(vector<string>::iterator it = input.begin(); it != input.end(); ++it)
    {
        cout << *it << " , ";
    } // for
    cout << endl;

} // print_vec(vector<string>)

vector<string> split(string input, char delimiter)
{
    vector<string> output;
    if(*input.end() != delimiter)
        input += delimiter;
    int s_index = 0;
    for(string::iterator it = input.begin(); it != input.end(); ++it)
    {
        if(*it == delimiter)
        {
            if(it == input.end() - 1)
            {
                output.push_back(input.substr(s_index, it - input.begin() - s_index) );
            }
            else
            {
                output.push_back(input.substr(s_index, it - input.begin() - s_index ) );
                s_index = it - input.begin() + 1;
            } // else
        } // if
        else if(it == input.end() - 1 && s_index == 0)
            output.push_back(input);
    } // for
    return output;
} // split(string)

int main()
{
    string s1 = "###!!!!"; char d1 = ',';
    string s2 = "tthgh@gkshd@"; char d2 = '@';
    string s3 = "skhffjshjedknfnbshe"; char d3 = 'j';
    string s4 = "46345dgtdb#88888888"; char d4 = '#';

    vector<string> l1 = split(s1, d1);
    vector<string> l2 = split(s2, d2);
    vector<string> l3 = split(s3, d3);
    vector<string> l4 = split(s4, d4);

    cout << "s1 = " << s1 << ", delimiter1 = " << d1 << endl;
    cout << "s1 split = ";
    print_vec(l1);
    cout << "s2 = " << s2 << ", delimiter2 = " << d2 << endl;
    cout << "s2 split = ";
    print_vec(l2);
    cout << "s3 = " << s3 << ", delimiter3 = " << d3 << endl;
    cout << "s3 split = ";
    print_vec(l3);
    cout << "s4 = " << s4 << ", delimiter4 = " << d4 << endl;
    cout << "s4 split = ";
    print_vec(l4);
} // main()
