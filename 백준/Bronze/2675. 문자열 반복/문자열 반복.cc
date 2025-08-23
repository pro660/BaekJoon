#include <iostream>
#include <cstring>
using namespace std;

int Repeatletter(int a, char b[]){

	int len = strlen(b);
	
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << b[i];
		}
	}
	cout << '\n';
	return 0;
}

int main(){

	char S[21]; int T, a;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> a;
		cin >> S;
		Repeatletter(a,S);
	}
	

}