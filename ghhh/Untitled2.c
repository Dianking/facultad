#include <stdio.h>
int main (){
    int num,r,i,n,n1;

printf("escribie un numero ");
scanf("%d",&num);

       n=1;
       r=1;
do{
    r=r*n;
    n=n+1;

}while (n<=num);
printf("%d",r);


return 0;
}
