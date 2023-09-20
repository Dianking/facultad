#include <stdio.h> 
int main(){
        int *ptra,*ptrb,a,b,aux;
        a=3;
        b=4;
     printf("valor de a: %d\nvalor de b: %d\n",a,b);
    ptra=&a;
    ptrb=&b;

    aux=*ptra;
    *ptra=*ptrb;
    *ptrb=aux;
    printf("valor de a %d\nvalor de b %d",a,b);


    return 0;
}