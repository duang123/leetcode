#include<string>
#include<vector>
#include<iostream>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
	if(strs.empty())return "";
	string ret="";
	for(int i=0;i!=strs[0].size();++i){
		for(int j=1;j!=strs.size();++j){
			if(strs[0][i]!=strs[j][i])return ret;
		}
		ret.push_back(strs[0][i]);
	}
}

int main(){
	vector<string>vec{"i love","i l","i lo"};
	cout<<longestCommonPrefix(vec)<<endl;
	return 0;
}
