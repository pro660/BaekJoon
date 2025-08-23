#include<stdio.h>

char d[5][15];
int main()
{

int i,j;

    for(i=0;i<5;i++)
        scanf("%s",d[i]);

    for(i=0;i<15;i++){
        for(j=0;j<5;j++){
            if(d[j][i]!='\0')
                printf("%c",d[j][i]);
        }
    }
    return 0;
}

