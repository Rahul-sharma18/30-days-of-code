#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
		int N,K;
		cin>>N>>K;
		int a[N];
        for(int j=0;j<N;j++){
            cin>>a[j];
        }
		int count=0;
		for(int i=0;i<N;i++){
			if(a[i]>K){
				count=count+1;
			}
			

		}
            
        
      cout<<count<<endl;
    }
	return 0;
}
