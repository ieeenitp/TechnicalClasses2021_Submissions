#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout <<"Input the size of inverted half pyramid :\n";
    cin >>n;
    for(i=n;i>0;i--)
    {
        for(j=0;j<=i-1;j++)
        {
            cout << j+1;
        }

            cout <<"\n";
    }
}