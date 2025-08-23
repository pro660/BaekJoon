#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	int Chess[6] = {1 ,1 ,2 ,2 ,2 ,8};
	int b[6];

	for (int i = 0; i < 6; i++)
	{
		cin >> b[i];
	}
	

	for (int i = 0; i < 6; i++)
	{	
		cout << Chess[i] - b[i] << " ";
	}
	
	return 0;
}



