#include<iostream>
using namespace std;
 
class IndiabixSample
{
    public:
        int   a; 
        float b;
        void BixFunction(int a, float b, float c = 100.0f)
        {
            cout<< a % 20 + c * --b;
        } 
}; 
int main()
{   IndiabixSample objBix;
    objBix.BixFunction(20, 2.000000f, 5.0f);
    return 0; 
}