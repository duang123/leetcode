#include<string> 
#include<limits>
#include<iostream>
using namespace std;

int myAtoi(string str){
	if(str.empty())return 0;
	int i=0;
	while(i!=str.size()&&isspace(str[i]))++i;
	int symbol=1;
	if(str[i]=='+')++i;
	else if(str[i]=='-'){
		++i;
		symbol=-1;
	}
	double tmp=0;
	for(;i!=str.size();++i){
		if(!isdigit(str[i]))break;
		else {
			tmp=tmp*10+str[i]-'0';
		}
	}
	tmp*=symbol;
	if(tmp>numeric_limits<int>::max())return numeric_limits<int>::max();
	else if(tmp<numeric_limits<int>::min())return numeric_limits<int>::min();
	else return tmp;
}
/*
int myAtoi(string str) {
        if(str.empty())return 0;
        //去头尾空格
      //  str.erase(0,str.find_first_not_of(' '));
      //  str.erase(str.find_last_not_of(' ')+1);
        int i=0;
        while(i!=str.size()&&str[i]==' ')++i;
        //判断正负号
        int symbol=1;
        if(str[i]=='-'){symbol=-1;++i;}
        else if(str[i]=='+'){++i;}
        double tmp=0;
        for(;i!=str.size();++i){
            if(str[i]<'0' || str[i]>'9')break;
            else{
                tmp=tmp*10+str[i]-'0';
            }
        }
        tmp*=symbol;
        if(tmp > numeric_limits<int>::max() )return numeric_limits<int>::max();
        else if(tmp < numeric_limits<int>::min())return numeric_limits<int>::min();
        else return tmp;
    }
*/

int main(){
	cout<<myAtoi("-123")<<endl;
	return 0;
}
