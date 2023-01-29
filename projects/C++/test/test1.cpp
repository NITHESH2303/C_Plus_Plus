#include <iostream>
using namespace std;

int rec(float a,float b,int c){
    if(a/b<0){
        return c;
    }
    else{
        c+=1;
        return rec(a/b,b,c);
    }
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    float a,b;
	    cin>>a>>b;
	    int c =0;
	    cout<<rec(a,b,c)<<endl;
	    t--;
	}
	    
	return 0;
}
