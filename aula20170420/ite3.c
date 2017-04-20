#include <stdio.h>
#include <stdlib.h>

int potencia(int i,int j);
int main(){
int i,j,result;
printf("digite A base: ");
scanf("%d",&i);
printf("digite o expoente ");
scanf("%d", &j);
if(j==0)result=1;
if(j!=0)result=potencia(i,j);
printf("\n%d elevado a %d:%d\n\n",i,j,result);
system("pause");
return 0;
}
int potencia(int i,int j){
int result=1;
do{
result*=i;
j--;
}
while(j>0);
return result;
}
