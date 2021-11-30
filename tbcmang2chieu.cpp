//tat ca cac phan tu chia het cho 5
#include"stdlib.h"
#include"stdio.h"
#include"math.h"
int a[100][100];
int c,h;
void nhapmatrix(int  x[100][100], int &c, int &h)
{
    do
    {
        printf("\nNhap so cot can tao: ");
        scanf("%d",&c);
        printf("\NNhap so hang can tao: ");
        scanf("%d",&h);
    }while(c<0||c>100 && h<0||h>100);
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<h; j++)
        {
            printf("\nX[%d][%d] = ",i,j);
            scanf("%d", &x[i][j]);
        }
    }
    
}
void xuatmatrix(int x[100][100], int c, int h)
{
    printf("\nMatrix: \n");
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<h; j++)
        {
            printf("x[%d][%d] = %d ", i,j,x[i][j]);
        }
        printf("\n");
    }
}
double trungbinhcongtatca(int x[100][100], int c, int h)
{
    while(c>0 || c<=100 && h>0 || h<=100)
    {
        int tong = 0;
        for(int i=0; i<c; i++)
        {
            for(int j=0; j<h; j++)
            {
                tong+= x[i][j];
            }
        }
        double trungbinhcong = (double)tong/(c*h);
        return trungbinhcong;
    }
    return 0;
}
double tbcchiahetcho5(int x[100][100], int c, int h)
{
    while (c>0||c<=100 && h>0 || h<=100)
    {
        int tongchiahetcho5 =0;
        int soluongchiahetcho5 = 0;
        // chay matrix
        for(int i=0; i<c; i++)
        {
            for(int j=0; j<h; j++){
                //dk neu x[i][j] chia het cho 5 thi tiep tuc, con khong co thi dung!
                if(x[i][j]%5==0)
                {
                    soluongchiahetcho5++;
                    tongchiahetcho5+= x[i][j];
                }
            }
        }

        double trungbinhcongchiahetcho5 = 0;
        if(soluongchiahetcho5>0)
            trungbinhcongchiahetcho5 = tongchiahetcho5/soluongchiahetcho5;
           
        return trungbinhcongchiahetcho5;
         
        
    }
    return 0;
}
int main()
{
    system("cls");
    nhapmatrix(a,c,h);
    xuatmatrix(a,c,h);
    printf("\nTrung binh cong tat ca: %.2f ", trungbinhcongtatca(a, c, h));
    printf("\nTrung binh cong chia het cho 5 la %.2f", tbcchiahetcho5(a,c,h));
}