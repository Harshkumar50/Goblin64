#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int temp=n/k;
        int rem=n%k;
        if(n==0){
            cout<<0<<endl;
        }
        else if(rem==0){
            cout<<temp<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}
