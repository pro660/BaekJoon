#include <iostream>
using namespace std;

int main()
{

    int N,M,i,j;

    cin >> N >> M;

    int a[N];

    for (int p = 1; p <= N; p++)
    {
        a[p-1] = p;
    }

    for (int q = 0; q < M; q++)
    {
        cin >> i >> j; 
        
        swap(a[i-1],a[j-1]);

    }

    for (int z = 0; z < N; z++)
    {
        cout << a[z] << " ";
    }
    
    

    return 0;
}