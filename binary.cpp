#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(){
	cout<<"Decimal\t\t\tOctal\tHexadecimal\n";
	for(int i=1;i<=256;++i){
		cout<<dec<<i<<"\t\t";
		cout<<'\t'<<oct<<i;
		cout<<'\t'<<hex<<i<<endl;		
	}
	return 0;
}
