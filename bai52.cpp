//nhap va xuat mang thuan va xuat mang nguoc, va dao nguoc mảng
#include "stdio.h"
#include"stdlib.h"
int x[100],y[100], z[200];
int n1,n2,n3;
void nhapmang(int x[100],int &n){
	printf("\nNhap so luong phan tu muon tao: ");
	scanf("%d",&n);
	for (int i = 0; i<n; i++){
		printf("\nx[%d] = ",i);
		scanf("%d",&x[i]);
	}
}
void xuatmang(int x[100],int n){
	printf("\nGia tri cua mang la: ");
	for(int i = 0; i < n; i++){
		printf("%d ",x[i]);
	}
}
void tronmang(int a[100], int n1, int b[100], int n2, int c[200], int &n3){
    n3 = n1+n2;
   int i1=0;
   int i2=0;
   int i3=0;
    while(i3<n3){
        if(i1>=n1){
            c[i3] = b[i2];
            i2++;
        }else if(i2>=n2){
            c[i3] = a[i1];
            i1++;
        }else if(a[i1]<b[i2]){
            c[i3]=a[i1];
            i1++;
        }else{
            c[i3]= b[i2];
            i2++;
        }
    i3++;

    }

}
void sapxep(int a[100],int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j] = temp;
            }
        }
    }
}
int main(){
system("cls");
    printf("\nNhap mang 1");
	nhapmang(x,n1);
	xuatmang(x,n1);
	printf("\nNhap mang 2");
    nhapmang(y,n2);
    xuatmang(y,n2);
    printf("\nTron mang &sap xep thu tu:");
    tronmang(x,n1,y,n2,z,n3);
    sapxep(z,n3);
    xuatmang(z,n3);
}