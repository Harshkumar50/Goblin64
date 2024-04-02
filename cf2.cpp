#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x;
    cin>>x;
    while(x--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((c*d)>=(a*b)){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
}
