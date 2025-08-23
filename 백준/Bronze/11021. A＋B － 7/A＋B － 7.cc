#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c;

    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> a >> b;
        cout << "Case #" << i+1 << ": " << a+b << '\n';
    }
    
}