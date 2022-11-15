#include<iostream>
#include<stack>

using namespace std;

int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*'|| c == '/'){
        return 2;
    }
    else if(c=='+'||c=='-'){
        return 1;
    }
}
string infix_to_prifix(string s){
    reverse(s.begin(),s.end());
}
int main(){
    return 0;
}