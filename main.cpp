#include <iostream>

using namespace std;

int add(int param1, int param2);

int centuryFromYear(int year);

bool checkPalindrome(std::string inputString);

int adjacentElementsProduct(std::vector<int> inputArray);

int shapeArea(int n);

int makeArrayConsecutive2(std::vector<int> statues);

bool almostIncreasingSequence(std::vector<int> sequence);

int matrixElementsSum(std::vector<std::vector<int>> matrix);

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

int adjacentElementsProduct(std::vector<int> inputArray) {
    int max=inputArray[0]*inputArray[1];
    for(int i=1;i<inputArray.size()-1;i++) {
        int product=inputArray[i]*inputArray[i+1];
        if(product>max)
            max=product;
    }
    return max;
}

int shapeArea(int n) {
    int area=1;
    for(int i=0;i<n;i++)
        area += 4*i;
    return area;
}

int makeArrayConsecutive2(std::vector<int> statues) {
    int n=statues.size();
    int result=0, sub;
    sort(statues.begin(),statues.begin()+n);
    for(int i=0;i<n-1;i++){
        sub=statues[i+1]-statues[i];
        if(sub>1)
            result += sub-1;
    }
    return result;
}

bool almostIncreasingSequence(std::vector<int> sequence) {
    int n=sequence.size();
    int decre=0;
    for(int i=0;i<n-1;i++){
        if(sequence[i]>=sequence[i+1]){
            decre++;
            if(i>0 && i<n-2 && sequence[i-1]>=sequence[i+1]){
                decre++;
                if(sequence[i]<sequence[i+2])
                    decre--;
            }
                
        }
        if(decre>=2)
            return false;
    }
    return true;
}

int matrixElementsSum(std::vector<std::vector<int>> matrix) {
    int sum=0;
    for(int j=0;j<matrix[0].size();j++){
        for(int i=0;i<matrix.size() && matrix[i][j]!=0;i++){
            sum += matrix[i][j];
        }
    }
    return sum;
}

