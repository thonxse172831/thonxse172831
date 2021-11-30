//Tính tích tất cả các “ước số” của số nguyên dương n bằng C
// a=6 uoc cua a la 1 2 3 6
#include"stdlib.h"
#include"stdio.h"
#include"math.h"
int main()
{
    system("cls");
    int n;
    float s=1;
    printf("\nNhap n= ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if (n%i==0){
            s = s*i;
        }
        
    }
    printf("\n%.2f",s);
    
}