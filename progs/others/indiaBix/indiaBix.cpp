#include<iostream> 
using namespace std;

class PowerFinder
{
    public:
    void Power(int x = 1, int y = 1)
    {
        int P = 1, i = 1;
        cout<<"p = "<<P<<endl;
        while(++i <= y)
        {  
            cout<<"i = "<<i<<" x = "<<x<<endl;
            P *= x;
            cout<<"P = "<<P<<endl;
        }
        cout<< P << endl; 
    } 
};
int main()
{
    PowerFinder FP; 
    FP.Power(2, 6); 
    return 0;
}
