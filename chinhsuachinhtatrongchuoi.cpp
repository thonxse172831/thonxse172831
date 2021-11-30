#include"stdio.h"
#include"string.h"
#include"stdlib.h"
void chinhsuachinhta(char x[])
{
   for(int i=0; i<strlen(x); i++)
   {
       if(i==0|| i>0 && x[i-1]==32)
       {
           if(x[i]>=97 && x[i]<=122)
           x[i] = x[i]-32;
       }else
        {
            if(x[i]>=65 && x[i]<=90)
            x[i]=x[i]+32;
        }
   }
}
int main()
{
    system("cls");
    char c[100];
    printf("\nNhap ten: ");
    fgets(c,sizeof(c),stdin);
    printf("\nTen cua ban: %s",c);
    chinhsuachinhta(c);
    printf("\nSau khi sua loi chinh ta: %s",c);
}