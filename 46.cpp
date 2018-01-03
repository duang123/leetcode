#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int> > &ret, vector<int> nums, int n){
        if(n==0){
        	ret.push_back(nums);
        	return;
		}
		for(int i=0;i<=n;++i){
			swap(nums[i],nums[n]);
			helper(ret,nums,n-1);
			swap(nums[i],nums[n]);
		}
    
    }

	vector<vector<int> > permute(vector<int> nums) {
        if(nums.empty())return vector<vector<int> >{};
        vector<vector<int> >ret;
        auto sz=nums.size();
        helper(ret,nums,sz-1);
        return ret;
    }
    
int main(){
	vector<int>v{1,2,3};
	auto ret=permute(v);
	for(auto ele:ret){
		for(auto i:ele)cout<<i<<",";
		cout<<endl;
	}
	return 0;
}
