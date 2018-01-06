#include<vector>
#include<map> 
#include<unordered_map>
using namespace std;

 vector<int> topKFrequent(vector<int>& nums, int t) {
        unordered_map<int,int>m;
        vector<int>ret;
        for(auto i:nums)++m[i];
        map<int,vector<int>>mp;
        for(auto e:m){
            mp[e.second].push_back(e.first);
        }
        for(int i=nums.size(),j=0;i>=0;--i){
            if(!mp[i].empty()){
                for(int k=0;k!=mp[i].size();++k){
                    ++j;
                    ret.push_back(mp[i][k]);
                    if(j==t)return ret;
                }
            }
        }
        return ret;
    }
    
int main(){
	
	return 0;
}
