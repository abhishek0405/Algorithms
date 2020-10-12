#include <iostream>
using namespace std;
#include<vector>
#include<list>
#include<algorithm>
#include<climits>
#include<map>
#include<set>
//ACTIVITY SELECTION OF GFG. IDEA IS TO SORT BY END TIME AND THEN TAKE THE ATIVITES WHOSE START TIME IS GREATER OR EQUAL TO THE END TIME
int main(){
    long long int n,s,e,t,count,i,endt,prevendtime;
    
    cin>>t;
    while(t--){
    prevendtime=INT_MAX;
    cin>>n;
    count=1;
    set<pair<int,int>> times;
    for(i=0;i<n;i++){

        cin>>s>>e;
        times.insert(make_pair(e,s)); //sort on the basis of end time.
        prevendtime = min(prevendtime,e);//calculate the minimum end time.
    }
    for(auto p:times){
        if(p.second>=prevendtime){ //if start time is eq or greater than the end time.
            count++;
            prevendtime=p.first;
        }
    }
    cout<<count<<endl;
    

}
    
}