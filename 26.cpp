#include<vector>
#include<iostream>
using namespace std;

int removeDuplicates(vector<int>& nums){
	if(nums.empty())return 0;
	auto sz=nums.size();
	int i,j;
	for(i=0,j=0;i!=sz-1;++i){
		if(nums[i]!=nums[i+1])nums[++j]=nums[i+1];
	}
	return j+1;
}
int main(){
	vector<int>v{1,1,1,12,12,122};
	cout<<removeDuplicates(v)<<endl;
	return 0;
} 
