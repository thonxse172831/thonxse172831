//Đếm số lượng chữ số lẻ của số nguyên dương n bằng C
#include"stdlib.h"
#include"math.h"
#include"stdio.h"
int main()
{
    system("cls");
    int n;

    do
    {    
    printf("\nNhap n = ");
    scanf("%d",&n);
    }while(n<=0);
   
   
    int dem;
  int temp;
  


     
temp =n;
 if(n==0) dem==1;
 while(temp!=0)
{
    if(temp%2==1) dem++;
    temp = temp/10;
}


  
     
   printf("\nn =%d",n);
   printf("\nSo chu so le co trong n la: %d", dem);
}
 