#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int N,M,i,j;

    cin >> N >> M;

    int arr[N];

    for (int z = 0; z < N; z++)
    {
        arr[z] = z + 1;
    }

    for (int k = 0; k < M; k++)
    {
        cin >> i >> j;

        reverse(arr+i-1,arr+j);
    }

    for (int q = 0; q < N; q++)
    {
        cout << arr[q] << " ";
    }
    return 0;
}