#include<bits/stdc++.h>
using namespace std;
string kata;
bool cek(int a, int b){
    if(a>=b)return true;
    else if(kata.at(a) != kata.at(b))return false;
    else return cek(++a,--b);
}
int main(){
    cin>>kata;
    if(cek(0,kata.length()-1))cout<<"YA"<<endl;
    else cout<<"BUKAN"<<endl;
    return 0;
}
