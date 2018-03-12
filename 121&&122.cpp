#include<vector>
#include<iostream>
using namespace std;
//#1
int maxProfitI(vector<int>& prices) {
	if(prices.size()<2)return 0;
	int local_min=prices[0],ret=0;
	for(int i=1; i<prices.size(); ++i) {
		auto tmp=prices[i]-local_min;
		ret=max(ret,tmp);
		local_min=min(local_min,prices[i]);
	}
	return ret;
}

//#2
int maxProfitII(vector<int>& prices) {
	int ret=0;
        for(int i=1;i<prices.size();++i){
            if(prices[i]>prices[i-1])ret+=(prices[i]-prices[i-1]);
        }
        return ret;

}
int main() {

	return 0;
}
