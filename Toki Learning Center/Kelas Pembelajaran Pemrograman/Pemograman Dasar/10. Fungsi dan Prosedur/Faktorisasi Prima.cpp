#include<bits/stdc++.h>
using namespace std;

int main()
{
    bitset<10000000> bs;
    vector<int> primes;
    bs.set();                                                 
    bs[0] = bs[1] = 0;                                     
    for (long long i = 2; i <= 1000000; i++) if (bs[i])
    {
		for (long long j = i * i; j <= 1000000; j += i) bs[j] = 0;
    	    primes.push_back((int)i); 
            //cout<<i<<" ";
    }
    int bil;
    cin>>bil;

    int i=0;
    map<int,int>fact;
    int maks_fact;
    int hit=0;
    while(bil!=1){
        if(bil%primes[i]==0){
            //cout<<bil<<" "<<primes[i]<<endl;
            fact[primes[i]]++;
            //cout<<fact[primes[i]]<<endl;
            bil = bil/primes[i];
        }
        else i++;
    }
    maks_fact = primes[i];
    for(int i=0 ;i<=maks_fact;i++){
        if(fact[i]!=0 && i!=maks_fact){
            if(fact[i]==1)cout<<i<<" x ";
            else cout<<i<<"^"<<fact[i]<<" x ";
        }
        else if(i==maks_fact){
            if(fact[i]==1)cout<<i<<endl;
            else cout<<i<<"^"<<fact[i]<<endl;
        }
    }

    return 0;
}
