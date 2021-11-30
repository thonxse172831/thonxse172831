#include"stdio.h"
#include"stdlib.h"
int a[100][100];
int n;
void nhapmang(int a[100][100], int &n)
{
    do 
    {
        printf("\nNhap so hang va so cot: ");
        scanf("%d",&n);
    }while(n<=0||n>100);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("\n[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void xuatmang(int a[100][100], int n)
{
    for(int i=0; i<n; i++)
    {   
        printf("\n");
        for(int j=0; j<n; j++)
        {
            printf("%4d",a[i][j]);
            
        }
    }
}
int kiemtradoixungquaduongcheochinh(int a[100][100], int n)
{
    /*
    1 3 5 4     đường chéo chính 1 9 3 7
    3 9 9 5
    5 9 3 4
    4 5 4 7 
    a[i][j] = a[j][i]
*/
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]!=a[j][i])
            {
                return 0;
            }
        }
    }
    return 1;
}
int kiemtradoixungquaduongcheophu(int a[100][100], int n)
{
    /*
    4x4:
    1 2 3 4 đường chéo phụ: 4 7 1 4
    5 2 7 3 
    0 1 2 2
    4 0 5 1
    n=4
    công thức chung: 
    a[0][2] = a[1][3]
    a[0][1] = a[1][4]
    a[i][j] = a[n -1- j][n-1 -i]
*/
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]!=a[n-1-j][n-1-i])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    system("cls");
    nhapmang(a,n);
    xuatmang(a,n);
    printf("\n%s",(kiemtradoixungquaduongcheochinh(a,n)==1?"Mang doi xung qua duong cheo chinh":"Mang khong doi xung qua duong cheo chinh!"));
    printf("\n%s",(kiemtradoixungquaduongcheophu(a,n)==1?"Mang doi xung qua duong cheo phu":"Mang khong doi xung qua duong cheo phu!"));
}