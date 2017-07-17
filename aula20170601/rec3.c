#include <stdio.h>

struct N {
    int num;
    int den;
};

struct N soma(struct N A,struct N B,struct N C);

int mdc (int a, int b);

int main() {
    struct N A,B,C,R;
    printf("Digite o primeiro numero racional: ");
    scanf("%d/%d",&A.num,&A.den);
    printf("Digite o segundo numero racional: ");
    scanf("%d/%d",&B.num,&B.den);
    R=soma(A,B,C);
    printf("%d/%d\n",R.num/mdc(R.num,R.den),R.den/mdc(R.num,R.den));
    return 0;
}

struct N soma(struct N A,struct N B,struct N C) {
    C.num=A.num*B.den+B.num*A.den;
    C.den=A.den*B.den;
    return C;
}

int mdc (int a, int b){
    if (a==b || b==0){
        return a;
    }
    else if (a==0){
        return b;
    }
    else if (a%2==0 && b%2!=0){
        return mdc (a/2, b);
    }
    else if (a%2!=0 && b%2==0){
        return mdc (a, b/2);
    }
    else if (a%2==0 && b%2==0){
        return (2*mdc (a/2, b/2));
    }
    else if (a>b){
        return (mdc (((a-b)/2), b));
    }
    else
        return (mdc (((b-a)/2), a));
}
