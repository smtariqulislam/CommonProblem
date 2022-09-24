
//Convert days to years, weeks and days

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 100;

int main(){



	int days;cin>>days;
	int year= days/365;
	days -=(year*365);
	int week =(days/7);
	days-=(week*7);
	cout<<year<<" "<<week<<" "<<days<<'\n';



}