#include<vector>
#include<iostream>
using namespace std;

int removeElement(vector<int>& nums, int val) {
	if(nums.empty())	return 0;
	auto sz=nums.size();
	int i=0,j=0;
	for(;i!=sz;++i)
		if(nums[i]!=val)nums[j++] =nums[i];
	return j;
}

int main(){
	vector<int>v{3,2,2,3};
	cout<<removeElement(v,4)<<endl;
	cout<<removeElement(v,2)<<endl;
	return 0;
}
