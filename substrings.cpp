#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    //substring portion

    cout << "Substrings for " << input << ": " << endl;
    for (int i = 0; i < input.length(); i++)
    {
        for (int j = 1; j <= input.length() - i; j++)
        {
            cout << input.substr(i,j) << ", ";
        }
    }
    cout << endl;
    return 0;
}