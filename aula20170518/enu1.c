#include <stdio.h>

#define NOTa(a)(printf ("not a = %d\n", !a))
#define NOTb(b)(printf ("not b = %d\n", !b))
#define ANDab(a,b)(printf("a and b = %d\n", a&&b))
#define ORab(a,b)(printf ("a or b = %d\n", a||b))
#define XORab(a,b)(printf ("a xor b = %d\n", a!=b))


int main () {
    int a,b,c,d;
    printf ("Digite um numero: ");
    scanf ("%d%d",&a,&b);
    NOTa(a); NOTb(b); ANDab(a,b); ORab(a,b); XORab(a,b);
    return 0;
}
