#include <iostream>
#define MAX_SIZE 9
using namespace std;

int main(void){
    int i, j, num, row=0, column=0, arr[MAX_SIZE][MAX_SIZE];
    
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            cin >> num;
            arr[i][j] = num;
        }
    }

    int max = arr[0][0];

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if  (max < arr[i][j]){
                max = arr[i][j];
                row = i+1;
                column = j+1;
            }
        }
    }
    
    if (max == arr[0][0])
    {
        cout << max << endl << row+1 << " " << column+1;
    }
    else
        cout << max << endl << row << " " << column;
    
    return 0;

}

