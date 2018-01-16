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
	if(prices.size()<2)return 0;
	int beg=0,end=0,ret=0;
	bool up=false,down=false;
	for(int i=1; i<prices.size(); ++i) {
		if(prices[i]>prices[i-1]&&up==false) {
			up=true;
			down=false;
			beg=i-1;
		}
		if(prices[i]<prices[i-1]&& down==false) {
			down=true;
			up=false;
			end=i-1;
			ret+=prices[end]-prices[beg];
		}
	}
	if(beg<prices.size()-1&&up==true)
		ret+=prices[prices.size()-1]-prices[beg];
	return ret;

}
int main() {

	return 0;
}
