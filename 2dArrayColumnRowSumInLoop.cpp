
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



int row_sum[r],col_sum[c];

memset(row_sum,0,sizeof row_sum);
memset(col_sum,0,sizeof col_sum);

for (int i = 0; i <r; i++)
{
   for (int j = 0; j <c; j++)
   {
      row_sum[i] += a[i][j];
      col_sum[j] +=a[i][j];
   }
}

cout<<" col_sum:";

for (int i = 0; i < c; i++)
{
   cout<<col_sum[i]<<" ";
}

cout<<"\n";

cout<<"row_sum:";

for (int i = 0; i < r; i++)
{
    cout<<row_sum[i]<<" ";
}

return 0;

}



 
