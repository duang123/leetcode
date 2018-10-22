#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

vector<vector<int>> threeSum(vector<int>&v,int target){
	if(v.size()<3)return vector<vector<int>>{};
	vector<vector<int>>ret;
	vector<int>ele(3);
	sort(v.begin(),v.end());
	for(int i=0;i!=v.size()-2;++i){
		if(i>0 && v[i]==v[i-1])continue;
		int j=i+1,k=v.size()-1;
		while(j<k){
			if(j>i+1 && v[j]==v[j-1]){++j;continue;}
			int tmp=v[i]+v[j]+v[k];
			if(tmp>target)--k;
			else if(tmp<target)++j;
			else {
				ele[0]=v[i];ele[1]=v[j];ele[2]=v[k];
				ret.push_back(ele);
				++j;
			}
		}
	}
	return ret;
}

/*
vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ret;
        if(nums.empty())return ret;
        auto n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>vec(3);
        for(int i=0;i<n;++i){
            if(i && nums[i]==nums[i-1])continue;
            int target=-nums[i];
            int l=i+1,h=n-1;
            while(l<h){
                if(nums[l]+nums[h]>target)--h;
                else if(nums[l]+nums[h]<target)++l;
                else if(nums[l]+nums[h]==target){
                    vec[0]=nums[i];
                    vec[1]=nums[l];
                    vec[2]=nums[h];
                    ret.push_back(vec);
                    ++l;--h;
                    while(l<h && nums[l]==vec[1])++l;
                    while(l<h && nums[h]==vec[2])--h;
                }
            }
        }
        return ret;
    }

*/

int main(){
	vector<int>v{-1, 0, 1, 2, -1, -4};
	auto ret=threeSum(v,0);
	for(auto i:ret){
		for(auto j:i)
			cout<<j<<" ";
		cout<<endl;
	}

	return 0;
} 
