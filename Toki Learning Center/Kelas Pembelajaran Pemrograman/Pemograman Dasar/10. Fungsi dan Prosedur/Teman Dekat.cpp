#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef map<int, int> mii;
typedef vector<pii> vpii;

int dekat(pii a, pii b, int d){
    int tmp = pow(abs(a.first - b.first),d)+ pow(abs(a.second - b.second),d);
    return tmp;
}
int main() {
    int n, d, a, b;
    cin>>n>>d;
    pii nil;
    int x, y;
    vpii data;
    while(n--){
        cin>>a>>b;
        nil = make_pair(a,b);
        data.push_back(nil);
    }
    int maks = 0;
    int minim = 1000000000;
    int bil;
    for(int i=0 ;i<data.size();i++){
        for(int j=0 ;j<data.size();j++){
            if(i!=j){
                bil = dekat(data[i], data[j],d);
                if(bil>maks)maks=bil;
                if(bil<minim)minim = bil;
            }
        }
    }
    cout<<minim<<" "<<maks<<endl;
    return 0;
}
