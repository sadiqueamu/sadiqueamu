#include<iostream>
using namespace std;
 
class IndiaBix
{
    int x, y; 
    public:
    IndiaBix(int &xx, int &yy)
    {
        x = xx;
        y = yy;
        Display();
    }
    void Display()
    {
        cout<< x << " " << y;
    }
};
int main()
{
    int x1 = 10; 
    int &p = x1;
    int y1 = 20; 
    int &q = y1; 
    IndiaBix objBix(p, q); 
    return 0; 
}