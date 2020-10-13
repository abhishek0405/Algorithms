#include <iostream>
using namespace std;
#include<algorithm>
#include<cmath>
//Question LINK:
//https://www.spoj.com/problems/BALIFE/ 
int main() {
    long long int n,t,x,i,j,k,sum,cap,ans;
    n=1;
    while(n!=-1){
        ans=0;
        sum=0;
        cin>>n;
        if(n==-1){
            break;
        }
        long long int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%n!=0){
            cout<<-1<<endl;
        }
        else{
            cap = sum/n;
            for(i=0;i<n;i++){
                arr[i]-=cap;
            }
            for(i=1;i<n;i++){
                arr[i]+=arr[i-1];
            }
            for(i=0;i<n;i++){
                ans = max(abs(arr[i]),ans);
            }
            cout<<ans<<endl;
        }

    }
}
