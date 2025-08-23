#include <iostream>
#define MAX_SIZE 101
using namespace std;

int main(void){
    int N, M, list1[MAX_SIZE][MAX_SIZE], list2[MAX_SIZE][MAX_SIZE], listofSum[MAX_SIZE][MAX_SIZE];

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> list1[i][j];
        }
        
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> list2[i][j];
        }
        
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            listofSum[i][j] = list1[i][j] + list2[i][j];
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << listofSum[i][j] << " ";
    }
    cout << "\n";
    }    
    return 0;

}

