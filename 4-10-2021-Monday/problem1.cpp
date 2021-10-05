#include<iostream>
using namespace std;

int main()
{
    int n, factor=1, oct_num=0;

    cout << "Input the number:\n";
    cin >> n;
    cout << "Octal equivalent of number:" << n  ;
    while(n != 0)
    {
        oct_num += (n%8)*factor;
         n = n/8;
         factor *= 10;
    }
        cout <<" is\n"<< oct_num;

     return 0;
}