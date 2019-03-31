#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,arr[200005];
		cin>>n>>a>>b;
		for(int i=0;i<n;i++)
		 cin>>arr[i];
		if(a==b)
		{
			int count=0;
			for(int i=0;i<n;i++)
				if(arr[i]%a==0)
					count++;
			if(count%2==0)
				cout<<"BOB"<<endl;
			else
				cout<<"ALICE"<<endl;
		}
		else if(a%b==0)
		{
			int count=0,count2=0;
			for(int i=0;i<n;i++)
				{
					if(arr[i]%a==0)
					count++;
				if(arr[i]%b==0)
					count2++;

			    }
			if(count%2==0)


		
		}

	}
}