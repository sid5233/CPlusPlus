#include <iostream>
using namespace std;

class point3d{
    int m_x,m_y,m_z;

    public :
        int setvalues(int i,int j,int k){
            m_x = i;
            m_y = j;
            m_z = k;
            return 0;
        }
        void print(){
            cout << "The values are : " << endl;
            cout << "<" << m_x << m_y << m_z << ">";
        }
        bool isequal(point3d &p)
        {
            return (m_x == p.m_x && m_y == p.m_y && m_z == p.m_z);
        }
};
    int main()
    {
        point3d point1,point2;
        point1.setvalues(1,2,3);
        point2.setvalues(1,2,3);
        if (point1.isequal(point2))
            cout << "are equal" << endl;
        else 
            cout << "not equal";

        point3d point3;
              if (point1.isequal(point3))
            cout << "are equal" << endl;
        else 
            cout << "not equal";
        return 0;
}      

