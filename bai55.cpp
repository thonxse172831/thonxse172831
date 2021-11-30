//C++
#include"iostream"
using namespace std;
int main(){
    float a,b;
    float x;
    cout<<"Nhap a= ";cin>>a;
    cout<<"\nNhap b = ";
    cin>>b;
    if(a==0){
        cout<<"\nPT vo nghiem!";
    }else{
        x= -b/a;
        cout<<x;
    }
}