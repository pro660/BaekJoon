#include <iostream>
using namespace std;

int main(){

    int n,v,sum=0;
    
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];    
    }
    
    cin >> v;

    for (int i = 0; i < n; i++)
    {
        if (a[i]==v)
        {
            sum=sum+1;
        }
        
    }

    cout << sum;
    
    return 0;
}