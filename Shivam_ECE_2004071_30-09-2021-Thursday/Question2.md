#include <iostream>
using namespace std;
int main()
{
    int n, arr[100], j;
  cout<<"Enter the number: " <<endl;
    cin >> n;
    int i = 1;
    while (n != 0)
    {
        arr[i++] = n % 8;
        if (arr[i] == 0)
        {
            arr[i + 1] = n / 8;
        }
        n = n / 8;
    }
  cout<<"The octal equivalent of the given number is: "<<endl;
    for (j = i - 1; j > 0; j--)
    {
        cout << arr[j];
    }
    return 0;
}
