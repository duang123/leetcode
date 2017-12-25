#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 vector<vector<int>> fourSum(vector<int>& nums, int target){
 	if(nums.size()<4)return vector<vector<int>>{};
 	sort(nums.begin(),nums.end());
 	vector<vector<int>>ret;
 	vector<int>ele(4);
 	int tmp=0;
 	for(int i=0;i!=nums.size()-3;++i){
 		if(i!=0 && nums[i-1]==nums[i])continue;
 		for(int j=i+1;j!=nums.size()-2;++j){
 			if(j!=i+1&&nums[j-1]==nums[j])continue;
 			int k=j+1,l=nums.size()-1;
 			
 			while(k<l){
 				tmp=nums[i]+nums[j]+nums[k]+nums[l];
 				if(tmp==target){
 					ele[0]=nums[i];ele[1]=nums[j];ele[2]=nums[k];ele[3]=nums[l];
 					ret.push_back(ele);
 					++k;--l;
 					//²éÖØ
					 while(k<l && nums[k-1]==nums[k])++k;
					 while(k<l && nums[l+1]==nums[l])--l; 
				 }else if(tmp<target)++k;
				 else --l;
			 }
		 }
	 }
	 return ret;
 }

int main(){
	vector<int>v{1,0,-1,0,-2,2};
	auto ret=fourSum(v, 0);
	cout<<ret.size()<<endl;
	for(auto vec:ret){
			for(auto i:vec)
				cout<<i<<" ";
			cout<<endl;
		
	}
	
	return 0;
}
