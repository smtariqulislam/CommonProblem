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
	int lcm = a[0];
	for (int i = 0; i <n; i++)
	{
		int gcd=1;

		for (int j =1; j <=lcm; j++)
		{
			if (a[i]%j==0 && lcm%j==0)
			{
				gcd =j;
			}
		}
		lcm = (lcm*a[i])/gcd;
	}
	cout<<lcm<<endl;

 
}
