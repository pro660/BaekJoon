#include <iostream>
using namespace std;

main()
{   
    int a,b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << (a+b)%c << '\n';
    cout << ((a%c) + (b%c))%c << '\n';
    cout << (a*b)%c << '\n';
    cout << ((a%c) * (b%c))%c;
}