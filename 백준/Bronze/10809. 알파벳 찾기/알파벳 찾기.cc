#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[101];
	cin >> str;
	
	char alpha[26]={};
	for (int i = 0; i < 26;i++)
	{
		alpha[i] = 'a' + i;
	}
	
	int score[26];
	fill_n(score, 26, -1);

	for (int i = 0; i < strlen(str); i++)
	{
		char check = str[i];
		for (int j = 0; j < 26; j++)
			{
				if (alpha[j] == check)
				{
					if (score[j] == -1)
					{
						score[j] = i;
					}

				}
			}
	}
	for (int i = 0;i < 26;i++)
	{
		cout << score[i] << ' ';
	}
}

