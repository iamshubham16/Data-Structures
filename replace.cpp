#include<bits/stdc++.h>
using namespace std;

void replace(char *a,int i=0){
	if(a[i]=='\0'&&a[i+1]=='\0'){
		return;
	}
	if(a[i]=='P'&&a[i+1]=='i')
	 {
	 	int j=i+2;
	 	while(a[j]!='\0'){
	 		j++;
		 }
		 while(j>i+2){
		 	a[j+2]=a[j];
		 	j--;
		 }
		 a[i]='3';
		 a[i+1]='.';
		 a[i+2]='1';
		 a[i+3]='4';
		 replace(a,j+1);
	 }
	replace(a,i+1);
	 
		
	  	   
}

int main(){
	char a[]="PisshubhamPiloloPiPi";
	replace(a);
	cout<<a;
}
