#include<stdio.h>
// neste de progrmas os valores originais de X e Y s�o preservados na fun��o main
// Ou seja n�o repercutem a modificA��O feito a fun��o teste_valor. Isso acontece
// porque os par�metros da fun��o teste_valor s�o passados e recebidos por valor

void teste_ref (int a[2]) { // Passagem por valor
    a[0] = a[0] * 2;
    a[1] = a[1] * 3;
    printf("\n Valor de X: %d", a[0]);
    printf("\n Valor de Y: %d", a[1]);
}

main(){
int x[2];
printf("\n Digite o valor de X: "); scanf("%d", &x[0]);
printf("\n Digite o valor de Y: "); scanf("%d", &x[1]);
teste_ref(x);
printf("\n Valor de X em main: %d",x[0]); 
printf("\n Valor de Y em main: %d",x[1]); 
}
