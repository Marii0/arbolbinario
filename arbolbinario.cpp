#include "bits/stdc++.h"
using namespace std;
#define endl "\n";

int main(){
    int Tc,n,num;
    map <int, int> mp;

    cin>>Tc;
    while(Tc--){
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>num;
            mp[num]++;
        }
        for (auto it= mp.begin(); it!= mp.end(); it++)
        {
            if(it->second>=3){
                cout<<it->first<<endl;
            }
        }
        

    }
}