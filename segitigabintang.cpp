#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    cin>>n;
    for( i = 1; i < n; i++){
        for( j=n; j > i; j--){
            cout<<" ";
        }for(int k=1 ; k<2*i ; k++){
        	cout<<"*";
        }cout<<endl;
//		for(int l=2 ; l < i ; l++ ){
//        	cout<<"*";
//		}
    }	
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}


