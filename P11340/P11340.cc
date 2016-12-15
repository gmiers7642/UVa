#include <iostream>
#include <istream>
#include <sstream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n_cases = 0;
    cin >> n_cases;

    for(int i = 1; i <= n_cases; i++)
    {
        // Read the price list
        int n_prices = 0;
        cin >> n_prices;

        map<char, int> data;
        map<char, int> prices;

        for(int j = 1; j <= n_prices; j++)
        {
            char key;
            int value;
            cin >> key >> value;
            prices[key] = value;
        } // for, price loop

        // Read the article data
        int n_lines;
        cin >> n_lines;

        for(int j = 1; j <= n_lines + 1; j++)
        {
            string input;
            char c;
            getline(cin, input);
            stringstream si(input);
            while(si.get(c))
            {
                if(prices.find(c) != prices.end())
                    data[c] += 1;
                else
                    data[c] = 1;
            } // while for characters
        } // for, data loop

        // Calculate the prices based on the character data
        int total_price = 0;
        for(map<char, int>::iterator it = prices.begin(); it != prices.end(); ++it)
        {
            if(data.find(it->first) != data.end())
                total_price += it->second * data[it->first];
        } // for, total price calculation

        // Reformat the price for output
        int dollars = total_price / 100;
        int cents = total_price - dollars * 100;
        string extra_zero = (cents < 10) ? "0" : "";

        cout << dollars << "." << extra_zero << cents << "$" << endl;

    } //for, main loop

} //main()
