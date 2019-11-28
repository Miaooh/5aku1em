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
int n;
int main(){
	cout<<"Please input the sides: ";
	cin>>n;cout.fill('#');
	for(register int i=1;i<=n;i++){
		cout<<setw(n)<<"";cout<<endl;
	}
	return 0;
}
