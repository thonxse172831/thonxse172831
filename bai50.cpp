//tao menu them phan tu dau mang, cuoi mang, hoac gia tri k
#include"stdio.h"
#include"conio.h"
#include"limits.h"
int a[100];
int n;
void swap(int &a, int &b){
    int tam;
    tam = a;
    a=b;
    b=tam;
}
void nhap(int a[], int &n){
    do{
        printf("\nNhap vao so luong can tao: ");
        scanf("%d",&n);
    }while(n<0 || n>100);
    for(int i =0; i<n; i++){
        printf("\na[%d] = ",i);
        scanf("%d", &a[i]);
    }
}
void themphantu(int a[100], int &n, int vitri, int giatri){
    int size = sizeof(a[100])/sizeof(a[0]);
    if(n== size){
        printf("\nKhong the them vao mang!");

    }
    n++;
    for(int i=n-1; i>vitri; i--){
        a[i]= a[i-1];

    }
    a[vitri] = giatri;
}


void sapxeptang(int a[], int n){
    int max;
    for(int i=0; i<n-1; i++){
        max= i;
        for(int j= i+1; j<n; j++){
            if(a[max] <a[j])
            max = j;
        }
    swap(a[i],a[max]);
    }
}
void sapxepgiam(int a[], int n){
    int min;
    for(int i=0; i<n-1; i++){
        min= i;
        for(int j= i+1; j<n; j++){
            if(a[min] >a[j])
           min = j;
        }
    swap(a[i],a[min]);
    }
}

void xuat(int a[], int n ){
    printf("\n");
   
    for(int i=0; i<n; i++){ 
        printf("a[%d]=%d ", i, a[i]);
       
    }
    printf("\n");
}

int main(){
    clearerr;
    int vitri, gt;
    char x;
    do{
    printf("----------------------------------------------------------------");
    printf("\n                           MENU                               ");
    printf("\n----------------------------------------------------------------");
    printf("\nVui long chon lenh ban can chuong trinh thuc hien!\n");
    printf("\n 1 Nhap Mang");
    printf("\n 2 Xuat mang");
    printf("\n 3 Sap xep mang theo thu tu giam dan");
    printf("\n 4 Sap xep mang theo thu tu tang dan");
    printf("\n 5 Them phan tu vao vi tri x");
    printf("\n Nhan E de thoat\n");
    printf("\n                     Nguyen Xuan Tho");
    printf("\n----------------------------------------------------------------\n");
   
    scanf(" %c",&x);
     switch (x){
        case '1': nhap(a,n);
        break;
        case '2': xuat(a,n);
        break;
        case '3': sapxeptang(a,n);
                  xuat(a,n);
        break;
        case '4': sapxepgiam(a,n);
                  xuat(a,n);
        break;
        case '5': //vitri(a,n);
                printf("\nNhap vi tri can them: ");
                scanf("%d",&vitri);
                printf("\nNhap gia tri can them: ");
                scanf("%d",&gt);
                themphantu(a,n,vitri,gt);
                  xuat(a,n);
        break;


     }  
  
    }while(x!='e');
  
}