#include<bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 100;

int main(){


	int n;cin>>n;

	int a[n],ans[n],j=0;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int num;cin>>num;

	for (int i = 0; i <n; i++)
	{
		if(a[i]!=num){
			ans[j]=a[i];
			j++;
		}
		
	}

   for (int i = 0; i <j; i++)
   {
   	cout<<ans[i]<<" ";
   }



}