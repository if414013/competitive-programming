#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> mss;
    string nama, nomor;
    int n,q;
    cin>>n>>q;
    while(n--){
        cin>>nama>>nomor;
        mss[nama] = nomor;

    }
    while(q--){
        cin>>nama;
        if(mss.find(nama)== mss.end())cout<<"NIHIL"<<endl;
        else cout<<mss[nama]<<endl;
    }

    return 0;
}
