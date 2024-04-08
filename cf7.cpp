#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	int n,m,s,count=0;
	cin>>n;
	while(n--){
	    cin>>m>>s;
	   
	    if(s-m>5)
	    count++;
	}
	cout<<count<<endl;
	    
	}
	
	return 0;
}
