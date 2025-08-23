#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a < 1 || a > 4000) {
        return 1;
    }

    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
        printf("1");
    else
        printf("0");

    return 0;
}