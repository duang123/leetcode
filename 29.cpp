#include<iostream>
#include<limits>
using namespace std;

int divide(int dividend, int divisor) {

        if(!divisor || (dividend==INT_MIN && divisor==-1))   return INT_MAX;
        long a=dividend>0? dividend:-(long)(dividend);
		long b=divisor>0? divisor:-(long)(divisor);
        int i=0;
        while(a>=b){
        	long tmp=b,multi=1;
        	while(a>=(tmp<<1)){
        		tmp<<=1;
        		multi<<=1;
			}
			a-=tmp;
            i+=multi;
        }
        if(dividend<0 && divisor>0)return -1*i;
        else if(dividend>0 && divisor<0)return -1*i;
        else return i;

    }
    
int main(){
	cout<<divide(1,1)<<endl;
} 
