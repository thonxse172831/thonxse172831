#include "stdio.h"
#include "math.h"
void ptbachai(float a, float b, float c){
    float d = pow(b,2) - 4*a*c;
    if (d>0){
        float x1 = (-b+sqrt(d))/(2*a);
        float x2 = (-b-sqrt(d))/(2*a);
        printf("\nPT bac 2 %.1fx^2 + %.1fx + %.1f = 0 ",a,b,c);
        printf("\nCo 2 nghiem phan biet x1 = %.2f, x2 = %.2f",x1,x2);
    }
    else if(d=0){
        float x = -b/2*a;

        printf("\nPT bac 2 %.1fx^2 + %.1fx + %.1f = 0 ",a,b,c);
        printf("\nCo  nghiem kep x1 = x2 = %.2f",x);

    }
    else {
        printf("\nPT bac 2 %.1fx^2 + %.1fx + %.1f = 0 ",a,b,c);
        printf("\nPT vo nghiem!");
    }
}
void ptmotan(float b, float c){
    float x = -c/b;
    printf("\nPT Bac nhat mot an %.1fx + %.1f =0 ",b,c);
    printf("\nPT bac nhat mot an co nghiem la %.2f",x);
    
}
int main(){
    float a,b,c;
        printf("Nhap he so a: ");
        scanf("%f",&a);
        printf("Nhap he so b: ");
        scanf("%f",&b);
        printf("Nhap he so c: ");
        scanf("%f",&c);
             if(a==0) {
                 ptmotan(b,c);
             }
            else {
                ptbachai(a,b,c);
        }
}