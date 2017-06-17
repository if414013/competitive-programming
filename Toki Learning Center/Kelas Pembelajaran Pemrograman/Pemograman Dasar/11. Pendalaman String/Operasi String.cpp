#include<bits/stdc++.h>
using namespace std;
string s1, s2, s3, s4;
int main(){
    cin>>s1>>s2>>s3>>s4;
    size_t found = s1.find(s2);
    s1.erase (found,s2.length());
    found = s1.find(s3) + s3.length();
    s1.insert(found,s4);
    cout<<s1<<endl;
    //cout<<s1<<endl;

    return 0;
}
