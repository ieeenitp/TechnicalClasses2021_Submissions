#include <iostream>

using namespace std;

int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int main()
{
    float s = 0;
    for (int i = 1; i <= 7; i++)
        s = s + (float) i / fact(i);

    cout << s;

    return 0;
}