#include"stdio.h"
#include "limits.h"
int a[100];
int n;
void nhapmang(int x[100],int &n){
    do{
        printf("\nNhap so luong mang can tao: ");
        scanf("%d",&n);
    } while(n<0 || n>100);
    for( int i = 0;i<n;i++){
        printf("x[%d] = ",i);
        scanf("%d",&x[i]);
    }
}
void xuatmang(int x[100],int n){
    for (int i = 0; i< n ;i++){
        printf("%d ", x[i]);
    }
}
//tim max!
int maxthu2(int x[100],int n){
    int max= INT_MIN;
    int max2= INT_MIN;
    for(int  i =0; i<n; i++){
        if(x[i]>max)
        max= x[i];
    }
    for(int i = 0; i<n;i++){
        if(x[i]==max){
            continue;
        }else{
            max2 = x[i];
        }
    }
    return max2;
}


int main(){
    nhapmang(a,n);
    xuatmang(a,n);
    printf("\n Maxthu2 : %d", maxthu2(a,n));
   
}