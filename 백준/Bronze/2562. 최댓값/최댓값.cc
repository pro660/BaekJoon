#include <iostream>
using namespace std;

int main()
{

    int a[9];
    int max = 0;
    int sum = 0;
     
    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
            sum = i+1;
        }
        
    }
    cout << max << '\n';
    cout << sum;

    return 0;
}