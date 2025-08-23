#include <iostream>
using namespace std;

int main(){
    int total,N,price,count;

    cin >> total;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> price >> count;
        total -= price*count;
    }
    if (total == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

}