//Tính S(n) = 1 + 2 + 3 + … + n bằng C 
#include"stdio.h"
#include"stdlib.h"
int main(){
    system("cls");
    int s,n;
    printf("\nNhap n = ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        s = s + i;
    }
    printf("\n%d",s);
}