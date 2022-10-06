
// Hi I am S M Tarqiuql Islam.
// University:Eastern University.

#include<bits/stdc++.h>
#include <string>

#include<cstdlib>



#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int inf = 0x3f3f3f3f;
int main()
{
   
    char s[123];
    scanf("%s",s);
    int n = strlen(s);

    for(int i=0,j=n-1; i<j; i++,j--){
        char tmp = s[i];
        s[i]=s[j];
        s[j]=tmp;
    }
    for(int i=0;i<n;i++)printf("%c",s[i] );
        cout<<"\n";

}