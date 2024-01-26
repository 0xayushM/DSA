#include<iostream>
using namespace std;

int linear_search(vector<int>& A,int key) {
    for(int i=0;i<A.size();i++) {
        if(A[i] == key) 
            return i;
    }
    return -1;
}

int main() {
    vector<int> A;
    int size;
    cout << "Enter array size: ";
    cin >> size;
    cout << "Enter array elements : ";
    int input;
    for(int i=0;i<size;i++) {
        cin >> input;
        A.push_back(input);
    }
    int key;
    cout << "Enter element to be found : ";
    cin >> key;
    int ans = linear_search(A,key);
    if(ans == -1) 
        cout << "Element not found.";
    else 
        cout << "Element found at " << (ans+1) << ".";
}