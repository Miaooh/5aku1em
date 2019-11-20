#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int abs(int a){
	return a<0?-a:a;
}
int main(){
	int n;
	cout<<"Please input an odd integer: "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=abs(((n+1)/2)-i)+(((n+1)/2-abs(((n+1)/2)-i))-1)*2+2;++j)
			cout<<((j<=(abs(((n+1)/2)-i)))?' ':((j<=(abs(((n+1)/2)-i)+(((n+1)/2-abs(((n+1)/2)-i))-1)*2+1))?'*':'\n'));
	return 0;
}
