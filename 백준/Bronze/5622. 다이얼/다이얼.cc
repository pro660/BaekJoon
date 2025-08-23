#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
	
	string input;

	cin >> input;

	int sec = 2, sum = 0, len = input.length();

	for (int i = 0; i < len; i++)
	{	sec = 2;

		if (input[i] == 'A' || input[i] == 'B' || input[i] == 'C')
		{
			sec = sec +1;
		}
		else if (input[i] == 'D' || input[i] == 'E' || input[i] == 'F')
		{
			sec = sec +2;
		}
		else if (input[i] == 'G' || input[i] == 'H' || input[i] == 'I')
		{
			sec = sec +3;
		}
		else if (input[i] == 'J' || input[i] == 'K' || input[i] == 'L')
		{
			sec = sec +4;
		}
		else if (input[i] == 'M' || input[i] == 'N' || input[i] == 'O')
		{
			sec = sec +5;
		}
		else if (input[i] == 'P' || input[i] == 'Q' || input[i] == 'R' || input[i] == 'S')
		{
			sec = sec +6;
		}
		else if (input[i] == 'T' || input[i] == 'U' || input[i] == 'V')
		{
			sec = sec +7;
		}
		else if (input[i] == 'W' || input[i] == 'X' || input[i] == 'Y' || input[i] == 'Z')
		{
			sec = sec +8;
		}
		sum = sum + sec;
	}

	cout << sum;
	return 0;
}