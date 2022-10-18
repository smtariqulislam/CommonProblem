
// Hi I am S M Tarqiuql Islam.
// University:Eastern University.



/* Question: https://www.codechef.com/submit/HAPPYSTR

*/

#include<bits/stdc++.h>
#include <string>
using namespace std;
#include<cstdlib>



int main(){



int r,c;

cin>>r>>c;

int a[r][c];

for (int i = 0; i <r;i++){
   for (int j = 0; j < c; j++){

      cin>>a[i][j];
      cout<<a[i][j]<<" ";

   }cout<<"\n";


}cout<<"\n";


//column sum

for (int i = 0; i <r;i++){
    int sum=0;
   for (int j = 0; j < c; j++){

     sum+=a[i][j];

   }cout<<sum<<"\n";


}cout<<"\n";

return 0;

}



 
