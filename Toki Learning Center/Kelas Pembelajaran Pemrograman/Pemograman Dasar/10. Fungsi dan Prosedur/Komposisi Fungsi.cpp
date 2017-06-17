#include<bits/stdc++.h>
using namespace std;
int hit(int a,int b,int x){
    int tmp = abs((a*x)+b);
    return tmp;
}
int main(){
    int A,B,X,K;
    cin>>A>>B>>K>>X;
    while(K--){
        X = hit(A,B,X);

    }
    cout<<X<<endl;
    return 0;
}
