#include<iostream>
using namespace std;

int pow(int a,int b){
	if(b==0)
		return 1;
		int p =pow(a,b/2);	
	if(b&2==0){
	 return p*p;
	 }
	else{
	 return a*p*p; 
	} 	
}

int main(){
	cout<<pow(2,7);
}
