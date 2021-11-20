//tim min max trong mang 1 chieu
#include"stdio.h"
void timmax (int a[],int n){
int  max = a[0];
    for (int i=0;i<=n;i++){
        if (a[0]<a[i]){
             max = i;
        }
       
    }
  printf("\nMax = %d",max);
}
void timmin(int a[],int n){
   int  min = a[0];
    for (int i=0;i<n;i++){
        if (a[0]>a[i]){
             min = i;
        }
       
    }
  printf("\nMin = %d",min);  
}
int main(){
    int a[100];
    int n,i;
    //nhap du lieu
    do{
        printf("\nNhap so luong mang can tao: ");
        scanf("%d",&n);
    }while(n<0||n>100);
    for(i=0;i<n;i++){
        printf("\na[%d] = ",i);
        scanf("%d",&a[i]);
    }
    timmin(a,n);
    timmax(a,n);
}
   
    