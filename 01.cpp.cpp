#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ret={-1,-1};
        if(nums.empty())return ret;
        unordered_map<int,int>map;
        for(int i=0;i!=nums.size();++i){
          //  unordered_map<int,int>::iterator it;
          auto it=map.find(3);
            if(it!=map.end()){
                ret[0]=it->second;
                ret[1]=i;
            }else{
                map[nums[i]]=i;
            }
        }
        return ret;
    }
int main(){
//	vector<int>v1={1,2,3,4};
//	vector<int>& v2=v1;
//	unordered_map<int,int>map{{3,3}};
//	if((auto it=map.find(3))!=map.end())cout<<"h";
//	decltype(v2)v3={1,1};
//	cout<<v3.size()<<endl;
auto m=7;
	if(m<8)cout<<m;
}
