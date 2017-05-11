#include <stdlib.h>
#include <stdio.h>

int main()
{
    int vetor[] = {0,1,2,4,8};
    int x = 0x00;
    unsigned char *p = vetor;
    int i;
    int s=0;
    for(i=0; i < sizeof(vetor); i++)
    {
       if(*p == x)
        s = s+1;

        p++;
    }


    printf( "a soma e : %d",s);
    return 0;

}
