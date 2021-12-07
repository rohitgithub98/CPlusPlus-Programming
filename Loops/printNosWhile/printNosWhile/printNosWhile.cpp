
#include <iostream>
using namespace std;

int main()
{
    int n, no = 1;
    cout << "Enter no of values : ";
    cin >> n;
    while (n != 0)
    {
        cout << no << " ";
        no++;
        --n;
    }
}


