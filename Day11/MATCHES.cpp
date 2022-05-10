#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int sum = 0;
	int sticks = 0;
	int stickNum=0;
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i = 0;i<n;i++){
	    cin>>a[i]>>b[i];
	}
	for(int i = 0;i<n;i++){
	    sum=a[i]+b[i];
	    
	    
	    while(sum>0){
	    int stickNum = sum%10;
	    if(stickNum==1){
	        sticks+=2;
	    }
	    if(stickNum==8){
	        sticks+=7;
	    }
	    if(stickNum==6||stickNum==9||stickNum==0){
	        sticks+=6;
	    }
	    if(stickNum==2||stickNum==3||stickNum==5){
	        sticks+=5;
	    }
	    if(stickNum==4){
	        sticks+=4;
	        
	    }if(stickNum==7){
	        sticks+=3;
	    }
	    sum=sum/10;
	    }
	    cout<<sticks<<endl;
	   sticks = 0;
	    
	}
	return 0;
}
