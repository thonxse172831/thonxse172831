//Tìm ước số lẻ lớn nhất của số nguyên dương n bằng C
#include"stdio.h"
#include"stdlib.h"
#include"math.h"
int main()
{
    system("cls"); // xoa man hinh
    int n,s;
    int max =0;
    printf("\nNhap n =");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(n%i==0 && i%2!=0)
        {
             printf("%d ",i);
            for(int j=i; j<=n; j++){
                if (j > max)
                max = j;
            }
        }

    }
    printf("\nUoc so le lon nhat la: ");
    printf("%d",max);
}