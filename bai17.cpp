//Liệt kê tất cả các ước số lẻ của số nguyên dương n bằng C
#include"stdio.h"
#include "math.h"
#include"stdlib.h"
int main()
{
    system("cls");
    int n;

    printf("\nNhap n =");
    scanf("%d",&n);
   
    for(int i=1; i<=n; i++)
    {
        if(n%i==0 && i%2!=0)
        printf("%d ",i);
    }
}