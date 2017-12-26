#include<unordered_map>
#include<vector>
#include<iostream>
using namespace std;

int subarraySum(vector<int>& nums, int k){
	int count=0;
	unordered_map<int,int>m;
	m[0]=1;
	int tmp=0;
	for(int i=0;i!=nums.size();++i){
		tmp+=nums[i];
		count+=m[tmp-k];
		++m[tmp];
	}
	return count;
}

int main(){
	vector<int>v{1,1,1};
	cout<<subarraySum(v,2)<<endl;
	return 0;
}
