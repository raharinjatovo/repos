#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <iostream>
class Point
{
    private:
        int m_s;
        int m_t;
        int m_x;
        int m_y;
        int m_z;
    public:
        Point();
        Point(int x);
        Point(int x, int y);
        Point(int s, int t, int x, int y,int z);

        ~Point();

        void afficher();
        int hasard(int s,int t,int x,int y, int z);
        int minimum(int s,int t,int x,int y, int z);
        int maximum(int s,int t,int x,int y, int z);
        int sum(int s,int t,int x,int y, int z);
        int compare(int s,int t,int x, int z);
};


#endif // POINT_H_INCLUDED
