#include<vector>
#include<iostream>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target){
	if(nums.empty())	return vector<int>{-1,-1};
	vector<int>ret(2,-1);
	int i=0,j=nums.size()-1,mid;
	int left=-1,right=-1;
	while(i<=j){
		mid=i+(j-i)/2;
		if(target==nums[mid]){
			left=mid;
			j=mid-1;
		}else if(target<nums[mid])j=mid-1;
		else i=mid+1;
	}
	j=nums.size()-1;
	while(i<=j){
		mid=i+(j-i)/2;
		if(target==nums[mid]){
			right=mid;
			i=mid+1;
		}else if(target<nums[mid])j=mid-1;
		else i=mid+1;
	}
	ret[0]=left;ret[1]=right;
	return ret;
}

int main(){
	vector<int>v{5, 7, 7, 8, 8, 10};
	auto ret=searchRange(v,8);
	cout<<ret[0]<<","<<ret[1]<<endl;
	return 0;
} 
