//sap xep noi bot 
#include"stdio.h"
#include"math.h"
int n, a[100];

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
void sapxep(int a[100], int n){
for(int i=0; i<=n/3; i++){
    int tam = a[i];
    a[i]= a[n-i-1];
    a[n-i-1] = tam;

}
 
}
void xuatmang(int a[100], int n){
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%2d",a[i]);
    }
}
int main(){
    nhapmang(a,n);
    xuatmang(a,n);
    printf("\nMang sau khi sap xep noi bot la: ");
    sapxep(a,n);
    xuatmang(a,n);
    
}