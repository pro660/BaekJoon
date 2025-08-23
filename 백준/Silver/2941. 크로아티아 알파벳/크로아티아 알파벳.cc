#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

	string a = {'0',};	int count = 0;

	cin >> a;

	int len = a.length();

	for (int i = 0; i <= len; i++)
	{
		if (isalpha(a[i]))
		{
			if (a[i] == 'l' || a[i] == 'n')
			{
				if (a[i+1] == 'j')
				{
					count++;
					i++;
				}
				else{
					count++;
				}
			
			}
			else if (a[i] == 'd')
			{
				if (a[i+1] == 'z')
				{
					if(isalpha(a[i+2]) || a[i+2] == NULL){
						count++;
					}
					else{
						count++;
						i++;
					}
				}
				else{
					count++;
				}
			}	
			else{
				count++;
			}
				
		}
		
	}
	cout << count;
	
	return 0;
}
