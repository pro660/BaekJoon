#include <iostream>
using namespace std;

int main(){

    int N, a;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N-i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    

    return 0;
}