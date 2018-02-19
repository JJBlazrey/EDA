//abecedario(a...z)
#include<stdio.h>
#include<string.h>
int main(){
int p=0, i=0;
char letra='\0';
char abc[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','W','X','Y','Z'};
printf("\n  ESTE PROGRAMA ARROJA LA POSICION (del 1 al 26) de cualquier letra del abecedario:");
printf("\n\t\tABCDEFGHIJKLMNOPQRSTUWXYZ");
printf("\n\n\tElija la posicion ");
scanf("%d", &p);
letra=abc[p];
printf("\n\n\t\tLa letra en la posicion %d es:\t%c", p, letra);
return 0;
}
