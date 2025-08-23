#include <iostream>
using namespace std;

int main(){
    
    int N,M,i,j,k;

    cin >> N >> M;

    int a[N] = {0,};

    for (int p = 0; p < M; p++)
    {
        cin >> i >> j >> k;

        for (int q = i; q <= j; q++)
        {
            a[q-1] = k;
        }

    }
    

    for (int z = 0; z < N; z++)
    {
        cout << a[z] << " ";
    }

    return 0;
}