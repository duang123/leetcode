#include<iostream>
#include<limits>
using namespace std;

int reverse(int x) {
   //     int symbol=1;
    //    if(x<0)symbol=-1;
        double tmp=0;
        int div;
        while(x){
            div=x%10;
            x/=10;
            tmp=tmp*10+div;
        }
        //tmp=symbol*tmp;
        if(tmp>=numeric_limits<int>::min()&&tmp<=numeric_limits<int>::max())return tmp;
        else return 0;
    }

int main(){
	cout<<reverse(-123)<<endl;
	return 0;
}
