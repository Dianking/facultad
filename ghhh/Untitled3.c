#include <stdio.h>
int nsecion (x);

int main (){
    char sali='s';
    int ncaja,secion,seciones;
do{

    printf("Caja abierta N%c ",248);
    scanf("%d",&ncaja);
    fflush(stdin);
    printf("Que sesion es: ");
    scanf("%d",&secion);
    printf("%d ",nsecion(secion));
} while (sali=='s'|| sali=='S');

return 0;
}


int nsecion (x){
    int almacen=0,a,v,p,verdu=0,pan=0;
 if(x==1) a=almacen++;//printf("hola");
 else if (x==2) v=verdu++;
 else if (x==3) p=pan++;

return a;
return v;
return p;


}
