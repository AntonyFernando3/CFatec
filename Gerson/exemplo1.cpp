#include<stdio.h>
// neste de progrmas os valores originais de X e Y s�o preservados na fun��o main
// Ou seja n�o repercutem a modificA��O feito a fun��o teste_valor. Isso acontece
// porque os par�metros da fun��o teste_valor s�o passados e recebidos por valor

void teste_valor (int x, int y){ // Passagem por valor
    x = x * 2;
    y = y * 3;
    printf("\n Valor de X: %d", x);
    printf("\n Valor de Y: %d", y);
}

main(){
int x, y;
printf("\n Digite o valor de X: "); scanf("%d", &x);
printf("\n Digite o valor de Y: "); scanf("%d", &y);
teste_valor(x,y);
printf("\n Valor de X em main: %d",x); 
printf("\n Valor de Y em main: %d",y); 
}
