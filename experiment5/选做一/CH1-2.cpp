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
	switch(k){
		case 1:cout<<"Very good!\n";break;
		case 2:cout<<"Excellent!\n";break;
		case 3:cout<<"Nice work!\n";break;
		default:cout<<"Keep up the good work!\n";
	}
}
void Wrong(){
	switch(k){
		case 1:cout<<"No. Please try again.\n";break;
		case 2:cout<<"Wrong. Try once more.\n";break;
		case 3:cout<<"Don't give up!\n";break;
		default:cout<<"No. Keep trying.\n";
	}
}
int main(){
	srand((unsigned)time(NULL)+829);
	do{
		num1=Rand(9);num2=Rand(9);flag=true;
		while(1&&flag){
			k=Rand(4);
			cout<<"How  much  is  "<<num1<<"  times  "<<num2<<"?"<<endl;
			cout<<"The answer is ";cin>>n;
			if(n==num1*num2)Good(),flag=false;
			else Wrong();
		}
	}while(1);
	return 0;
}
