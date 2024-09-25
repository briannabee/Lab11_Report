#include <iostream>

using namespace std;

void hanoiTower(int ndisks, int start, int end, int temp, int& count); //varirable name: omitted

int main()
{
    int ndisks;
    cout << "How many disks? : ";
    cin >> ndisks;

    int count = 0;
    cout <<"Start: 0, End: 1, Temp: 2" << endl;
    hanoiTower(ndisks, 0, 1, 2, count); //start: 0, end: 1, temp: 2
    cout << "Number of moves: " << count << endl;

    return 0;
}

void hanoiTower(int ndisks, int start, int end, int temp, int& count)
{
    if (ndisks > 0) //ndisks == 0: stopping condition--> immediately return without calling the function
    {
        hanoiTower(ndisks-1, start, temp, end, count);
        cout << "Move " << ndisks - 1 << " disks from " << start << " to " << end << endl;
        count++;
        hanoiTower(ndisks-1, temp, end, start, count);
    }
}