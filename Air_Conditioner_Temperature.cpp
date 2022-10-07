#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int n=0; n<t; n++){
	    int a, b, c;
	    cin>>a>>b>>c;
	    if(a<=b&&c<=b){
	        cout<<"Yes\n";
	    }
	    else{
	        cout<<"No\n";
	    }
	}
	return 0;
}
