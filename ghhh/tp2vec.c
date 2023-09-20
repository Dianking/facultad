#include <stdio.h> 
 #include <stdlib.h> 
 #include <time.h> 
 #define lar 10 
  
 void carga(int vec[],int vec1[],int tam){ 
     srand(time(NULL)); 
 for(int i=0;i<tam;i++){ 
  
     vec[i]=rand()%(24-36)+24; 
     for(int j=0;j<tam;j++){ 
  
     vec1[j]=rand()%(24-36)+24; 
 } 
 } 
 } 
 void menu1(int vec[],int vec1[],int tam){
    for(int i=0;i<tam;i++) {
        if(vec[i]==vec1[i])printf("%d",vec[i]);
    }
 }
    
 int main(){ 
             int vec[lar],vec1[lar],num; 
             carga(vec1,vec,lar); 
  
 
         printf("Que quieres realizar\n 1:Para datos repetidos\n 2:Para los datos que no se repiten \n 3: union entre ambos \n 4:intercencion entre ambos\n 5: resta del primer - segudno\n 6:resta entre el segudno y el primero ");
         scanf("%d",&num);
         switch (num) 
    { 
         case 1: 
               menu1(vec,vec1,lar);
             break; 
         case 2: 
  
             break; 
         case 3: 
  
             break; 
         case 4: 
  
             break; 
         case 5: 
  
             break; 
         case 6: 
  
             break; 
         } 
 
     return 0; 
 }