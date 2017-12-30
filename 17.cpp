#include<vector>
#include<string>
#include<iostream>
using namespace std;

vector<string>letters{"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void dfs(string& tmp,vector<string>&ret,const string& digits){
	int idx=tmp.size();
	if(idx==digits.size()){
		ret.push_back(tmp);
		return ;
	}else{
		int num=digits[idx]-'0';
		for(int i=0;i!=letters[num].size();++i){
			tmp.push_back(letters[num][i]);
			dfs(tmp,ret,digits);
			tmp.pop_back();
		}
	}
}

vector<string> letterCombinations(const string& digits){
	if(digits.empty())return vector<string>{};
	vector<string>ret;
	string tmp="";
	dfs(tmp,ret,digits);
	return ret;
}
int main(){
	auto ret=letterCombinations("23");
	for(auto i:ret)cout<<i<<",";
	cout<<endl;
//	string s="";cout<<s.size()<<endl;   0
	return 0;
}

