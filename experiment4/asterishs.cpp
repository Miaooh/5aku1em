#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	for(int i=1;i<=10;++i){
		for(int j=1;j<=i;++j){
			cout<<'*';
		}
		for(int j=1;j<=10-i;++j){
			cout<<' ';
		}
		cout<<"  ";
		for(int j=10-i+1;j>0;--j){
			cout<<'*';
		}
		for(int j=i-1;j>0;--j){
			cout<<' ';
		}
		cout<<"  ";
		for(int j=1;j<i;++j){
			cout<<' ';
		}
		for(int j=1;j<=10-i+1;++j){
			cout<<'*';
		}
		cout<<"  "; 
		for(int j=1;j<=i;++j){
			cout<<'*';
		}
		for(int j=1;j<10-i+1;++j){
			cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}
