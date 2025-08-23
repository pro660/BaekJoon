#include <iostream>
using namespace std;

main()
{   
    int a,b,d,e;
    int c=0;

    cin >> a;
    cin >> b;
    e = a*b;
while(c < 3){

    d = b%10;

    cout << a*d << '\n';
    
    b = b/10;

    c = c + 1;

}
    cout << e;
}