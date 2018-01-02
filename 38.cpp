#include<string>
#include<iostream>
#include<sstream>
using namespace std;

string countAndSay(int n){
	//base case
	if(n==1)return "1";
	if(n==2)return "11";
	
	string front=countAndSay(n-1);
	ostringstream str;
	int count=1,i;
	for(i=0;i!=front.size()-1;++i){
		
		if(front[i]==front[i+1])++count;
		else{
			str<<count<<front[i];
			count=1;
		}	
	}
	str<<count<<front[i];
	return str.str();
}

int main(){
	cout<<countAndSay(5)<<endl;
	return 0;
}
