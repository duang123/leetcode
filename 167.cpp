#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
	if(nums.size()<2)return vector<int>{-1,-1};
	int i=0,j=nums.size()-1;
	int tmp=0;
	vector<int>ret(2,-1);
	while(i<j){
		tmp=nums[i]+nums[j];
		if(tmp==target){
			ret[0]=i+1;
			ret[1]=j+1;
			return ret;
		}else if(tmp>target)--j;
		else ++i;
	}
	return ret;
}
int main(){
	vector<int>v{0,1,2,5,7};
	auto ret=twoSum(v,10);
	for(auto i:ret)
	  cout<<i<<",";
	cout<<endl;
	return 0;
}
