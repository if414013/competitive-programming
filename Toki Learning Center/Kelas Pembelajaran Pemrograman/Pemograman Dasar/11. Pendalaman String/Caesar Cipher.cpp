#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2, s3, s4;
    int n;
    cin>>s1>>n;
    s2 = "";
    int len = s1.length();
    int c,x;
    for(int i=0 ;i<len;i++){
        c = (int) s1.at(i);
        if(c+n<='z'){
            c = c+n;
            cout<<(char)c;
        }
        else if(c+n>'z'){
            c = c + n;
            x = c - 'z';
            c = 'a' + x;
            c = c-1;
            cout<<(char)c;
            //s2 = s2 + (char) x;
        }
    }
    cout<<endl;
    return 0;
}
