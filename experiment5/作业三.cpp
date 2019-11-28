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
int Graph,n;
bool op,flag;
char c;
void Square(){
	cout.fill(c);
	for(register int i=1;i<=n;i++){
		cout<<setw(n)<<"";cout<<endl;
	}
	cout<<endl;
}
void Diamond(){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=abs(((n+1)/2)-i)+(((n+1)/2-abs(((n+1)/2)-i))-1)*2+2;++j)
			cout<<((j<=(abs(((n+1)/2)-i)))?' ':((j<=(abs(((n+1)/2)-i)+(((n+1)/2-abs(((n+1)/2)-i))-1)*2+1))?c:'\n'));
	cout<<endl;
}
void Triangle(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++)
			cout<<' ';
		for(int j=1;j<=i*2-1;j++)
			cout<<c;
		cout<<endl; 
	}
	cout<<endl;
}
int main(){
	do{
		op=flag=false;
		cout<<"choose the shape to graph\n1 for square\n2 for diamond\n3 for triangle\n? ";
		cin>>Graph;
		cout<<"Enter a character and size: ";
		cin>>c>>n;cout<<endl;
		switch(Graph){
			case 1:Square();break;
			case 2:Diamond();break;
			case 3:Triangle();break;
			defult:cout<<"Wrong!"<<endl;op=1;
		}
		while(1&&!flag){
			cout<<"Do you want to continue  (y or n)?: ";
			cin>>c;
			if(c=='n')break;
			else if(c!='y'){
				cout<<"Wrong input,try a again!"<<endl;
			}else flag=1;
		}
		cout<<endl;
	}while(1);
	return 0;
}
