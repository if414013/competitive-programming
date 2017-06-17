#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);
    int n, bil, flag,hitung;
    cin>>n;
    while(n--){
        cin>>bil;
        flag=1;
        hitung = 0;
        for(int i=2 ;i<bil;i++){
            if(bil%i==0){
                hitung++;
            }
            if(hitung==3){
                flag = 0;break;
            }
        }
        if(flag==1)cout<<"YA"<<endl;
        else cout<<"BUKAN"<<endl;
    }
    return 0;
}
