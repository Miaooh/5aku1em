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
#include<stack>
#define rez(i,x,y) for(int i=x;i>=y;i--)
#define res(i,x,y) for(int i=x;i<=y;i++)
#define INF 2100000000
#define ll long long
#define clr(x)  memset(x,0,sizeof(x))


using namespace std;
int n,cnt,ans;
bool flag;
char c;
int Rand(int tmp){
	return 1+rand()%tmp;
}
int main(){
	srand((unsigned)time(NULL)+829);
	cout<<"I  have  a  number  between  1  and  1000£®\nCan  you  guess  my  number?\nPlease  type  your  first  guess£®: ";
	ans=Rand(1000);
	do{
		flag=true;
		while(1&&flag){
			cout<<"Please input the num: ";
			cin>>n;
			if(n<ans)cout<<"Too low. Try again.\n";
			else if(n>ans)cout<<"Too high. Try again.\n";
			else flag=false;
			cnt++;
		}
		if(cnt<10)cout<<"Either you know the secret or you got lucky!\n";
		else if(cnt==10)cout<<"Ahak! You know the secrete\n";
		else cout<<"You should be able to do better!\n";
		flag=true;
		while(1&&flag){
			cout<<"\nExcellent! You guessed the number!\nWould you like to play again (y or n)? ";
			cin>>c;
			if(c=='n')break;
			else if(c!='y'){
				cout<<"Wrong input,try a again!"<<endl;
			}else flag=false;
		}
	}while(1);

	return 0;
}
