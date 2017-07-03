#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

char* function( char* c)
{
char* temp = new char [ strlen (c) + 1 ];
strcpy ( temp, c );
//delete[] c;  //evil, should not delete callers string
return temp;
}


int main()
{
char testStr[10] = "CODECALL";
char* retVal = function(testStr);


delete retVal; //it is the responsibility of the caller to clear the heap
return 0;
}
