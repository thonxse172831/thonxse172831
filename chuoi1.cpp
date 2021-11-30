#include"stdio.h"
#include"stdlib.h"
int main()
{
    system("cls");
   char a[100], b[100], c[100],d[100],g[100];
   // a la ten
   // b la ngay thang nam sinh
   // c la dia chi
   printf("\nNhap ten cua ban: ");
   fgets(a,sizeof(a), stdin);
   //getchar();
   printf("\nNhap tuoi cua ban: ");
   scanf("%s",b);
   getchar();
   printf("\nNhap dia chi cua ban: ");
   fgets(c,sizeof(c),stdin);
   //getchar();

  printf("\nTinh trang: ");
  fgets(d,sizeof(d),stdin);
  getchar();
 
  printf("\nTen nguoi yeu la gi: ");
  fgets(g,sizeof(g), stdin);
  getchar();
   
   printf("\nThong tin ve ban: ");
   printf("\nTen: ");
   puts(a);
   printf("Tuoi: %s", b);
   printf("\n\nDia chi: ");
   puts(c);
   printf("Tinh trang: ");
   puts(d);
   printf("\nTen nguoi yeu: ");
   puts(g);
  

}