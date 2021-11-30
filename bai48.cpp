//sap xep chon
#include"stdio.h"
void nhapmang(int a[100], int &n){
    do{
        printf("Nhap so luong mang can tao: ");
        scanf("%d",&n);
    }while (n<0 || n>100);
    for (int i = 0; i<n; i++){
        printf("\na[%d] = ", i );
        scanf("%d",&a[i]);
    }
}  
void swap(int &a, int &b){
    int tam;
    tam =a;
    a=b;
    b=tam;
}
void sapxepgiam(int a[], int n){
  for(int i=0; i<n-1; i++){
      int vitrilonnhat= i;
      for(int j=i+1; j<n; j++){
          if(a[vitrilonnhat]<a[j]){
             vitrilonnhat = j;
              swap(a[i], a[vitrilonnhat]);
          }
         
      }
   } 
}
void xuatmang(int a[100], int n){
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%2d",a[i]);
    }
}
int main(){
    int n, a[100];
    nhapmang(a,n);
    xuatmang(a,n);
    printf("\nMang sau khi sap xep giam la: ");
    sapxepgiam(a,n);
    xuatmang(a,n);
    
}