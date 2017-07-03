#include<iostream>
#include<string.h>
#include<malloc.h>
using namespace std;
class BixString
{
    char txtName[20]; 
    public:
    BixString(char *txtTemp = NULL)
    {
        cout<<txtTemp<<endl;
        if(txtTemp != NULL)
        strcpy(txtName, txtTemp);
        cout<<txtName<<endl;
    }
    void Display(void)
    {
        cout<<txtName<<"\n";
    }
};
int main()
{
    char *txtName = (char*)malloc(10);
    strcpy(txtName, "IndiaBIX");
    *txtName = 48;
    cout<<txtName<<endl;
    BixString objTemp(txtName);
    objTemp.Display();
    cout<< sizeof(txtName)<<endl;
    cout<<sizeof(*txtName)<<endl;
    return 0; 
}
