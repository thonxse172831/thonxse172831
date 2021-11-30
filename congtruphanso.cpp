#include"stdio.h"
#include"math.h"
#include"stdlib.h"
// nhap phan so chuyen -duoi mau len tu so va rut gon phan so
struct phanso
{
    int tuso;
    int mauso;
};
void nhapphanso(phanso *ps)
{
    printf("\nNhap vao tu so: ");
    scanf("%d",&ps->tuso);
    do 
    {
        printf("\nNhap vao mau so: ");
        scanf("%d", &ps->mauso);
    }while(ps->mauso==0);
   
}
phanso conghaiphanso(phanso ps1, phanso ps2)
{
    phanso ketqua;
    ketqua.tuso = ps1.tuso*ps2.mauso +ps2.tuso*ps1.mauso;
    ketqua.mauso = ps1.mauso*ps2.mauso;
}
void rutgon(phanso *ps)
{
    // tim uoc so chung lon nhat
    int a = ps->tuso;
    int b = ps->mauso;
     a = abs(a);
     b = abs(b);

    int ucln = 1;
    //th1;
    if(a==0 || b==0)
    {
        ucln = a+b;
    }else
    {
        while(a!=b)
        {
            if(a>b) 
                a = a-b;
            else
                b = b-a;

        }
            ucln = a;
    }
    ps->tuso/=ucln;
    ps->mauso/=ucln;
}
void inphanso(phanso ps)
{
     if(ps.mauso <0)
    {
        ps.tuso*=-1;
        ps.mauso*=-1;
    }
    rutgon(&ps);
    printf("%d/%d", ps.tuso, ps.mauso);
}

int main()
{
    system("cls");
    phanso ps1, ps2;
    printf("\nNhap phan so thu 1: ");
    
    nhapphanso(&ps1);
    printf("\nNhap phan so thu 2: ");
    nhapphanso(&ps2);
    printf("\nPhan so vua nhap la: ");
    inphanso(ps1);
    printf("\t");
    inphanso(ps2);
    printf("\nCong hai phan so: ");
    inphanso(ps1); printf("+"); inphanso(ps2); printf("="); inphanso(conghaiphanso(ps1,ps2));
}