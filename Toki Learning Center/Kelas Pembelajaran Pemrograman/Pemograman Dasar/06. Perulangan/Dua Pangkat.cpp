#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);
   int angka, hitung=0;
   bool flag = true;
   cin>>angka;
   while(angka!=1){
        if(angka%2==0)angka /= 2;
        else{
            cout<<"bukan"<<endl;
            return 0;
        }
   }
   cout<<"ya"<<endl;
    return 0;
}
