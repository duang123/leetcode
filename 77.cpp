#include<vector>
#include<iostream>
using namespace std;

void helper(vector<vector<int>>&ret,vector<int>&tmp,int pos,int k,int n) {
	if(tmp.size()==k) {
		ret.push_back(tmp);
		return;
	}
	for(int i=pos; i<=n; ++i) {
		tmp.push_back(i);
		helper(ret,tmp,i+1,k,n);
		tmp.pop_back();
	}
}

vector<vector<int>> combine(int n, int k) {
	if(n<k)return vector<vector<int>> {};
	vector<vector<int>>ret;
	vector<int>tmp;
	helper(ret,tmp,1,k,n);
	return ret;
}

int main() {
	auto ret=combine(4,2);
	for(auto e:ret){
		for(auto i:e){
			cout<<i<<",";
		}
		cout<<endl;
	}
	return 0;
}
