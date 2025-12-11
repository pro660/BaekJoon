#include <stdio.h>

int main() {
    char str[51];
    float hakjum=0.0, total=0.0, sum_hakjum=0.0;
    char grade[3];

    for(int i=0; i<20; i++) {
        scanf("%s %f %s", str, &hakjum, grade);

        if (grade[0] == 'P') {
            continue;
        }

        float score = 0.0;
        if(grade[0] == 'A') {
            if(grade[1] == '+') score = 4.5;
            else if(grade[1] == '0') score = 4.0;
        }
        else if(grade[0] == 'B') {
            if(grade[1] == '+') score = 3.5;
            else if(grade[1] == '0') score = 3.0;
        }
        else if(grade[0] == 'C') {
            if(grade[1] == '+') score = 2.5;
            else if(grade[1] == '0') score = 2.0;
        }
        else if(grade[0] == 'D') {
            if(grade[1] == '+') score = 1.5;
            else if(grade[1] == '0') score = 1.0;
        }
        else if(grade[0] == 'F') {
            score = 0.0;
        }

        total += hakjum * score;   
        sum_hakjum += hakjum;      
    }

    printf("%.6f\n", total / sum_hakjum);
    return 0;
}
