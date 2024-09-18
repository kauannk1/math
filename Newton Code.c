#include <stdio.h>
#include <locale.h>
#include <math.h>

double f(double x){
	return (4 * cos(x) - exp(x));
	}
	
double df(double x){
	return (-4 * sin(x) - exp(x));
}
	
	
int main(){
	double erro;
	double x1;	
	double E = 0.01;
	double x0 = 2; // solução inicial
	
	do{
	
	x1 = x0 - f(x0) / df(x0);
	
	erro = fabs((x1-x0) / x1);
	
	printf("%.3lf |", erro);
	
	x0 = x1;
	
	} while (erro > E);
	
	printf("\n\nPortanto a solucao eh: %.3lf ", x1);
	
	return 0;
}
