#include<iostream>
using namespace std;
int main()
{float a,b,c;
 cout<<"������һ��������˿������õ���";
 cin>>b>>a;
 if(a<=20)
  c=b*0.6;
 else if (a>20&&a<=30)
	 c=20*0.6+(30-a)*1.0;
 else
	 c=20*0.6+10+(a-30)*2;
 cout<<c<<endl;
 return 0;
 }
