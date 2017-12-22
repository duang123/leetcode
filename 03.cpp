#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) {
	if(s.empty())return 0;
	vector<int>v(128,-1);
	int ret=0;
	for(int i=0,j=0;j!=s.size();++j){
		i=max(v[s[j]]+1,i);
		ret=max(ret,j-i+1);
		v[s[j]]=j;
	}
	return ret;
}
int main() {
	string s="abcabcbb";
//	cout<<"the ans is"<<endl;
	cout<<lengthOfLongestSubstring(s)<<endl;
}


