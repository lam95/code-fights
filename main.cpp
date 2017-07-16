#include <iostream>

using namespace std;

int add(int param1, int param2);

int centuryFromYear(int year);


int main()
{
	
	return 0;
}

int add(int param1, int param2) {
    return param1+param2;
}

int centuryFromYear(int year) {
    int cent=year/100;
    if(year%100==0)
        return cent;
    else
        return cent+1;
}


