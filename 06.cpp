#include<string>
#include<iostream>
using namespace std;

void form(string& ans,int start,int init,const int magic,const string& s){
	while(start<s.size()){
		if(init==0)init=magic;
		ans.push_back(s[start]);
		start+=init;
		init=magic-init;
	}
	
}

string convert(string s, int n){
	if(n==1)return s;
	string ans="";
	int magic=2*n-2,init=magic;
	for(int i=0;i!=n;++i){
		form(ans,i,init,magic,s);
		init-=2;
	}
	return ans;
}

int main(){
	cout<<convert("PAYPALISHIRING", 3)<<endl;
	cout<<"PAHNAPLSIIGYIR"<<endl;
	return 0;
} 
