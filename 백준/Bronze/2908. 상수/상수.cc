#include <iostream>
#include <string>
using namespace std;

int main(){

	string a, b;
	char temp;

	cin >> a >> b;

	temp = a[0];
	a[0] = a[2];
	a[2] = temp;

	temp = b[0];
	b[0] = b[2];
	b[2] = temp;

	if (a > b){
		cout << a;
	}
	else{
		cout << b;
	}

}