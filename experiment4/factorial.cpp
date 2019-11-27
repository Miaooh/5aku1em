#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int main(){
	long long n,tmp=1;
	cin>>n;
	cout.setf(ios::left);
	cout.width(5);
	cout<<"x"<<"x!"<<endl;
	for(register long long i=1;i<=n;i++){
		tmp*=i;
		cout.width(5);
		cout<<i<<tmp<<endl;
	}
	return 0;
}
