#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,a,b;
	    cin>>x>>a>>b;
	    int q=a+b*2;
	    if(q>=x)cout<<"Qualify"<<endl;
	    else cout<<"NotQualify"<<endl;
	}
	return 0;
}
