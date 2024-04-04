#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int i;
	    cin>>i;
	    string d;
	    cin>>d;
	    int daku=0;
	    for(i=0;i<n;i++){
	        if((d[i]==0)||(d[i]==5)){
	            daku=1;
	            break;
	            if(daku){
	                cout<<"yes"<<endl;
	            }else{
	                cout<<"no"<<endl;
	            }
	        }
	    }
	}

}
