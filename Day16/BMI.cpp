#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,M,H;
	cin>>T;
	for(int i=0; i<T; i++){
	    cin>>M>>H;
	    if((M)/(H*H)<=18){
	        cout<<"1"<<endl;
	    }else if(((M)/(H*H))>=19 && ((M)/(H*H))<=24){
	        cout<<"2"<<endl;
	    }else if(((M)/(H*H))>=25 && ((M)/(H*H))<=29){
	        cout<<"3"<<endl;
	    }else if(((M)/(H*H))>=30){
	        cout<<"4"<<endl;
	    }
	}
	return 0;
}
