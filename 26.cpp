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
/*
int removeDuplicates(vector<int>& nums) {
        if(nums.empty())return 0;
        auto n=nums.size();
        int i=0,index=0;
        auto tmp=0;
        for(;i<n;++i){
            if(!i){
                tmp=nums[i];
                continue;
            }
            if(tmp==nums[i]){
                continue;
            }else{
                tmp=nums[i];
                nums[++index]=tmp;
            }
        }
        nums.erase(nums.begin()+index+1,nums.end());
        return index+1;
    }
*/

int main(){
	vector<int>v{1,1,1,12,12,122};
	cout<<removeDuplicates(v)<<endl;
	return 0;
} 
