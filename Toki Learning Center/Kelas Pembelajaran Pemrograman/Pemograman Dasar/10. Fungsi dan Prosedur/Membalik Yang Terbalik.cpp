#include<bits/stdc++.h>
using namespace std;

int reverses(int n){
    int temp = n;
    int ret =0;
    while(temp > 0){
        ret = (ret*10) + (temp % 10);
        temp = temp / 10;
    }
    return ret;
}
int main()
{
    int a, b, c;
    cin>>a>>b;
    c = reverses(a) + reverses(b);
    cout<<reverses(c)<<endl;
    return 0;
}
