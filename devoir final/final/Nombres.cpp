
#include "Point.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std ;
void Point::afficher(){
    cout<<"Coordonnees: \t"<<m_s<<"\t"<<m_t<<"\t"<<m_x<<"\t"<<m_y<<"\t"<<m_z<<endl;
}

int Point::hasard(int s,int t, int x, int y, int z)
{

    m_s=s;
    m_t=t;
    m_x=x;
    m_y=y;
    m_z=z;

}
Point::Point(){             //Le symbole :: est un opérateur de résolution de portée
    m_s=0;
    m_t=0;
    m_x=0;
    m_y=0;
    m_z=0;
}
Point::Point(int x){

    m_x=x;
    m_y=x;
    //
}
Point::Point(int x, int y){
    m_x=x;
    m_y=y;
}
int Point::minimum(int s,int t,int x,int y, int z){
    vector<int> vect;
   vect.push_back(s);
   vect.push_back(t);
   vect.push_back(x);
   vect.push_back(y);
   vect.push_back(z);


    return *min_element(vect.begin(), vect.end());


}
int Point::maximum(int s,int t,int x,int y, int z){
    vector<int> vect;
   vect.push_back(s);
   vect.push_back(t);
   vect.push_back(x);
   vect.push_back(y);
   vect.push_back(z);


     return *max_element(vect.begin(), vect.end());


}
int Point::sum(int s,int t,int x,int y, int z){
   int a =s+t+x+y+z;


     return a;


}
int Point::compare(int s,int t,int x, int z){
    cout<<"comparaison du point  "<<x<<"et le point"<<z<<endl;
   if(s<t)
   {
       cout<<x<<"est plus petit que"<<z<<endl;
   }
   else
   {
    cout<<z<<"est plus petit que"<<x<<endl;
   }


}
Point:: Point(int s, int t, int x, int y,int z){
    m_s=s;
    m_t=t;
    m_x=x;
    m_y=y;
    m_z=z;
}
Point::~Point(){}
