#include<iostream>
using namespace std;
int trace(int n,int m)
{
int arr[100][100],sr[100][100],dr[100][100],sum=0;
for(int i=0;i<n;i++)
{
int count=1;
	for(int j=0;j<m;j++)
	{
		arr[i][j]=count;
		count++;
	}
}
for(int i=0;i<n;i++)
{
int count=1;
	for(int j=0;j<m;j++)
	{
		sr[j][i]=count;
		count++;
	}
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
	dr[i][j]=arr[i][j]+sr[i][j];	
	}
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
	if(i==j)
	sum =sum+dr[i][j];
	}
}
return sum;
}

int main()
{
int n,m;
cout<<"enter the row of matrix";
cin>>n;
cout<<"enter the column of matrix";
cin>>m;
cout<<trace(n,m);
return 0;
}
