//Đếm số lượng chữ số của số nguyên dương n bằng C
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
   int temp;
   int dem=0;
  temp = n/10;
  if(temp!=0)
  {
      dem=1;
      do{
          temp=temp/10;
          dem++;
      }while(temp!=0);
  }
  else
  dem++;   
   printf("\nn =%d",n);
   printf("\nSo chu so co trong n la: %d", dem);
}