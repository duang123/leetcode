#include<vector>
#include<iostream>
using namespace std;

 void moveZeroes(vector<int>& nums) {
        if(nums.empty())return;
        int i=0,j=0;
        auto sz=nums.size();
        for(;i!=sz;++i){
            if(nums[i]!=0)nums[j++]=nums[i];
        }
        while(j<sz)nums[j++]=0;
    }
    
int main(){
	vector<int>v{0, 1, 0, 3, 12};
	moveZeroes(v);
	return 0;
}
