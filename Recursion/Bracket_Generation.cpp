#include <iostream>
#include<string>
using namespace std;

void brackets(int n,char *st,int i,int op_c,int cl_c){
    if(i==2*n){
        st[i]='\0';
        cout<<st<<endl;
    }

    if(op_c<n){
        st[i]='(';
        brackets(n,st,i+1,op_c+1,cl_c);
    }
    if(op_c>cl_c){
        st[i] = ')';
        brackets(n,st,i+1,op_c,cl_c+1);
    }
}
int main() {
    char st[100];
    brackets(2,st,0,0,0);
   
}
