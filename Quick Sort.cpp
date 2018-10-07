#include<bits/stdc++.h>
using namespace std;

int pivot(int a[],int s,int e)
{
	int i=s-1;
	int j=s;
	int p=a[e];
	for(;j<e;j++)
	{
	 if(a[j]<=p)
	 {
	 	i++;
	 	swap(a[i],a[j]);	
	}	
	}
	swap(a[i+1],a[e]);
	return i+1;
}
void quick(int a[],int s,int e)
{
	if(s>=e)
	return;
	int p=pivot(a,s,e);
	quick(a,s,p-1);
	quick(a,p+1,e);
}
int main()
{
	int a[] = {10, 7, 8, 9, 1, 5};
	quick(a,0,5);
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<" ";
	}
}
