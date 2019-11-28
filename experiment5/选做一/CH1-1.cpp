#include<iostream>
#include<iomanip>
#include<string>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<ctime>
#define rez(i,x,y) for(int i=x;i>=y;i--)
#define res(i,x,y) for(int i=x;i<=y;i++)
#define INF 2100000000
#define ll long long
#define clr(x)  memset(x,0,sizeof(x))


using namespace std;
int num1,num2,k,n;
bool flag;
int Rand(int tmp){
	return 1+rand()%tmp;
}
void Good(){
	cout<<"Very good!\n";
}
void Wrong(){
	cout<<"No. Please try again.\n";
}
int main(){
	srand((unsigned)time(NULL)+829);
	num1=Rand(9);num2=Rand(9);flag=true;
	while(1&&flag){
		k=Rand(4);
		cout<<"How  much  is  "<<num1<<"  times  "<<num2<<"?"<<endl;
		cout<<"The answer is ";cin>>n;
		if(n==num1*num2)Good(),flag=false;
		else Wrong();
	}
	return 0;
}
