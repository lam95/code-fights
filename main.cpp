#include <iostream>

using namespace std;

int add(int param1, int param2);

int centuryFromYear(int year);

bool checkPalindrome(std::string inputString);

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

bool checkPalindrome(std::string inputString) {
    int n=inputString.length();
    for(int i=0;i<n/2;i++){
        if(inputString[i]!=inputString[n-1-i])
            return false;
    }
    return true;
}

