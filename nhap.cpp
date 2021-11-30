#include"stdio.h"
#include"stdlib.h"
void xoaDongMaTran(int x[3][3], int &m, int n, int k){
	if(k<0 || k>=m)
		return;
		
	for(int i=k; i<m-1; i++){
		for(int j=0; j<n; j++){
			x[i][j]=x[i+1][j];
		}
	}
	m = m - 1;
}
void xuatmatran(int a[3][3], int c, int r)
{
    for(int i=0; i<c; i++)
    {
        printf("\n");
        for(int j=0; j<r; j++)
        {
            printf("%3d", a[i][j]);
        }
    }
}
int main()
{
    int a[3][3];
    a[0][0]=1;
    a[0][1]=2;
    a[0][2]=3;
    
    a[1][0]=4;
    a[1][1]=5;
    a[1][2]=6;
    
    a[2][0]=7;
    a[2][1]=8;
    a[2][2]=9;


    system("cls");
    int x=3;
    xoaDongMaTran(a,x,3,2);
    xuatmatran(a,3,3);

}