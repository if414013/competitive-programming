#include<bits/stdc++.h>
using namespace std;
void biner(int bil)
{
    if( bil == 0 )
    {
        return;
    }
    biner( bil/2 );
    cout << bil % 2;
}
int main()
{
    int bil;
    cin>>bil;
    biner(bil);
    cout<<endl;
    return 0;
}
