#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		int flag=0,i;
	    if(s[0]=='n' && s[1]=='o' && s[2]=='t' &&(s[3]==' ' || s[3]=='\0'))
				flag=1;
		for(i=0;i<125 && !flag;i++)
			if(s[i]==' ' && s[i+1]=='n' && s[i+2]=='o' && s[i+3]=='t' && (s[i+4]==' ' || s[i+4]=='\0'))
			{
				flag=1;
				break;
			}
			if(flag==0)
				cout<<"regularly fancy"<<endl;
			else
				cout<<"Real Fancy"<<endl;
	}
}