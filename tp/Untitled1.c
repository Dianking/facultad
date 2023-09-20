#include <stdio.h>
#include <stdlib.h>

int main(){
int matriz[3][5];
int i,j;
float prommateria,prom,porcentaje,acu,acumat,cont;
char nombre[15];
char apellido[15];

printf("\ningrese nombre del alumno: ");
scanf("%s",&nombre);
printf("\ningrese apellido del alumno: ");
scanf("%s",&apellido);


for(i=0;i<3;i++){
    for(j=0;j<5;j++){
      printf("cargar trimestre %d y materia %d: ",i+1 ,j+1);
      scanf("%d", &matriz[i][j]);
      acu=matriz[i][j]+acu;
    }
}

prom=acu/15;

printf("\nnombre y apellido del alumno: %s %s",nombre,apellido);
printf("\nel promedio general fue de: %f",prom);

for(i=0;i<3;i++){
    for(j=0;j<5;j++){
      if(matriz[i][j]>6){
      cont=cont+1;}
      }
porcentaje=(cont*100)/5;
printf("\nel porcentaje de materias aprobadas del cuatrimenstre %d fue de: %f",i+1,porcentaje);
cont=0;
}

for(j=0;j<5;j++){
    for(i=0;i<3;i++){
      acumat=matriz[i][j]+acumat;
      }
prommateria=acumat/3;
printf("\nel promedio de la materia %d fue de: %f",j+1,prommateria);
acumat=0;
}
return 0;}


