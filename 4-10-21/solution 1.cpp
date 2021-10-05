#include <iostream>
using namespace std;
int main ()
{
    int n, oct_eq=0, factor=1 ;

    cout << "Enter the number to find its octal equivalent: ";
    cin >> n;

    for (;n !=0;n/=8)
    {
        oct_eq += (n%8)*factor;

        factor *= 10;
    }
      cout << "The octal equivalent of the number is: " << oct_eq << endl;
}
