#include<bits/stdc++.h>
using namespace std;
bool compares(double a, double b){
    return a > b;
}
int main(){
    int n,x;
    double bil, satuan;
    vector<double> jumlah;
    vector<double> harga;
    vector<double> greed;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>bil;
        jumlah.push_back(bil);
    }
    for(int i=0;i<n;i++){
        cin>>bil;
        harga.push_back(bil);
    }
    for(int i=0;i<n;i++){
        satuan = harga[i]/jumlah[i];
        for(int j=0 ;j<(int)jumlah[i];j++){
            greed.push_back(satuan);
        }
    }
    sort(greed.begin(),greed.end(),compares);
    double total =0;
    for(int i=0 ;i<greed.size();i++){
        if(i==x)break;
        total += greed[i];
        //cout<<total<<endl;

    }
    printf("%.5lf\n", total);

    return 0;
}
