#include <stdio.h>
#include <math.h>
#include <complex.h>

struct raizes {
	float x1;
	float x2;
};

float delta(float a, float b, float c) {
	float d;
	d=pow(b,2)-4*a*c;
	return d;
}

float raizes(float a, float b, float c, float delta) {
	struct raizes raiz;
	double complex X1,X2;
	if(delta>0) {
	raiz.x1=(-b+sqrt(delta))/(2*a);
	raiz.x2=(-b-sqrt(delta))/(2*a);
	printf("As raizes sao: %g e %g",raiz.x1,raiz.x2);
}
else if(delta==0) {
	raiz.x1=(-b/(2*a));
	raiz.x2= raiz.x1;
	printf("As raizes sao: %g e %g",raiz.x1,raiz.x2);
}
else {
	X1=(-b)/(2*a)+I*(sqrt(-delta))/(2*a);
	X2=(-b)/(2*a)+I*(sqrt(-delta))/(2*a);
	printf("As raizes sao: %g+%.4f*i e %g-%.4f*i",creal(X1),cimag(X1),creal(X2),cimag(X2));
}
}

int main() {
	float a,b,c,d;
	printf("Digite o valor de a, b e c: ");
	scanf("%f %f %f",&a,&b,&c);
	d=delta(a,b,c);
	raizes(a,b,c,d);
	return 0;
}
