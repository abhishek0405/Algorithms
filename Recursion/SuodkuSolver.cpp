#include <iostream>
#include<string>
#include<set>
using namespace std;

bool check(int board[][9],int i ,int j, int k){
    for(int c=0;c<9;c++){
        if(board[i][c]==k){
            return false;
        }
    }
    for(int r=0;r<9;r++){
        if(board[r][j]==k){
            return false;
        }
    }
    int x= (i/3)*3;
    int y =(j/3)*3;
    for(int r=x;r<x+3;r++){
        for(int c=y;c<y+3;c++){
            if(board[r][c]==k){
                return false;
            }
        }
    }
    return true;
}

bool solve(int board[][9],int i,int j){
    //Base Case
    if(i==9){
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                cout<<board[r][c]<<" ";
            }
            cout<<endl;
        }
        
    return true;
    }

    if(j==9){
        return solve(board,i+1,0);
    }

    //recursive case

    if(board[i][j]!=0){
        return solve(board,i,j+1);
    }

    for(int k=1;k<=9;k++){
        if(check(board,i,j,k)){
            board[i][j]=k;
            if(solve(board,i,j+1)){
                return true;
            }
        }
    }

    board[i][j]=0;
    return false;




}



int main() {
  int board[9][9]={ {3, 0, 6, 5, 0, 8, 4, 0, 0}, 
         {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
         {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
         {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
         {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
         {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
         {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
         {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
         {0, 0, 5, 2, 0, 6, 3, 0, 0} };

         solve(board,0,0);
}
