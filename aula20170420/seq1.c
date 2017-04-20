#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}

int main ()
{
    float L, area;
    printf("Digite o lado para saber a area do quadrado: ");
    scanf("%f",&L);
    safeFlush();
    area=L*L;
    printf("Sua area e: %f", area);
    return 0;
}
