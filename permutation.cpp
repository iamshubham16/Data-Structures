/*#include<iostream>
#include<set>
#include<string>*/
#include<bits/stdc++.h>
using namespace std;

set<string> s;

void printpermutation(char *a,int i){
	if(a[i]=='\0'){
		string temp = a;
		s.insert(temp);
		return;
	}
	for(int j=i;a[j]!='\0';j++){
		swap(a[i],a[j]);
		printpermutation(a,i+1);
		//Restore the previous array
		swap(a[i],a[j]);
	}
}



int main(){
	char a[100];
	cin>>a;
	printpermutation(a,0);
	//Iterate over set and print
	for(set<string> :: iterator ptr=s.begin() ; ptr!=s.end() ; ptr++){
		cout<<(*ptr)<<"\n";
	}
	/*for(string p : s){
		cout<<p<<"\n";
		}*/
}
