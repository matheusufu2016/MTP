#include <stdio.h>
#include <time.h>
int main ()
{
    srand(time(0));
    int a,b,c,d;
    a=rand()%6;
    b=rand()%6;
    c=rand()%6;
    a++;
    b++;
    c++;
    d=a+b+c;
    printf("O valor dos dados foram: %i %i %i",a,b,c);
    printf("\nA soma dos dados e': %i",d);
    if(d==7 || d==11)
        printf("\nVoce ganhou!\n");
    else
        printf("\nVoce perdeu!\n");
    return 0;
}
