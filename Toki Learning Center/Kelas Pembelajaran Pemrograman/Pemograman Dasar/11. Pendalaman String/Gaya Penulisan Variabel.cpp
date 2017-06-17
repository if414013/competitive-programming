#include<bits/stdc++.h>
using namespace std;

int main()
{
    string asli, bentukan="";
    cin>>asli;
    int len = asli.length();
    asli = asli + "..........";
    for(int i=0 ;i<len;i++){
        if(asli.at(i)=='_'){
            bentukan = bentukan + (char)toupper(asli.at(i+1));
            i++;
        }
        else if(isupper(asli.at(i))){
            bentukan = bentukan + '_' + (char)tolower(asli.at(i));
        }
        else bentukan = bentukan + asli.at(i);
    }
    cout<<bentukan<<endl;
    return 0;
}
