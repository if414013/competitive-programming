#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);
   int angka, hitung=0;
   bool flag = true;
   cin>>angka;
   hitung = angka;
   while(hitung>=1){
        if(angka % hitung ==0)cout<<hitung<<endl;
        hitung--;
   }
    return 0;
}
