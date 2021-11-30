#include"stdio.h"
#include"stdlib.h"
int a[100][100];
int b[10000];
int c,r,n;
void nhapmatran(int a[100][100], int &c, int &r)
{
    do 
    {
        printf("\nNhap so hang can tao: ");
        scanf("%d", &r);
        printf("\nNhap so cot can tao: ");
        scanf("%d",&c);
    }while(c>100||c<=0 && r>100 || r<=0);
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            printf("\na[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void xuatmatran(int a[100][100], int c, int r)
{
    for(int i=0; i<c; i++)
    {
        printf("\n");
        for(int j=0; j<r; j++)
        {
            printf("%3d", a[i][j]);
        }
    }
}
void chuyenmatrixthanhmangmotchieu(int a[100][100], int c, int r, int b[10000], int &n)
{
    n= c*r;
    int vitri=0;
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            b[vitri] = a[i][j];
            vitri++;
        }
    }
}
void xuatmang(int b[10000], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%4d" , b[i]);
    }
}
int main()
{   
    system("cls");
    nhapmatran(a,c,r);
    printf("\nMatrix: ");
    xuatmatran(a,c,r);
    printf("\nMang 1 chieu: ");
    chuyenmatrixthanhmangmotchieu(a,c,r,b,n);
    xuatmang(b,n);
}