#include"stdio.h"
#include"stdlib.h"
#include"string.h"
void ghepchuoi(char x[], char y[])
{
    size_t(len1)= strlen(x);
    size_t(len2)= strlen(y);
    for(int i=len1; i<len1+len2; i++)
    {
        x[i]= y[i-len1];
    }
    x[len2+len1]=='\0';
}
int  main()
{
    system("cls");
    char s1[100]= "Nguyen Xuan Tho ";
    char s2[20]= "Tay Ninh";
    printf("\ns1= %s",s1);
    printf("\ns2= %s",s2);
   // strncat(s1,s2,size_t (s1));
   // printf("\nS1 = %s",s1);
    printf("\nSau khi su dung ham tu viet");
    ghepchuoi(s1,s2);
    printf("\n%s",s1);

}