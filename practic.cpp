#include<iostream>
#include<vector>
using namespace std;
bool solution(vector<int> &A){
    if(A.size()/2 != 0){
        return false;
    }
    bool isPosible = true;
    for(int i = 0; i<A.size();i+2){
        if(A[i]!=A[i+1] ){
            isPosible = false;
            break;
        }

    }
    return isPosible;

}
int main(){
    vector<int> v1,v2,v3;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(2);
    v1.push_back(1);
    v2.push_back(7);
    v2.push_back(7);
    v2.push_back(7);
    v3.push_back(1);
    v3.push_back(2);
    v3.push_back(2);
    v3.push_back(3);
    cout<<solution(v1)<<endl;
    cout<<solution(v2)<<endl;
    cout<<solution(v3)<<endl;
    return 0;
}