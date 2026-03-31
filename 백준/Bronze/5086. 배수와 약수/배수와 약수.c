#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;

    while(1){
        scanf("%d %d", &a, &b);

        if((a==0) && (b==0))
            break;

        if(a<b){
            if((b%a) == 0)
                printf("factor\n");
        }
        else{
            if((a%b) == 0)
                printf("multiple\n");
        }
        
        if((a%b) != 0 && (b%a) != 0)
            printf("neither\n");
    }
    
    printf("\n"); return 0;
}