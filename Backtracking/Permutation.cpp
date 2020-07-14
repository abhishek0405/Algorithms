#include <iostream>
using namespace std;

void permute(char *arr,int i){
    if(arr[i]=='\0'){
        cout<<arr<<endl;
        return;
    }

    //recursive case
    for(int j=i;arr[j]!='\0';j++){
        swap(arr[i],arr[j]);
        permute(arr,i+1);
        swap(arr[i],arr[j]);
    }
}
int main() {
    char ip[100];
    cin>>ip;
    permute(ip,0);
    
}
