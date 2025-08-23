#include <iostream>
using namespace std;

int main(){

    int a;
    int sum=0;
    int per[42] = {0,};


    for (int i = 0; i < 10; i++)
    {
        cin >> a;

        per[a % 42]++;     
    }

    for (int j = 0; j < 42; j++)
    {
        if (per[j] != 0)
        {
            sum ++;
        }

    }
    cout << sum;
    
}