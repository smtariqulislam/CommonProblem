#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 100;

int main()
{

	int a;
	cin >> a;
	int arr[a];
	for (int i = 0; i < a; i++){
		cin >> arr[i];
	}

	int b;
	cin >> b;
	int brr[b];
	for (int i = 0; i < b; i++){
		cin >> brr[i];
	}

	int c = 0;
	int crr[a + b];
	for (int i = 0; i < a; i++){
		int f = -1;
		for (int j = 0; j < c; j++){
			if (crr[j] == arr[i]){
				f = 0;
				break;
			}
		}
		if (f == -1){
			crr[c] = arr[i];
			c++;
		}
	}


	for (int i = 0; i < b; i++){
		int f = -1;
		for (int j = 0; j < c; j++){
			if (crr[j] == brr[i]){
				f = 0;
				break;
			}
		}
		if (f == -1){
			crr[c] = brr[i];
			c++;
		}
	}

	for (int i = 0; i < c; ++i){
		cout << crr[i] << " ";
	}
}
