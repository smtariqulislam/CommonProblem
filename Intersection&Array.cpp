#include<bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 100;

int main() {

int a;cin>>a;

int arr[a];

for (int i = 0; i <a; i++)
{
	cin>>arr[i];
}


int b;cin>>b;

int brr[b];

for (int i = 0; i <b; i++)
{
	cin>>brr[i];
}

int c=0;

int crr[min(a,b)];

for (int i = 0; i <a;i++){
	for (int j = 0; j <b; j++){ 
		if(arr[i]==brr[j]){
		  int f=-1;
		  for(int k=0;k<c;k++){
     	     if(brr[j]==crr[k]){
     		f=0;break;

     	}
		
	}	
	if (f==-1){
		crr[c]= brr[j];
		c++;

		}
		
	}
  }
} 
 

for (int i = 0; i <c; i++){
	cout<<crr[i]<<" ";
}


 
}
