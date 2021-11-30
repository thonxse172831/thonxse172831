//Tính S(n) = 1^2 + 2^2 + … + n^2 bằng C
#include"stdlib.h"
#include"stdio.h"
#include"math.h"
int main()
{
    system("cls");
    int s,n;
    printf("\nNhap n = ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        s = s+ pow(i,2);
    }
    printf("\n%d",s);
}