#include<iostream>
using namespace std;

int FBNQ(int n){
	if(n<=1)
		return n;
	else
		return FBNQ(n-1)+FBNQ(n-2);
}
int main(int argc, char** argv){
	int const i=atoi(argv[1]);
	cout<<FBNQ(i)<<endl;
	return 0;
}
