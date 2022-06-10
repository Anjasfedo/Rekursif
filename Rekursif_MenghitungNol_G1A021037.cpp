#include<iostream>
using namespace std;
int menghitungnol(int angka)
{
static int hitung=0;
    if(angka>0)
    {
        if(angka%10==0)
        hitung++;

        menghitungnol(angka/10);
    }
    return hitung;
}
int main()
{
    int n;
    cout<<"Masukkan Bilangan : ";
    cin>>n;
    cout<<"Pada Bilangan Tersebut Terdapat Angka Nol Sebanyak : "<<hitungnol(n);
}
