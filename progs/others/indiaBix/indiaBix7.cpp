#include<iostream>
using namespace std; 
class Point
{
    int x, y; 
    public:
    Point(int xx = 10, int yy = 20)
    {
        x = xx;
        y = yy; 
    }
    Point operator + (Point objPoint)
    {
        Point objTmp;
        objTmp.x = objPoint.x + this->x; 
        objTmp.y = objPoint.y + this->y;
        return objTmp;
    }
    void Display(void)
    {
        cout<< x << " " << y;
    }
};
int main()
{
    Point objP1;
    Point objP2(1, 2);
    Point objP3 = objP1 + objP2;
    objP3.Display(); 
    return 0; 
}