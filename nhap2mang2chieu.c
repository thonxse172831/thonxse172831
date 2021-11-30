#include <stdio.h> 
#include <conio.h> 
void main(){ 
//clrscr(); 
const int max =5; //số dòng, cột tối đa 
float A[max][max],B[max][max],C[max][max]; 
int n,m,i,j; 
float x; 
do{ 
printf("\nNhap so dong cua ma tran = "); 
scanf("%d",&n); 
printf("\nNhap so cot cua ma tran = "); 
scanf("%d",&m); 
 } while(n<1 || n>max|| m<1 || m>max); 
printf("\nNhap A co %d dong, %d cot \n",n,m); 
for(i=0; i<n; i++) 
for(j=0; j<m; j++) 
 { 
printf("A[%d][%d]= ",i,j); 
scanf("%f",&x);A[i][j]=x; 
 } 
printf("\nNhap B co %d dong, %d cot \n",n,m); 
for(i=0; i<n; i++) 
for(j=0; j<m; j++) 
 { 
printf("B[%d][%d]= ",i,j); 
scanf("%f",&x);B[i][j]=x; 
} 
for(i=0; i<n; i++) 
for(j=0; j<m; j++) 
 C[i][j]=A[i][j]+B[i][j];
 printf("\nCac phan tu ma tran C la \n"); 
for(i=0; i<n; i++) 
 { printf("\n"); 
 for(j=0; j<m; j++) 
 printf("%4.1f ",C[i][j]); 
 } 
getch(); 
}