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
