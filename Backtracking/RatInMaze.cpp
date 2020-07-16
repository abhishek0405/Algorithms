#include <iostream>
using namespace std;
bool solve(int n,int m,char arr[][1001],int i,int j,int sol[][1001]){
    if(i==n-1 && j==m-1 && arr[i][j]=='O'){
        sol[i][j]=1;
        return true;
    }

    if(arr[i][j]=='X'){
        return false;
    }
    if(i>=n||j>=m){
        return false;
    }
    
    sol[i][j]=1;
    if(solve(n,m,arr,i,j+1,sol)){
        return true;
    }
    if(solve(n,m,arr,i+1,j,sol)){
        return true;
    }
    sol[i][j]=0;
    return false;
   
}

int main() {
    int n,m,i,j;
    cin>>n>>m;
    char arr[1001][1001];
    int sol[1001][1001];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
            sol[i][j]=0;
        }
    }
    
    
    if(solve(n,m,arr,0,0,sol)){
        for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
        }
    }
    
    else{
        cout<<-1;
    }
    
    

    

}
