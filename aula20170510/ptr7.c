#include <stdio.h>
#include <stdlib.h>
#define N 256
int main()
{
    int opc,i;
    long long int *p, numero;
    char frase[N],*pc;
    printf("1-Criptografar\n");
    printf("2-Descriptografar\n");
    scanf("%d",&opc); getchar();
    if(opc==1)
    {
        for(i=0;i<N;i++) frase[i]='\0';
        printf("Digite uma frase: \n");
        fgets(frase,N,stdin);
        p=(long long int*)frase;
        for(i=0;i<(sizeof(frase)/sizeof(long long int));i++)
            if(p[i]!=0)
            printf("%lld",p[i]);
            return EXIT_SUCCESS;
    }
    if(opc==2)
    {
        printf("Entre com os codigos 0 para encerrar:\n");
        pc=((char*)
        do {
                scanf("%lld",&numero);
        while (numero !=0);
        return EXIT_SUCCESS;
    }
    else
    {
    printf("Opcao nao reconhecida!\n");
    return EXIT_FAILURE;
    }
}
