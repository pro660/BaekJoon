#include <iostream>
using namespace std;

int main(){
	
	int T,c=0; char arr[1000];
		
	cin >> T;
		
	for(int i=0; i<T; i++){
		
		cin >> arr;
		
		for(int j=0; j<1000; j++){
			if(arr[j]!=0){
				c++;
			}
			else
				break;
		}
		cout << arr[0] << arr[c-1] << '\n';
		c=0;
	}
	return 0;
} 