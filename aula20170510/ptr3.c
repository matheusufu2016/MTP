#include <stdlib.h>
#include <stdio.h>

int main()
{
    int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    int x = 0xFF;
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
