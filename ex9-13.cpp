std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    int n=inputArray.size();
    int ss,max=inputArray[0].length();
    vector<string> Result;
    for(int i=1;i<n;i++){
        ss=inputArray[i].length();
        if(ss>max)
            max=ss;
    }
    for(int i=0;i<n;i++){
        ss=inputArray[i].length();
        if(ss==max)
            Result.push_back(inputArray[i]);
    }
    return Result;
}

int commonCharacterCount(std::string s1, std::string s2) {
    int n1=s1.length();
    int n2=s2.length();
    char a='a';
    int num1,num2,min,common=0;
    for(a='a';a<='z';a++){
        num1=0; num2=0;
        for(int i=0;i<n1;i++){
            if(s1[i]==a)
                num1++;
        }
        for(int j=0;j<n2;j++){
            if(s2[j]==a)
                num2++;
        }
        min=(num1<num2)?num1:num2;
        common+=min;
    }
    return common;
}

int commonCharacterCount(std::string s1, std::string s2) {
    int n1=s1.length();
    int n2=s2.length();
    char a='a';
    int num1,num2,min,common=0;
    for(a='a';a<='z';a++){
        num1=0; num2=0;
        for(int i=0;i<n1;i++){
            if(s1[i]==a)
                num1++;
        }
        for(int j=0;j<n2;j++){
            if(s2[j]==a)
                num2++;
        }
        min=(num1<num2)?num1:num2;
        common+=min;
    }
    return common;
}

std::vector<int> sortByHeight(std::vector<int> a) {
    vector<int> pos, result;
    int n=a.size(), index=0;
    for(int i=0;i<n;i++){
        if(a[i]>0)
            pos.push_back(a[i]);
    }
    sort(pos.begin(),pos.end());
    for(int i=0;i<n;i++){
        if(a[i]==-1)
            result.push_back(a[i]);
        else{
            result.push_back(pos[index]);
            index++;
        }
    }
    return result;
}

