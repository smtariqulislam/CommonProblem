#include<bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 100;

int main() {


	int n;

	cin>>n;

	int a[N];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int gcd = a[0];
	for (int i = 0; i <n; i++)
	{
		int temp=1;

		for (int j =1; j <=min(gcd,a[i]); j++)
		{
			if (a[i]%j==0 && gcd%j==0)
			{
				temp=j;
			}
		}
		gcd =temp;
	}
	cout<<gcd<<endl;

 
}
