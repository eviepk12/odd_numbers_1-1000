// Print out odd numbers from 1-1000

#include <iostream>

using std::cout;
using std::cin;

int main ()
{

    int nomor = 1000;

    for (int i = 1; i<=nomor;i++)
    {
        if (i % 2) 
        {
            cout << i << " ";
        }
    }

    cin.get();
    return 0;
}