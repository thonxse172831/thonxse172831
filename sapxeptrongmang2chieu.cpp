#include"stdio.h"
#include"stdlib.h"
#include"math.h"
#include"limits.h"
int a[100][100];
int c,r;
//c la cot, r la hang
void nhap(int a[100][100], int &c, int &r)
{
     do 
     {
         printf("\nNhap so cot can tao: ");
         scanf("%d", &c);
         printf("\nNhap so hang can tao: ");
         scanf("%d", &r);
     }while(c<=0 || c>100 && r<=0 || r >100);
     // nhap gia tri cho mang
     for(int i=0; i<c; i++)
     {
         for(int j=0; j<r; j++)
         {
             printf("\nA[%d][%d]= ",i,j);
             scanf("%d",&a[i][j]);
         }
     }
}
void xuat(int a[100][100], int c, int r)
{
    printf("\nMatrix:");    
    for(int i=0; i<c; i++)
    {
        printf("\n");
        for(int j=0; j<r; j++){
            printf("A[%d][%d]= %d      ",i,j, a[i][j]);
        }
        printf("\n");
    }
}
// sapxep mang 2 chieu theo thu tu giam dan
void sapxeptang(int x[100][100], int c, int r)
{
    int k = c*r;
    for(int i=0; i<k-1; i++)
    {
        for(int j=i+1; j<k; j++)
        {
            if(x[i/c][i%c]>x[j/c][j%c])
            {
               int temp =  x[i/c][i%c] ;
               x[i/c][i%c] = x[j/c][j%c];
               x[j/c][j%c] = temp;

            }
        }
    }
}
void sapxepgiam(int x[100][100], int c, int r)
{
    int g=c*r;
    for(int i=0; i<g-1; i++)
    {
        for(int j=i+1; j<g; j++)
        {
            if(x[i/c][i%c]<x[j/c][j%c])
            {
                int temp = x[j/c][j%c];
                x[j/c][j%c] = x[i/c][i%c];
                x[i/c][i%c] = temp;
            }
        }
    }
}

int main()
{
    system("cls");
    nhap(a,c,r);
    xuat(a,c,r);
    printf("\nMang da duoc sap xep theo gia tang dan la: ");
    sapxeptang(a,c,r);
    xuat(a,c,r);
    printf("\nMang da duoc sap xep giam dan la: ");
    sapxepgiam(a,c,r);
    xuat(a,c,r);
   

}