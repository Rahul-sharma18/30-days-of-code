#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    int c=0;
	    cin>>n;
	    while(n)
	    {
	        if(n%10==4)
	            c++;
	         n=n/10;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
