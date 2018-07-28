#include <string.h>
using namespace std;
int c=0;
int getCodes(string input, string output[10000]) {
	if(input.empty()){
      output[0]=" ";
      return 1;
    }
  int size1=0,size2=0;
  string s2;
  string s1=input.substr(1);
  size1=getCodes(s1,output);
  if(input.size()>=2){
    s2=input.substr(2);
    size2=getCodes(s2,output);
  }
  for(int i=0;i<size1;++i){
    char temp='a'+input[0]-'1';
    output[i]=temp+s1[i];
    cout<<output[i]<<"\n";
  }
  char temp;
  int f=0;
  if(input[0]<='2'){
    if(input[0]=='2'){
      if(input[1]<='6'){
        temp='a'+(input[0]-'1')*10+(input[1]-'1');
      	f=1;
      }
    }
    else{
      temp='a'+(input[0]-'1')*10+(input[1]-'1');
      f=1;	
    }
  }
  if(f==1){
 for(int i=0;i<size2;++i){
   	output[i+size1]=temp+s2[i];
   cout<<output[i+size1]<<"\n";
 }
  }
  return size1+f*size2;
}

