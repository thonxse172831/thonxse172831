// ma trận chuyển vị
/*
    1 2 3 
    4 5 6

    => 1    4
       2    5
       3    6

*/
#include"stdio.h"
#include"stdlib.h"
int a[100][100], b[100][100];
int n,m,x,y;

// n: cot cua a[][], m: hang cua a[][]
//x la cot cua b[][], y la hang cua b[][]
void nhap(int x[100][100], int &m, int &n)
{
    do 
    {
        printf("\nNhap so hang: ");
        scanf("%d",&m);
        printf("\nNhap so co: ");
        scanf("%d",&n);
    }while(n<=0||n>100 && m<=0||m>100);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("\na[%d][%d] = ",i,j);
            scanf("%d",&x[i][j]);
        }
    }
}
void xuat(int x[100][100], int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
}
// ma tran chuyen vi
void matranchuyenvi(int a[100][100], int m, int n, int b[100][100], int &x, int &y)
{
   
    
    for(int i=0; i<y; i++)
    {
        for(int j=0; j<x; j++)
        {
           b[i][j]= a[j][i];
        }
    }
}
int main()
{
    system("cls");
    nhap(a,m,n);
    printf("\nMa tran: \n");
    xuat(a,m,n);
    printf("\nMa tran dao vi: \n");
    matranchuyenvi(a,m,n,b,m,n);
    xuat(b,n,m);
}