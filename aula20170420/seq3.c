#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}

int main ()
{
    float A,B,C,D,E, mediap;
    printf("Digite a nota A: ");
    scanf("%f", &A);
    safeFlush();
    printf("Digite a nota B: ");
    scanf("%f" ,&B);
    safeFlush();
    printf("Digite a nota C: ");
    scanf("%f" ,&C);
    safeFlush();
    printf("Digite a nota D: ");
    scanf("%f", &D);
    safeFlush();
    printf("Digite a nota E: ");
    scanf("%f" ,&E);
    safeFlush();
    mediap=(A*2+B*2+C*2+D*3+E*5)/14;
    printf("A sua media ponderada e: %f", mediap);
    return 0;
}







