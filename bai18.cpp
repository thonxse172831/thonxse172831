//Tính tổng tất cả các ước số chẵn của số nguyên dương n bằng C
#include"stdio.h"
#include"stdlib.h"
#include"math.h"
int main()
{
    system("cls"); // xoa man hinh
    int n,s;
    printf("\nNhap n =");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(n%i==0 && i%2==0)
        s = s +i;
    }
    printf("%d",s);
}