#include<bits/stdc++.h>

using namespace std;

void printPegunungan(int n){
    //cout<<n<<endl;
    if(n==1)printf("*\n");
    else if(n==2){
        printf("*\n**\n*\n");
    }
    else if(n>2){
        printPegunungan(n-1);
        for(int i=0 ;i<n;i++)printf("*");printf("\n");
        printPegunungan(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    printPegunungan(n);
    return 0;
}
