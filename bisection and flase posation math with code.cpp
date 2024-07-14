#include<bits/stdc++.h>
using namespace std;
void bisection()
{
    float x1,x2,x0,y1,y2,y0;
    cout<<"enter X1 & X2 : ";
    cin>>x1>>x2;
    cout<<"how many eddaration you want ";
    int j,s=1;
    cin>>j;
    while(j--)
    {
        y1=x1*x1*x1 -x1 -1;
        y2=x2*x2*x2 -x2 -1;

        x0=(x1+x2)/2;
        y0=x0*x0*x0 -x0 -1;
        cout<<"serial number : " <<s<<" ,   X0= "<<x0<<"  &  Y0= "<<y0<<endl;
        if((y1*y2)<0) x2=x0;
        else x1=x0;
s++;
    }
}
void falseposation()
{
    float x1,x2,x0,y1,y2,y0;
    cout<<"enter X1 & X2 : ";
    cin>>x1>>x2;
    cout<<"how many eddaration you want ";
    int j,s=1;
    cin>>j;
    while(j--)
    {
        y1=x1*x1*x1 -x1 -1;
        y2=x2*x2*x2 -x2 -1;

        x0=x1 - ((y1 *(x2-x1)) / (y2-y1));
        y0=x0*x0*x0 -x0 -1;
        cout<<"serial number : " <<s<<",  X0= "<<x0<<"  &  Y0= "<<y0<<endl;
        if((y1*y2)<0) x2=x0;
        else x1=x0;
        s++;
    }
}

int main()
{
    int i;

    cout<<"what do you want: \n  Bisection=1 \n falseposation=2 \n";
    cin>>i;

    if(i==1) bisection();
    if(i==2) falseposation();


    cout<<"Thanks mam for review my code"<<endl;

    return 0;
}
