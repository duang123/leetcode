#include<unordered_map>
#include<iostream>
using namespace std;

int helper(int n) {
	int ret=0;
	while(n) {
		int t=n%10;
		n/=10;
		ret+=t*t;
	}
	return ret;
}

bool isHappy(int n) {
	if(n==1)return true;
	unordered_map<int,bool>m;
	m[n]=true;
	while(n!=1) {
		n=helper(n);
		if(m.find(n)!=m.end())return false;
		else m[n]=true;
	}
	return true;
}

int main() {
	int x=7,y=18;
	if(isHappy(x))cout<<x<<" is happy number"<<endl;
	else cout<<x<<" not happy number"<<endl;
	if(isHappy(y))cout<<x<<" is happy number"<<endl;
	else cout<<y<<" not happy number"<<endl;
	
	return 0;
}
