#include<stdio.h>
int main(){
int dc, c[100], i=0, j, a;
char num[100];
char ter;
printf("\tCALCULADORA DE NUMEROS TERNARIOS (base 3)\n" "\tEl programa solo acepta numeros enteros.\n" "El resultado se representa en la siguiente forma: 0-A 1-B 2-C\n\n" );
printf("\tEscribe el numero decimal a transformar: ");
scanf("%d",&dc);
if(dc==0){
    printf("\n\tEL CERO NO JUEGA");
    return 0;
}
while (dc > 0){
   c[i] = dc%3;
   dc = dc/3;
   switch (c[i]) {
          case 0:
            ter='A';
            break;
          case 1:
            ter='B';
            break;
          case 2:
            ter='C';
            break;
   }
num[i]=ter;
i++;
}
printf("\n\tEl valor en ternario es: ");
   for(j=i-1; j>=0; --j)
        printf("%c", num[j]);

printf("\n\t\tGRACIAS POR USAR EL PROGRAMA");

return 0;
}
