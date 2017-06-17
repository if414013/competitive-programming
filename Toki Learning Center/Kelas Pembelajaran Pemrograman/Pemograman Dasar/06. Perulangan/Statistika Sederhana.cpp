#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);
   int Max = -1000001, Min = 10000000;
   int n, bil;
   cin>>n;
   while(n--){
    cin>>bil;
    if(bil<Min)Min =  bil;
    if(bil>Max)Max = bil;
   }
   cout<<Max<<" "<<Min<<endl;
    return 0;
}
