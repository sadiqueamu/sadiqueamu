#include<iostream>
using namespace std;
 
class IndiaBix
{
    static int x; 
    public:
    static void SetData(int xx)
    {
        x = xx; 
    }
    static void Display() 
    {
        cout<< x ;
    }
};
int IndiaBix::x = 0; 
int main()
{
    IndiaBix::SetData(44);
    IndiaBix::Display();
    return 0; 
}