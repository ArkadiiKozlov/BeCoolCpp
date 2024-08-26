#include <iostream>
#include <vector>
#include <string>

using namespace std;

void processLargeObject(const vector<int>& _v) {
    cout << "Processing vector of size: " << _v.size() << endl;
}


void transferResources(vector<int>&& _v) {
    cout << "Transferring resources from vector of size: " << _v.size() << endl;
    vector<int> new_v = move(_v);  
    cout << "New vector size after move: " << new_v.size() << endl;
    cout << "Source vector size after move: " << _v.size() << endl;
}

int main() {
    // Passing by reference
    vector<int> v1(1000, 1); 
    processLargeObject(v1);  

    // Passing by rvalue reference
    vector<int> v2(500, 2); 
    transferResources(move(v2));  
    
    return 0;
}
