#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	       int n;
	       cin>>n;
	       int a = n-((n/4)*4);
	       if ((a/2)>=1) std::cout << "yes" << std::endl;
	       else cout<<"no"<<endl;
	}
	return 0;
}
