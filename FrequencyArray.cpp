
/*Hi I am S M Tariqul Islam.
// University:Eastern University.
*/
#include<bits/stdc++.h>
#include <string>

#include<cstdlib>
using namespace std;
const int N = 1e5+10;


long long a[N], cnt[N];


int main(){


ios::sync_with_stdio(0);
cin.tie(0);

int n,q;
cin>>n>>q;

for(int i=0;i<n;i++){

    cin>>a[i];
   
}

for (int i = 0; i <n; i++)
{
    cnt[a[i]]++;
}




while(q--){
    int t;
    cin>>t;
    cout<<"Frequency of "<<t <<"is"<<cnt[t]<<endl;

}


}





