#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target){
	if(nums.empty())	return -1;
	int i=0,j=nums.size()-1,mid;
	while(i+1<j){
		mid=i+(j-i)/2;	
		if(nums[mid]==target)return mid;
		if(nums[i]<nums[mid]){
			if(nums[i]<=target&&target<nums[mid])j=mid-1;
			else i=mid+1;
		}else{
			if(nums[mid]<target&&target<=nums[j])i=mid+1;
			else j=mid-1;
		}
	}
	if(nums[i]==target)return i;
	else if(nums[j]==target)return j;
	else return -1;
}

int main(){
	vector<int>v{1,3,5};
	cout<<search(v, 1)<<endl;
	return 0;
}
