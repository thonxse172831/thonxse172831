#include"stdlib.h"
#include"stdio.h"
int main()

{
    system("cls");
    int n=10;
    int a[n];
    printf("\nNhap gia tri cho mang: \n");
    for(int i=0; i<n; i++)
    {
        printf("\na[%d]= ",i);
        scanf("%d",a+i);
    }
    printf("\nGia tri cua mang la: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", *(a+i));
    }
}