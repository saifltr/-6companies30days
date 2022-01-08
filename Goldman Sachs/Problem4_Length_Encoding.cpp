#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}

string encode(string src)
{    
 string s="";
 int f=1;
 for(int i=0;i<src.length();i++){
     s+=src[i];
     while(src[i]==src[i+1] && (i+1)<src.length()){
         f++;
         i++;
     }
   
     s+=to_string(f);
     f=1;
 }
 return s;
}     
     
 
