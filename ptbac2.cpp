//
#include "stdio.h"
#include "math.h"
int main(){
    float a,b,c,d,x1,x2;
     printf("\nNhap he so a = ");
    scanf("%d",&a);
    printf("\nNhap he so b = ");
    scanf("%d",&b);
    printf("\nNhap he so c = ");
    scanf("%d",&c);
    
    //delta = b^2 - 4.a.c
    d = b*b - 4*a*c;
    if( d>0){
        x1 = (-b+ sqrt(d))/(a*2);
        x2 = (-b- sqrt(d))/(a*2);
        printf("\nPT co 2 nghiem phan biet x1 = %.2f, x2 = %.2f", x1,x2);
    }else if ( d==0){
        x1 = x2 = -b/(2*a);
        printf("\nPT co nghiem kep: %.2f",x1);
     }else
     printf("\nPT vo nghiem!");
// if(dk){ 
    // thuc hien lenh can thuc hien;
//thuc hien2  lenh tro len


//}





}