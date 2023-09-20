#include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  #define lar 10

  void carga(int vec[],int vec1[],int tam){
      srand(time(NULL));
  for(int i=0;i<tam;i++){

      printf("%d ",vec[i]=rand()%(24-36)+24);
  }
  printf("\n");
      for(int j=0;j<tam;j++){

      printf("%d ",vec1[j]=rand()%(24-36)+24);
  }
  }
  void menu2(int vec[],int vec1[],int tam){
int cont,cont1;
   for(int i=0;i<tam;i++){
          cont=0;
          cont1=0;
        for(int j=0;j<tam;j++){
          if(vec1[i]==vec[j]){
           cont1=1;
        }
        if(vec[i]==vec1[j]){
           cont=1;
        }
    }
      if(cont==0) {
          printf("\n%d ",vec[i]);

      }
      if(cont1==0) {
          printf(" \n%d ",vec1[i]);

      }

    }
  }
  void resta1 (int vec[],int vec1[],int tam){
      int acu=0,res=0,acu1=0;
        for(int i=0;i<tam;i++){
                acu=acu+vec[i];
                acu1=acu1+vec1[i];
        }
        res=acu-acu1;
printf("resta %d",res);
  }

void menu4(int vec[],int vec1[],int tam){
      int aux=0;
     for(int i=0;i<tam;i++) {
         for(int j=0;j<tam;j++){
         if(vec[i]==vec1[j]){
          aux=1;
          printf("%d ",vec[i]);
            }
         }
     }
  }
  void menu1(int vec[],int vec1[],int tam){
      int acu,acu1;
      for(int i=0;i<tam;i++){
          acu=0;
          for(int j=0;j<tam;j++){
          if(vec[i]==vec1[j])acu=1;

          }
          if(acu==1)printf("%d ",vec[i]);
      }
            for(int i=0;i<tam;i++){
          acu1=0;
          for(int j=0;j<tam;j++){
          if(vec1[i]==vec[j])acu1=1;

          }
          if(acu1==1)printf("%d ",vec1[i]);
      }
  }
  void menu3(int vec[],int vec1[],int tam){
      int vecr[tam+tam];
            for(int i=0;i<tam;i++){
                    vecr[i]=vec1[i];
}
            for(int j=0;j<tam;j++){
                    vecr[tam+j]=vec[j];
    }

            for(int i=0;i<(tam+tam);i++){

                    printf("%d ",vecr[i] );

  }
  }

  int main(){
              int vec[lar],vec1[lar],num;
              carga(vec1,vec,lar);

do{
          printf("\nQue quieres realizar\n 1:Para datos repetidos\n 2:Para los datos que no se repiten \n 3: union entre ambos \n 4:intercencion entre ambos\n 5: resta del primer - segudno\n 6:resta entre el segudno y el primero \n 7: para seguir \n 8: para salir \n");
          scanf("%d",&num);
          switch (num)
     {
          case 1:
               menu1(vec,vec1,lar);
              break;
          case 2:
               menu2(vec,vec1,lar);
              break;
          case 3:
                menu3(vec,vec1,lar);
              break;
          case 4:
                menu4(vec,vec1,lar);
              break;
          case 5:
                resta1(vec,vec1,lar);
              break;
          case 6:
                printf("funcion no incorporada \n");
              break;
          }
}while(num<8);

      return 0;
  }
