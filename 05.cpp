#include<iostream>
#include<string>
using namespace std;

string longestPalindrome(string s){
	string ans="",tmp="";
	int max_len=-1,cnt=0;
	int len=s.size();
	for(int i=0;i!=s.size();++i){
		tmp+='#';
		tmp+=s[i];
	}
	tmp+='#';
	
	for(int i=1;i!=2*len;i++){
		cnt=0;
		while(i-cnt>=0 && i+cnt<=2*len && tmp[i-cnt]==tmp[i+cnt])++cnt;
		--cnt;
		if(max_len<cnt){
			max_len=cnt;
			ans=s.substr((i-cnt)/2,cnt);
		}
	}
	return ans;
}

int main(){
	string s="babad";
	cout<<longestPalindrome(s)<<endl;
	return 0;
} 
