#include <iostream>
using namespace std;

void printn(int angka)
{
    if (angka == 0)
        return;
    cout << "* ";
    printn(angka - 1);
}
 
void segitiga(int n, int i){
    if (n == 0)
        return;
    printn(i);
    cout << endl;
    segitiga(n - 1, i + 1);
}
int main()
{
    int n;
    printf("Masukkan Angka : ");
    cin>>n;
    segitiga(n, 1);
    return 0;
}
