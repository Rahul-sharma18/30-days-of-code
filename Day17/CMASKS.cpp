#include <iostream>
using namespace std;
int main()
{
	int t,x,y;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		if((100*x > 10*y) || (100*x==10*y))
		{
			cout<<"cloth"<<endl;
		}
		else
		{
			cout<<"disposable"<<endl;
		}
	}
}
