#include<bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 100;

int main() {


int n,m;
cin>>n>>m;
int a[n][m];

for (int i = 0; i < n; i++){
	for (int j = 0; j <m; j++){
		cin>>a[i][j];

	}
	
}

int mx=-1,mn=INT_MAX;

for(int i=0;i<n;i++){
	for (int j = 0; j <m; j++)
	{
		if(mx<a[i][j])mx=a[i][j];
		if(mn>a[i][j])mn=a[i][j];
		
	}
	
}

cout<<mx<<" "<<mn<<endl;

}
