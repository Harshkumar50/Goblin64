#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	while(x--){
	    int n;
	    cin>>n;
	    if(n<=15){
	        if(n<=10){
	            cout<<"lower double"<<endl;
	        }else{
	            cout<<"lower single"<<endl;
	        }
	    }else if(n<=30){
	        if(n>=16 && n<=25){
	            cout<<"upper double"<<endl;
	        }else{
	            cout<<"upper single"<<endl;
	        
	    }
	}

}
}
