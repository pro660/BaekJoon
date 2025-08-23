#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cin >> x;
    cin >> y;

    if (x > 1000 || x < -1000 || y > 1000 || y < -1000 || x == 0 || y == 0)
    {  
        return 1;
    }
    
    if (x > 0 && y > 0)
        printf("1");
    else if (x > 0 && y < 0)
        printf("4");
    else if (x < 0 && y > 0)
        printf("2");
    else if (x < 0 && y < 0)
        printf("3");

    return 0;
}