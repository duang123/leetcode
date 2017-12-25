#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int maxArea(vector<int>& height){
	if(height.size()<2)return 0;
	int ret=0,tmp=0;
	int start=0,end=height.size()-1;
	while(start<end){
		if(height[start]>height[end]){
			tmp=height[end]*(end-start);
			--end;
		}else{
			tmp=height[start]*(end-start);
			++start;
		}
		ret=max(ret,tmp);
	}	
	return ret;
}

int main(){
	vector<int>v{7,3,2,4,6,3,1};
	cout<<maxArea(v)<<endl;
	return 0;
}
