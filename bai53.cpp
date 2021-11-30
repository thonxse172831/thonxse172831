//trộn 2 mảng thành 1 mảng
#include"stdio.h"
#include"stdlib.h"
//mang
//a[i]=     0 1 2 3 4 
//giatri=   1 5 3 6 7
int n1,n2,n3;
int a[100],b[100],c[200];
void nhapmang(int x[100], int &n){
    printf("\nNhap so luong can tao cho mang:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("%d = ",i);
        scanf("%d",&x[i]);
    }
}
void tronmang(int x1[100], int n_x1, int x2[100], int n_x2,int x3[200], int &n_x3){
//	n_x3 = n_x1+n_x2;
//x[2]=  1 2 3 4 5 
//i=     0 1 2 3 4
//x[1] = 3 5 6 
    for(int i=0; i<n_x1; i++){
      x3[n_x3]=x1[i];
        n_x3++;
    }
    for(int i=0; i<n_x2; i++){
         x3[n_x3] =x2[i];
        n_x3++;
    }
	
}
void sapxeptang(int x[100],int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(x[i]>x[j]){
                int temp = x[i];
                x[i] = x[j];
                x[j]= temp;
            }
        }
    }
}
void sapxepgiam(int x[100],int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(x[i]<x[j]){
                int temp = x[i];
                x[i] = x[j];
                x[j]= temp;
            }
        }
    }
}
void xuatmang(int x[100],int n){
        printf("\nGia tri cua mang vua nhap: ");
    for(int i=0; i<n; i++){
        printf(" %d ", x[i]);
        
    }
}
int main(){
    char t;
    system("cls");
    do{
        printf("\n---------------------------------------------------------------------------------");
        printf("\n||                                      MENU                                   || ");
        printf("\n||-----------------------------------------------------------------------------||");
        printf("\n||         Nhan 1 de nhap mang 1!                                              ||");
        printf("\n||         Nhan 2 de nhap mang 2!                                              ||  ");
        printf("\n||         Nhan 3 de tron 2 mang va xuat ra man hinh theo thu tu tang dan!     ||  ");
        printf("\n||         Nhan 4 de tron 2 mang va xuat ra man hinh theo thu tu giam dan!     || ");
        printf("\n||         Nhan 5 de in mang 1!                                                ||  ");
        printf("\n||         Nhan 6 de in mang 2!                                                ||  ");
        printf("\n||         Nhap E de thoat chuong trinh!                                       ||  ");
        printf("\n||-----------------------------------------------------------------------------||");
        printf("\n||                                Nguyen Xuan Tho                              ||   ");
        printf("\n---------------------------------------------------------------------------------\n");
        scanf(" %c",&t);

         switch(t){
             case '1':
                    nhapmang(a,n1);
                   
             break;
             case '2':
                    nhapmang(b,n2);
                  
             break;
             case '3':
                    tronmang(a,n1,b,n2,c,n3);
                    sapxeptang(c,n3);
                    xuatmang(c,n3);
             break;
             case '4':
                    tronmang(a,n1,b,n2,c,n3);
                    sapxepgiam(c,n3);
                    xuatmang(c,n3);
             break; 
             case '5':
                    xuatmang(a,n1);
                    break;
             case '6':
                    xuatmang(b,n2);
         }


   }while(t!='e');
}
   