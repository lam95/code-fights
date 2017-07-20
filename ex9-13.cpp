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

