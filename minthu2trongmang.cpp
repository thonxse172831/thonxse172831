#include "stdio.h"
#include "limits.h"
int a[100];
int n;
void nhapmang(int x[100],int &n){
    do{
        printf("\nNhap so luong mang can tao: ");
        scanf("%d",&n);

    }while (n<0 || n>100);
    for( int i = 0; i<n ; i++){
        printf("\na[%d] = ",i);
        scanf("%d",&a[i]);
    }

}
void xuatmang(int x[100], int n){
    for (int i = 0; i<n; i++){
        printf("%d ",x[i]);
    }
}
int timMinThuHai(int x[100], int n){
	int min = INT_MAX;
	int min_2 = INT_MAX;
	
	for(int i =0 ; i<n; i++){
		if(x[i]<min)
			min = x[i];
	}
	
	for(int i=0; i<n; i++){
		if (x[i]==min){
			continue;
		}else{
			if(x[i]<min_2){
				min_2 = x[i];
			}
		}
	}
	return min_2;
} 
int main(){
    nhapmang(a,n);
    xuatmang(a,n);
    printf("\n");
	printf("Min_2 = %d", timMinThuHai(a, n));
}