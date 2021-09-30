#include <iostream>

using namespace std;

int main()
{
    int y;
    float i, x;

    cout << "i" << "\t\t" << "y" << "\t" << "x" << "\t" << endl << endl;

    for (y = 1; y <= 6; y++)
    {
        x = 5.5;
        while (x <= 12.5)
        {
            i = 2 + (y + 0.5 * x);
            cout << i << "\t\t" << y << "\t" << x << "\t" << endl;
            x += 0.5;
        }
    }
    return 0;
}


