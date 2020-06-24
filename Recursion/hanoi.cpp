#include <iostream>
using namespace std;
void move(int n,char src,char mid,char end){
    if(n==0){
        return;
    }
    move(n-1,src,end,mid);
    cout<<"Move ring "<<n<<" from "<<src<<" to "<<end<<endl;
    move(n-1,mid,src,end);
    return;

}


int main() {
   int n;
   cin>>n;
   move(n,'a','b','c');
   
}
