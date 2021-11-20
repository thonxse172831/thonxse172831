#include"stdio.h"
#include "math.h"
int snt(int x){
    if(x<1)
    return 0;
    for(int i= 2; i<=sqrt(x); i++){
        if(x%i==0)
        return 0;
    }
    return 1;
}
void input(int a[100],int &n){
    int i;
    //nhap so luong a[n]
    do{
        printf("Nhap so luong mang can tao: ");
        scanf("%d",&n);
    }while (n<0 ||n>100);
   //nhap a[i] =    
    for( i = 0; i<n; i++){
        printf("\na[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void output(int a[100], int n){
    for(int i =0; i<n; i++){    //xiat a[i]
        printf("%d " ,a[i]);
    }
}

int main(){
    int a[100];
    int n; 
    input(a,n);
    printf("\nGia tri mang vua nhap la: ");
    output(a,n);
     printf("\nCac so nguyen to la: ");
    for (int i=0; i<n; i++){
        if(snt(a[i])){   
            printf("%d ", a[i]);
        }
    }
}