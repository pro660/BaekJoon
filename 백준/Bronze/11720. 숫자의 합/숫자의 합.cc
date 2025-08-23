#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int N; int sum=0; char a[101];
	
	cin >> N;
	cin >> a;
	
	for(int i=0; i<N; i++){
		sum = sum + (a[i]-'0');
	}
	
	cout << sum;
	
	return 0;
} 
