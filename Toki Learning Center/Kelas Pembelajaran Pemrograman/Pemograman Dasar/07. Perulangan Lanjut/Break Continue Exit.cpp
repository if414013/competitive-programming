#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);
  int n;
  cin>>n;
  for(int i=1 ;i<=n ;i++){
    if(i%10==0)continue;
    if(i==42){
        cout<<"ERROR"<<endl;break;
    }
    cout<<i<<endl;
  }
    return 0;
}
