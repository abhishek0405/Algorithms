#include <iostream>
#include<string>
#include<set>
using namespace std;

void permute(char *ip,int i,set<string> &s){
if(ip[i]=='\0'){
    string t=ip;
    s.insert(t);
    return;
}
for(int j=i;ip[j]!='\0';j++){
    swap(ip[i],ip[j]);
    permute(ip,i+1,s);
    swap(ip[i],ip[j]);
}
}

int main() {
    char ip[100];
    cin>>ip;
    set<string> s;
    permute(ip,0,s);
    for(auto it:s){
        cout<<it<<endl;
    }
}
