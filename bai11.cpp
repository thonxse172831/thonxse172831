//Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N bằng C 
#include"stdio.h"
#include"math.h"
#include"stdlib.h"
int main(){
    system("cls");
    int n;
    float t,s=1;
    printf("\nNhap n = ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
      s = s*i;
          t = t + s;
      }
    printf("%.2f",t);
}