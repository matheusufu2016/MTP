#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}

int main ()
{
    float base,altura,area;
    printf("Digite a base do paralelogramo: ");
    scanf("%f",&base);
    safeFlush();
    printf("Digite a altura do paralelogramo: ");
    scanf("%f", &altura);
    safeFlush();
    area=base*altura;
    printf("Sua area e: %f", area);
    return 0;
}
