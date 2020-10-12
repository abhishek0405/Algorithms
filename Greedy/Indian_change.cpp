#include <iostream>
using namespace std;
#include<vector>
#include<list>
#include<algorithm>
#include<climits>
#include<map>

void make_change(int money,int * notes){
    map<int,int> mp;
    for(int i=10;i>=0;i--){
        mp[notes[i]]=0;
    }
    int index,note,count;
    while(money>0){
        index = upper_bound(notes,notes+11,money)-1-notes;//-1 to get get just lesser or equal value. and - notes to get the index(ptr subtractipn)
        note = notes[index];
        mp[note]++;
        money-=note;
    }
    
    for(auto p:mp){
        if(p.second>0)
        cout<<p.second<<" notes of "<<" Rs "<<p.first<<endl;
    }
}

int main(){
    int money;
    int notes[]={1,2,5,10,20,50,100,200,500,1000,2000};
    cin>>money;
    make_change(money,notes);

}