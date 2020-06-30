#include <iostream>
#include<string>
using namespace std;

void subseq(char *inp,char *out,int i,int j){
    if(inp[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    out[j] = inp[i];
    subseq(inp,out,i+1,j+1);
    subseq(inp,out,i+1,j);
}
int main() {
    char arr[]="abc";
    char op[100];
    subseq(arr,op,0,0);
   
}
