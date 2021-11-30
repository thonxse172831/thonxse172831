// menu nhap diem, tinh trung binh cong, xep loai;
#include"stdio.h"
#include"math.h"    
#include"conio.h"
float a[10];
int n;
void nhap_diem_van(float a[10] ){
     for(int i=0; i<1; i++){
        printf("\nNgu van: ")  ; 
        scanf("%f",&a[i]);
    }
}
void nhap_diem_toan(float a[10]){
     for(int i=1; i<2; i++){
        printf("\nToan: ");
        scanf("%f",&a[i]);
    }
}
void nhap_diem_tieng_anh(float a[10]){
     for(int i=2; i<3; i++){
        printf("\nTieng Anh: ");
        scanf("%f",&a[i]);
    }
}
void nhap_diem_hoa(float a[10]){
     for(int i=3; i<4; i++){
        printf("\nHoa Hoc: ");
        scanf("%f",&a[i]);
    }
}
void nhap_diem_sinh(float a[10]){
     for(int i=4; i<5; i++){
        printf("\nSinh Hoc: ");
        scanf("%f",&a[i]);
    }
}
void nhap_diem_gdcd(float a[10]){
     for(int i=5; i<6; i++){
        printf("\nGDCD: ");
        scanf("%f",&a[i]);
    }
}
void nhap_diem_dia_ly(float a[10]){
     for(int i=6; i<7; i++){
        printf("\nDia Li: ");
        scanf("%f",&a[i]);
    }
}
void nhap_diem_su(float a[10]){
     for(int i=7; i<8; i++){
        printf("\nLich Su: ");
        scanf("%f",&a[i]);
    }
}
void nhap_diem_tin_hoc(float a[10]){
     for(int i=8; i<9; i++){
        printf("\nTin Hoc: ");
        scanf("%f",&a[i]);
    }
}

void trungbinhcong(float a[10]){
    float dem;
    float tbc;
    float tong;
    for(int i=0; i<9; i++){
        tong = tong +a[i];
        dem++;
    }
    tbc = tong/dem;
    if(tbc>=8){
        if(a[0]>=8 || a[1]>=8){
           printf("\nXep loai:                    Gioi");
           printf("\nTrung binh cong cac mon:     %.1f",tbc);
           printf("\nKet qua:                     Len Lop");
        }else {
           printf("\nXep loai:                    Kha");
           printf("\nTrung binh cong cac mon:     %.1f",tbc);
           printf("\nKet qua:                     Len Lop");
        }
    }else if(tbc>=6.5&& tbc<8){
           printf("\nXep loai:                    Kha");
           printf("\nTrung binh cong cac mon:     %.1f",tbc);
           printf("\nKet qua:                     Len Lop");


    }else if(tbc>=3 && tbc<6.5){
           printf("\nXep loai:                   Trung Binh");
           printf("\nTrung binh cong cac mon:     %.1f",tbc);
           printf("\nKet qua:                     Len Lop");
    }else{
           printf("\nXep loai:                    Yeu");
           printf("\nTrung binh cong cac mon:     %.1f",tbc);
           printf("\nKet qua:                     Khong len lop");
    }
    printf("\n");
}

int main(){
  clearerr;
    int vitri, gt;
    char x;
    do{
    printf("----------------------------------------------------------------");
    printf("\n                           MENU                               ");
    printf("\n----------------------------------------------------------------");
    printf("\nVui long chon lenh ban can chuong trinh thuc hien!\n");
    printf("\n 1 Nhap diem Van:");
    printf("\n 2 Nhap diem Toan:");
    printf("\n 3 Nhap diem Tieng Anh:");
    printf("\n 4 Nhap diem Hoa:");
    printf("\n 5 Nhap diem Sinh:");
    printf("\n 6 Nhap diem GDCD:");
    printf("\n 7 Nhap diem Dia ly");
    printf("\n 8 Nhap diem Lich su:");
    printf("\n 9 Nhap diem Tin hoc:");
    printf("\n 0 Ket qua:");
   
   
    printf("\n Nhan E de thoat\n");
    printf("\n                     Nguyen Xuan Tho");
    printf("\n----------------------------------------------------------------\n");
   
    scanf(" %c",&x);
     switch (x){
        case '1': // nhap diem van
        nhap_diem_van(a);
        break;
      
        case '2': // nhap diem toan
        nhap_diem_toan(a);
        break;
        
        case '3': //nhap diem tieng anh
        nhap_diem_tieng_anh(a);
        break;
      
        case '4': //nhap diem hoa
        nhap_diem_hoa(a);
        break;
       
        case '5': //nhap diem sinh
        nhap_diem_sinh(a);
        break;
        
        case '6': //nhap diem gdcd
        nhap_diem_gdcd(a);
        break;
        case '7': //nhap diem dia ly
        nhap_diem_dia_ly(a);
        break;
        case '8': //nhap diem lich su
        nhap_diem_su(a)       ;
        break;
        case '9': //nhap diem tin hoc
        nhap_diem_tin_hoc(a);       
        break;
        case '0': //tinh trung binh, xep loai, xuat ra man hinh
               trungbinhcong(a);
               
        break;


     } 
  
    }while(x!='e');
  
}
