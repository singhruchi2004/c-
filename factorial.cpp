#include <iostream>
using namespace std;
int main(){
	int n=2;
	long factorial=1.0;
	
	if(n<0)
	cout<<"error! factorial of a negaative number doesn't exist:";
	else{
		for(int i=1;i<=n;++i){
			factorial*=i;
		}
		cout<<"factorial of"<<n<<"="<<factorial;
	}
	return 0;
}
