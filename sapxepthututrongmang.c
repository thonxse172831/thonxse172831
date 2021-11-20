#include"stdio.h"
void swap (int *a,int *b){
    int tam = *a;
    *a=*b;
   * b=tam;
}
void sxgiam(int a[],int n){
    int vitrimax;
    int i;
    for( i =0;i<n-1;i++){
        vitrimax = i;
        for(int j = i+1; j<n;j++){
            if(a[j]>a[vitrimax])
            vitrimax = j;
        }
        swap(&a[i],&a[vitrimax]);
    }
}
void sxtang(int a[],int n){
    int vitrimin;
    int i;
    for( i =0;i<n-1;i++){
        vitrimin = i;
        for(int j = i+1; j<n;j++){
            if(a[j]<a[vitrimin])
            vitrimin = j;
        }
        swap(&a[i],&a[vitrimin]);
    }
}
void printfmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[100];
    int n;
    do{
        printf("\nNhap so luong trong mang can tao: ");
        scanf("%d",&n);
    }while(n<0 || n>100);
    for(int i =0;i<n;i++){
        printf("\na[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nMang tang dan: ");
    sxtang(a, n);
    printfmang(a, n);


    printf("\nMang giam dan: ");
    sxgiam(a, n);
    printfmang(a,n);
}