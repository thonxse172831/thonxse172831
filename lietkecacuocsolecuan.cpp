#include"stdio.h"
int main(){
    int n;
    int i;
    do{
        printf("Nhap n = ");
        scanf("%d",&n);
    }while (n<0);
 printf("Uoc so le cua n la: ");   
    for (i =1 ; i<= n; i++){
        if(n %i==0){

            if( i%2==1){
                printf(" %d ",i);
            }
        }
    }
   
}