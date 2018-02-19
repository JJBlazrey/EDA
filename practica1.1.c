//arreglo que el usuario pueda pedir 15 pares almacenarlos en un vector y que el usuario pueda pedir la posicion x
#include<stdio.h>
#include<math.h>
int main(){
int p=0, i=0;
int impar[15];
printf("\n  ESTE PROGRAMA ARROJA LA POSICION DE LOS PRIMEROS 15 NUMEROS IMPARES\n");
while(i<15){
    if(i%2==!0){
    printf(" %d, ",i);
    impar[p]=i;
    p++;} i++;}
printf("\n\n\tElija la posicion ");
scanf("%d", &p);
printf("\n\n\t\tEl numero en la posicion %d es:\t%d\n\n", p, impar[p]);
return 0;
}
