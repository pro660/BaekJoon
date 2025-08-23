#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    if (num1 <= -10000 || num1 >= 10000 || num2 <= -10000 || num2 >= 10000) {
        return 1;
    }

    if (num1 > num2)
        cout << ">" << endl;
    if (num2 > num1)
        cout << "<" << endl;
    if (num1 == num2)
        cout << "==" << endl;

    return 0;
}