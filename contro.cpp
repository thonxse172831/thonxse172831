// khai báo và gán biến thay đổi giá trị con trỏ
#include<stdio.h>
#include"stdlib.h"
int main()
{
    system("cls");
    // con tro: pc;
    int *pc;
    //bien c;
    int c;
    c=3;
    // gan vi tri con tro
    pc = &c;
    // in gia tri c va vi tri luu tru cua c qua con tro
    printf("\nGia tri cua c la %d",c);
    printf("\nVi tri luu tru gia tri cua c la %p", pc);

    // thay doi gia tri c:
    // 1 gan lai gt c: 
    c = 5;
    printf("\nGia tri cua c la %d",c);
    printf("\nVi tri luu tru gia tri cua c la %p", pc);
    // => vi tri luu tru khong thay doi, gia tri c thay doi


    // 2 thay doi thong qua con tro pc;
    *pc =9;
    // muon in gia tri cua bien c qua con tro phai la: %d va *(contro)
    // muon in vi tri cua bien c phai la: %p va (contro)
    printf("\nGia tri cua c la %d",*pc);
    printf("\nVi tri luu tru gia tri cua c la %p", pc);

}