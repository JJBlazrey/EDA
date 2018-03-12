//El programa pide datos de dos alumnos usando tipo de dato abstracto
#include <stdio.h>

    typedef struct{
        int carreraid;
        int cal[3];
        }alumno;
    typedef struct{
        int id;
        char nombrePila[30];
        alumno estudiante;
        }usuario;
int main(){
    int cont=0, k=0;
usuario user[2];
while(cont<2){
printf("\n\tALUMNO %d: ", cont+1);
  printf("\nEscribe ID: ");
    scanf("%d", &user[cont].id);
  printf("\nEscribe nombre: ");
    scanf("%s", user[cont].nombrePila);
  printf("\nEscribe carrera ID: ");
    scanf("%d", &user[cont].estudiante.carreraid);
printf("\n");
    for(k=0;k<3;k++){
    printf("Escribe %da calificacion: ", k+1);
    scanf("%d", &user[cont].estudiante.cal[k]);
    }
    cont++;
}

cont=0;
while(cont<2){
float prom=0;
  printf("\nID: %d", user[cont].id);
  printf("\nNombre: %s", user[cont].nombrePila);
  printf("\nCarrera ID: %d", user[cont].estudiante.carreraid);
    for(k=0;k<3;k++){
    printf("\nCalificacion %d: %d", k+1, user[cont].estudiante.cal[k]);
    prom=user[cont].estudiante.cal[k]+prom;
    }
    printf("\nPromedio: %f", prom/3);
cont++;
}
return 0;
}
