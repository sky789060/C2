#include<bits/stdc++.h>
using namespace std;
double x,y,z;
string s;
string ss;
void jfc(){
	int a;
	int b;
	int c;
	cin>>a>>b>>c;
	double delta;
	delta=b*b-4*a*c;
	if(delta>0){
		double ans1,ans2;
		ans1=(-b+delta)/(2*a);
		ans2=(-b-delta)/(2*a);
		cout<<"x1="<<ans1<<endl<<"x2="<<ans2<<endl<<endl;
		return;
		}
	if(delta==0){
		double ans;
		ans=(-b)/(2*a);
		cout<<"x1=x2="<<ans<<endl<<endl;
		return;
		}
	cout<<"方程无解"<<endl<<endl;
	return; 
	}

void sswap(){
	int a,b;
	int c;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"a="<<a<<endl<<"b="<<b<<endl<<endl;
	return;
	}
	
void qmj(const double *a,const double *b,const double *c){
	double p=*a+*b+*c;
	p=p/2;
	double ans;
	ans=sqrt(p*(p-*a)*(p-*b)*(p-*c));
	cout<<"该三角形的面积为"<<ans<<endl<<endl;
	return;
	}
	
void rl(){
	int date[4]={0,0,0,0};
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int cnt=1;
	int n=365;
	cin>>ss;
	for(int i=0;i<ss.size();i++){
		if(ss[i]>='0'&&ss[i]<='9'){
			for(i;i<ss.size();i++){
				if(ss[i]<'0'||ss[i]>'9') break;
				date[cnt]=date[cnt]*10+ss[i]-48;
				}
			cnt++;
			}
		}
	if((date[1]%100!=0&&date[1]%4==0)||(date[1]%400==0)){n=366;month[2]=29;}
	for(int i=12;i>=date[2];i--) n-=month[i];
	n+=date[3];
	cout<<"这一天是"<<date[1]<<"年的第"<<n<<"天，第"<<n/7+1<<"个周"<<endl;
	return; 
	}
int main(){
	while(cin>>s){
		if(s=="jfc"){
			jfc();
			continue;
		}
		if(s=="jh"){
			sswap();
			continue;
			}
		if(s=="qmj"){
			cin>>x>>y>>z;
			qmj(&x,&y,&z);
			continue;
			}
		if(s=="rl"){
			rl();
			continue;
			}
		break;
	}
	return 0;
	}
