#include <iostream>
using namespace std;

int main()
{
    int h,m;

    cin >> h;
    cin >> m;

    if(m>=45){
        cout << h << " ";
        cout << (m-45);
    }
    else if(h>0 && m<45){
        cout << h-1 << " ";
        cout << (m+15);
    }
    else if(h==0 && m<45){
        cout << 23+h << " ";
        cout << (m+15);
    }





}
