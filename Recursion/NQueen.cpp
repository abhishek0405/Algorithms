#include <iostream>
#include<string>
#include<set>
using namespace std;

bool safe(int i,int j,int board[][10],int n){
    int x=i;
    int y=j;
    while(x>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
    }
    x=i;
    y=j;
    while(x>=0 && y>=0){
         if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    x=i;
    y=j;

    while(x>=0 && y<n){
         if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }
    return true;
}

bool nqueen(int board[][10],int n,int i){
    if(i==n){
        for(int r=0;r<n;r++){
            for(int c=0;c<n;c++){
                if(board[r][c]==1){
                    cout<<"Q ";
                }
                else{
                    cout<<"_ ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }

    for(int j=0;j<n;j++){
        if(safe(i,j,board,n)){
            board[i][j]=1;
            if(nqueen(board,n,i+1)){
                return true;
            }
            board[i][j]=0;
        }
    }
    //No pos in current row possible
    return false;


}

int main() {
   int n;
   cin>>n;
  int board[10][10]={0};
if(nqueen(board,n,0)==0){
    cout<<"Not Possible"<<endl;
}
else{
    nqueen(board,n,0);
}
}
