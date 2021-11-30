//
#include"stdio.h"
#include"stdlib.h"

int n;
int a[100],b[100],c[200];
void nhapmang(int x[100], int &n){
    printf("\nNhap so luong can tao cho mang:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("%d = ",i);
        scanf("%d",&x[i]);
    }
}