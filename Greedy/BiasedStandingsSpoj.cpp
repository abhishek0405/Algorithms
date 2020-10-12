#include <iostream>
using namespace std;
#include<vector>
#include<climits>
#include<cmath>
#include<string>

int main(){
    long long int n,t,i,j,x,k,cr,ans;
    string s;
    cin>>t;
    while(t--){
        ans=0;
        cin>>n;
        int v[1000000]={0};
        for(i=1;i<=n;i++){
            cin>>s>>x;
            v[x]++;
        }
        cr=1;
        for(i=1;i<=n;i++){
            while(v[i]>0){
                ans+=abs(i-cr);
                cr++;
                v[i]--;
        }
     }
     cout<<ans<<endl;
}
}
    

    
