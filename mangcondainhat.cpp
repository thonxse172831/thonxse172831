#include"stdio.h"
#include"stdlib.h"
//tim mang con dai nhat
int a[100];
int n;
void nhapmang(int a[100], int&n){
    do{

    printf("\nNhap so luong can tao: ");
    scanf("%d",&n);
    }while(n<0||n>100);
    for(int i = 0; i<n; i++){
        printf("\na[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void xuatmang(int a[100], int n){
    for(int i=0; i<n; i++){
        printf(" %d", a[i]);
    }
}
int timmax(int a[100], int n){
int max = a[0];
for(int i=0; i<n; i++){
    if(a[i]>max)
    max = a[i];
}
return max;


}
void inmangcongiamdainhat(int a[100], int n){
    int b[100];
    //cho b[i] = 1;
    for(int i=0 ; i<n; i++){
        b[i] = 1;
    }
    //cho a[i] chay nguoc
    for(int i=n-1; i>0; i--){
        if(a[i]>=a[i-1]){
            b[i-1] = b[i]+1;
        }
    }
    printf("\nGia tri cua mang b la: ");
    xuatmang(b,n);
    int soluong = timmax(b,n);
    for(int i=0; i<n; i++){
        if(b[i]==soluong){
            printf("\nMang khong giam dai nhat: ");
            for(int j=i; j< soluong+i; j++){
                printf("%d ",a[j]);
            }
        }
    }

}
int main(){
    system("cls");
    nhapmang(a,n);
    printf("\n");
    xuatmang(a,n);
    inmangcongiamdainhat(a,n);
}