#include <iostream>

using namespace std;

void increment(int&);
void decrement(int&);


int main()
{
    //function pointer: a pointer variable pointing to the address of the code of the fucntion
    //in C/C++, function name is the address of the function
    //declare a function pointer

    //fp: a pointer variable pointing to the function increment
    //increment's return type is void, and parameter is int
    void (*fp)(int&) = increment;
    fp = decrement;

    int x = 10;
    fp(x); //"called bypassing?"
    (*fp)(x); //decrement(x);
    cout << "x = " << x << endl;

    fp = increment;
    (*fp)(x);
    cout << "x = " << x << endl;

    //say you have a string... "a" "b" "c", how many possible recursions, found in hanoi

}

void increment(int& val)
{
    val++;
}
void decrement(int& val)
{
    val--;
}