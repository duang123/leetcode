#include<unordered_map>
#include<iostream>
#include<string>
using namespace std;

int romanToInt(string s){
	unordered_map<char,int>m{
			{'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
	};
	int ret=m[s.back()];
	for(int i=s.size()-2;i>=0;--i){
		if(m[s[i]]<m[s[i+1]])ret-=m[s[i]];
		else ret+=m[s[i]];
	}
	return ret;
}
int main(){
	cout<<romanToInt("DCXXI")<<endl;
	return 0;
}
