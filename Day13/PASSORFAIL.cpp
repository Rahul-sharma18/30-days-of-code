#include <iostream>
using namespace std;

int main() {
int x;
cin>>x;
int N,X,P;
for(int i=0;i<x;i++){
    cin>>N>>X>>P;
    if(P<=3*X-(N-X)){
        cout<<"PASS";
    }
    else{
        cout<<"FAIL";
    }
    
    cout<<endl;
}
}
