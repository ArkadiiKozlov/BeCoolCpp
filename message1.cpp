#include <iostream>
#include <vector>
#include <string>

using namespace std;

void f1(const vector<int>& _v) {
    cout << "vector size: " << _v.size() << endl;
}


void f2(vector<int>&& _v) {
    cout << "vector size: " << _v.size() << endl;
    vector<int> new_v = move(_v);  
    cout << "new vector size: " << new_v.size() << endl;
    cout << "source vector size: " << _v.size() << endl;
}

int main() {
    // Passing by reference
    vector<int> v1(1000, 1); 
    f1(v1);  

    // Passing by rvalue reference
    vector<int> v2(500, 2); 
    f2(move(v2));  
    
    return 0;
}
