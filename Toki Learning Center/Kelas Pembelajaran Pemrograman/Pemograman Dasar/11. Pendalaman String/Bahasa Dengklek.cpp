#include<bits/stdc++.h>
using namespace std;

int main()
{
    string asli, bentukan="";
    cin>>asli;
    int len = asli.length();
    asli = asli + "..........";
    for(int i=0 ;i<len;i++){
       if(isupper(asli.at(i))) bentukan = bentukan + (char) tolower(asli.at(i));
       else bentukan = bentukan + (char) toupper(asli.at(i));
    }
    cout<<bentukan<<endl;
    return 0;
}
