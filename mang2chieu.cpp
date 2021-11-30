

#include"stdio.h"
int a[100][100];
int c,r;
void nhapmang(int x[100][100], int &c, int &r){
    do{
        printf("\nNhap so hang va so cot: ");
        scanf("%d%d",&c,&r);
    }while(c<=0||r<=0);
    for(int i=0; i<c;i++){
        for(int j=0; j<r; j++){
            printf("x[%d][%d] = ",i,j);
            scanf("%d",&x[i][j]);
        }
    }
}
void xuatmang(int x[100][100], int c, int r){

    for(int i=0; i<c; i++){
        printf("\n");
        for(int j=0; j<r; j++){
            printf("%d\t",x[i][j]);
        }
    }
}
int main(){
nhapmang(a,c,r);
xuatmang(a,c,r);
}