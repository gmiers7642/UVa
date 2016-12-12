#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <istream>
using namespace std;

int main()
{
    int n_cases = 0;
    cin >> n_cases;

	for(int i = 1; i <= n_cases; i++)
    {
        string input;

        // Fix line spacing to account for space separation
        if(i == 1)
            getline(cin, input);
        getline(cin, input);

        // Get indices
        getline(cin, input);
        stringstream si(input);
        int temp = 0;
        vector<int> indices;
        while(si >> temp)
        {
            indices.push_back(temp);
        } //while

        // Get permuted numbers
        string input_n;
        getline(cin, input_n);
        stringstream sn(input_n);
        string temp_num;
        vector<string> data;
        while(sn >> temp_num)
        {
            data.push_back(temp_num);
        } //while

        // Create a vector to store the output
        vector<string> output;
        output.resize(indices.size());

        for(vector<int>::iterator it = indices.begin(); it != indices.end(); ++it)
        {
            output[*it - 1] = data[it - indices.begin()];
        }

        for(vector<string>::iterator it = output.begin(); it != output.end(); ++it)
        {
            cout << *it << endl;
        }
        if(i != n_cases)
            cout << endl;

    } //for

} //main()
