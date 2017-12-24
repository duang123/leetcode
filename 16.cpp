#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int threeSumClosest(vector<int>& nums, int target){
	if(nums.size()<3)return 0;
	sort(nums.begin(),nums.end());
	int ret=nums[0]+nums[1]+nums[2];
	for(int i=0;i!=nums.size()-2;++i){
		int j=i+1,k=nums.size()-1;
		int tmp=nums[i]+nums[j]+nums[k];
		while(j<k){
			if(tmp==target)return tmp;
			if(abs(tmp-target)<abs(ret-target))ret=tmp;
			if(tmp>target)--k;
			else if(tmp<target)++j;
			tmp=nums[i]+nums[j]+nums[k];
		}
	}
	return ret;
}

int main(){
	vector<int>v{-1,2,1,-4};
	cout<<threeSumClosest(v,1)<<endl;
	return 0;
}
