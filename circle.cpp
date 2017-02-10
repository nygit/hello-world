#include<iostream.h>
int main()
{
float x,y,r=10;
int xrange=50,yrange=50;
for(x=-xrange;x<xrange;x++)
{
for(y=-yrange;y<yrange;y++)
{
if(x*x+y*y>r*r)
cout<<".";
else
cout<<"#";
}
}
}
