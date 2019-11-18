#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int abs(int a){
	return a<0?-a:a;
}
int main(){
	int n,m;
	cout<<"Please input a odd integer: "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		//cout<<abs(((n+1)/2)-i)<<endl;
		//cout<<(((n+1)/2-abs(((n+1)/2)-i))-1)*2+1<<endl;
		for(int j=1;j<=abs(((n+1)/2)-i);++j){
			cout<<' ';
		}
		for(int j=1;j<=(((n+1)/2-abs(((n+1)/2)-i))-1)*2+1;++j){
			cout<<'*';
		}
		cout<<endl;
	}
	return 0;
}
