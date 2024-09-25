#include <iostream>

using namespace std;

//callback: a function that recieves a function pointer as a parameter

void increment(int&);
void decrement(int&);
void menu();
void callback(int, int&, void (*fp)(int&));

int main()
{
    void (*fp) (int&); //function pointer
    menu();
    int user_input;
    cin >> user_input;
    if(user_input == 1)
    {
        fp = increment;
    }
    if(user_input == 2)
    {
        fp = decrement;
    }
    int val = 10;
    callback(user_input, val, fp);
    cout << "Val = " << val << endl;

    return 0;
}

void increment(int& val)
{
    val++;
}
void decrement(int& val)
{
    val--;
}
void menu()
{
    cout << "Choose a function to call: " << endl;
    cout << "1. increment\n";
    cout << "2. decrement\n";
}
void callback(int type, int &val, void (*fp)(int&))
{
    cout << "Selected option: " << type << endl;
    fp(val);
}