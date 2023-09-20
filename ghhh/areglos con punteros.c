#include <stdio.h>
#define num 6
int main(){
        int arr[num]={10,20,30,34,2,9};
        int *ptr=arr;

        for(int i=0;i<num;i++) {
            printf("Elemento %d: %d\n",i+1,*(ptr+i));

        }
        
    
return 0;
}