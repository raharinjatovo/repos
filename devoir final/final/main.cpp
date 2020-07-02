#include <iostream>
#include "Nombres.h"
#include "Point.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <bits/stdc++.h>
using namespace std ;
int main(){

srand (time(NULL));

for(int i=0;i<15;i++)
{



     cout<<i<<")\t";
     Point pt1;

     pt1.afficher();
}
cout<<"\n"<<endl;
 srand (time(NULL));
  vector<int> vect;
  int arrayName [ 15 ][ 5 ];
    for(int i=0;i<15;i++)
{
    int a = rand() % 150 + 1;
    int b = rand() % 150 + 1;
    int c = rand() % 150 + 1;
    int d = rand() % 150 + 1;
    int e = rand() % 150 + 1;




     cout<<i<<")\t";
     Point pt1;


     pt1.hasard( a,b,c,d,e);
     arrayName[i][0]=a;
     arrayName[i][1]=b;
     arrayName[i][2]=c;
     arrayName[i][3]=d;
     arrayName[i][4]=e;
     pt1.afficher();


}
cout<<"Min, Max, et SUm"<<endl;
   for(int i=0;i<15;i++)
{    cout<<i<<")\t";

     Point pt1;
   cout<<"Min="<<  pt1.minimum( arrayName[i][0], arrayName[i][1], arrayName[i][2], arrayName[i][3], arrayName[i][4]);
    cout<<"\t";
    cout<<"Max="<< pt1.maximum( arrayName[i][0], arrayName[i][1], arrayName[i][2], arrayName[i][3], arrayName[i][4]);
      cout<<"\t";
      cout<<"Sum="<< pt1.sum( arrayName[i][0], arrayName[i][1], arrayName[i][2], arrayName[i][3], arrayName[i][4]);
        cout<<"\n";
}

Point pt1;
pt1.compare(pt1.sum( arrayName[0][0], arrayName[0][1], arrayName[0][2], arrayName[0][3], arrayName[0][4]),pt1.sum( arrayName[1][0], arrayName[1][1], arrayName[1][2], arrayName[1][3], arrayName[1][4]),0,1);
   int arrayName1 [ 15 ];
   int arrayName2 [ 15 ];
   bool comp(int a, int b)
{
    return (a < b);
}
 for(int i=0;i<15;i++)
{
    Point pt1;
    arrayName1[i]=i;
    arrayName2[i]=pt1.sum( arrayName[i][0], arrayName[i][1], arrayName[i][2], arrayName[i][3], arrayName[i][4]);
      int* i1;
    i1 = std::max_element(v + 2, v + 9, comp);

    cout << *i1 << "\n";
    return 0;

}









     return 0;
}
