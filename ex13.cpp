#include <iostream>
#include <string>

using namespace std;

string reverse(string s, int open, int close){
    int i, j;
    for(i=open,j=close; i<j ; i++,j--){
        swap(s[i], s[j]);
    }
    return s;
}

std::string reverseParentheses(std::string s) {
    int n=s.length();
    int open,close;
    string result, one,two,three;
    open = s.find('(');
    cout << "open =" << open << endl;
    if(open != -1){
    	cout << "sub " << s << endl;
    	s.substr(open+1) = reverseParentheses(s.substr(open+1));
        close=s.find(')');
        cout << "sub " << s << open << " " << close << endl;
        s=reverse(s,open,close);
        s.erase(open, 1);
        s.erase(close-1, 1);
    }
    cout << s << endl;
    return s;
}

int main(){
	string s="abc(a(asd)sc)ns";
	cout << s << endl;
	s=reverseParentheses(s);
	cout << s << endl;
	return 0;
}
