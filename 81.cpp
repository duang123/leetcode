#include<iostream>
#include<vector>
using namespace std;

bool search(vector<int>& nums, int target){
	if(nums.empty()) 	return false;
	int i=0,j=nums.size()-1,mid;
	while(i<=j){
		mid=i+(j-i)/2;
		if(nums[mid]==target)return true;
		if(nums[mid]>nums[i]){
			if(target<nums[mid]&&target>=nums[i])j=mid-1;
			else i=mid+1;
		}else if(nums[mid]==nums[i])++i;
		else {
			if(target>nums[mid]&&target<=nums[j])i=mid+1;
			else j=mid-1;
		}
	}
	return false;
}

int main(){
	vector<int>v{1,1,1,1,1,5,1,1,1};
	cout<<search(v,5)<<endl;
	return 0;
}
