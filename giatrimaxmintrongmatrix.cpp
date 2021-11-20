#include"stdio.h"
#include"stdlib.h"
#include"limits.h"
int a[100][100];
int c,r;
void ipmatrix(int x[100][100], int &c, int &r){
    do{
        printf("\nNhap so cot can tao:");
        scanf("%d",&c);
        printf("\nNhap so hang can tao: ");
        scanf("%d",&r);
    }while(c<=0||r<=0);
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("\nx[%d][%d]= ",i,j);
            scanf("%d",&x[i][j]);
        }
    }
}
void max(int x[100][100], int c, int r){
    int max=x[0][0];
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            if(x[i][j]>max)
            max = x[i][j];
        }
    }
    printf("\nMax: %d ", max);
}
void min(int x[100][100], int c, int r){
    int min = INT_MAX;
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            if(x[i][j]<min)
            min = x[i][j];

        }
    }
    printf("\nMin: %d ", min);
}
void opmatrix(int x[100][100], int c, int r){
    printf("\nMatrix X:");
    for(int i=0; i<c; i++){
        printf("\n");
        for(int j=0; j<r; j++){
            printf("%d\t", x[i][j]);
        }
    }
}
int main(){
    system("cls");
    ipmatrix(a,c,r);
    opmatrix(a,c,r);
    max(a,c,r);
    min(a,c,r);

}