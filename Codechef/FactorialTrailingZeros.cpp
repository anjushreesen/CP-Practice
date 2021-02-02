#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int count, n, zeros, c;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        zeros = 0;
        cin >> n;
        c = 5;
        while ((n / c) > 0) //(input/c) is a non negative integer.
        {
            zeros = zeros + (n / c);
            c = c * 5; //Divide input by a higher power of 5
        }
        cout << zeros << endl;
    }

    return 0;
}
