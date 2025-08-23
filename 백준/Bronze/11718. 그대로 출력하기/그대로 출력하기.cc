#include <iostream>
using namespace std;

int main()
{
	char a[101];

	while(!cin.eof()){

		cin.getline(a,101);
		cout << a << '\n';

	}
}