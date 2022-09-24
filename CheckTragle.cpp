
//check whether a triangle can be formed by th given value for the sides.
//soln: addition of every two side is greater then the other side


#include<bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 100;

int main(){



	int a,b,c;
	cin>>a>>b>>c;

	if(a+b>c){
		if(b+c>a){
			if(a+c>b){
				cout<<"Yes"<<'\n';
			}else{
				cout<<"NO"<<'\n';
			}

		}else{
			cout<<"NO"<<'\n';
		}

	}else{
		cout<<"NO"<<'\n';
	}







}