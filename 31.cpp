#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

 void nextPermutation(vector<int>& nums) {
        if(nums.size()<2)return ;
        int i;
        for(i=nums.size()-2;i>=0;--i){
            if(nums[i]<nums[i+1])break;
        }
        if(i>=0){
            int k=i;
            for(i=nums.size()-1;i>k;--i){
                if(nums[i]>nums[k])break;
            }
            swap(nums[k],nums[i]);
            reverse(nums.begin()+k+1,nums.end());
            
        }else reverse(nums.begin(),nums.end());
    }
    
int main(){
	vector<int>v{1,2,4,6,5,3,2,1};
	nextPermutation(v);
	for(auto i: v)cout<<i<<",";
	cout<<endl;
	return 0;
}
