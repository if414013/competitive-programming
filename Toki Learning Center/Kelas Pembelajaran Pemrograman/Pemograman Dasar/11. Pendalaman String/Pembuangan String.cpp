#include<bits/stdc++.h>
using namespace std;
string s1, s2, s3, s4;
int main(){
    cin>>s1>>s2;
    int found = (int) s1.find(s2);
    while(found!=-1){
        s1.erase (found,s2.length());
        found = (int) s1.find(s2);
    }
    cout<<s1<<endl;

    return 0;
}
