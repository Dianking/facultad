#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define lit 50
void carga(int vec[lit],int log){
        int rang=51-1;
        srand(time(NULL));
        for(int i=0;i<log;i++){
            printf("%d\n",vec[i]=rand()%rang+1);

        }


}
void parin(int vec[lit],int log){
    for(int i=0;i<log;i++){
        if((i%2)==0) printf("\npar: %d Indice: %d",vec[i],i);

    }

}
int main(){
            
            int vec[lit];
            
            carga(vec,lit);
    printf("pose 4 %d",vec[3]);
    printf("\npose 2 %d",vec[1]);
    printf("\n%d x %d =%d",vec[0],vec[49],vec[0]*vec[49]);
parin(vec,lit);
        return 0;
    }
