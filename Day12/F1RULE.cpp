#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    if(y <= (107*x)/100){
	        cout << "YES\n";
	    } else{
	        cout << "NO\n";
	    }
	}
	return 0;
}
