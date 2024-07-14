#include<bits/stdc++.h>
using namespace std;
int main()
{
    /// jahangir hussen ,CSE2201025011 , 25A1, CSE///
    float y,y1,x0=0,x1,i=1,j=5;
    while(j--)
    {
        y=(x0*x0)- (3*x0)+2;
        y1=(2*x0)-3;
        x1=x0-(y/y1);
        cout<<i<<"time , X1 is = " <<x1<<endl<<endl;
        i++;
        x0=x1;
    }
    return 0;
}
