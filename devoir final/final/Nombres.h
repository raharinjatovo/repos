#ifndef NOMBRES_H_INCLUDED
#define NOMBRES_H_INCLUDED
#include <iostream>
class Nombres
{
    private:
        int m_s;
        int m_t;
        int m_x;
        int m_y;
        int m_z;
    public:
        Nombres();
        Nombres(int x);
        Nombres(int x, int y);
        Nombres(int s, int t, int x, int y,int z);
        ~Nombres();
        void afficher();
};



#endif // NOMBRES_H_INCLUDED
