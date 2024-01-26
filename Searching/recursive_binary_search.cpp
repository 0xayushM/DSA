#include<iostream>
using namespace std;

int recursive_binary_search(vector<int>& A, int left, int right, int key) {
    if(left <= right) {
        int mid = left + (left-right)/2;
        if(A[mid] == key)
            return mid;
        else if(A[mid] < key) 
            recursive_binary_search(A,0,mid+1,key);
        else if(A[mid] > key)
            recursive_binary_search(A,mid-1,A.size()-1,key);
        else return -1;
    }
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
    int ans = recursive_binary_search(A,0,A.size()-1,key);
    if(ans == -1) 
        cout << "Element not found.";
    else 
        cout << "Element found at " << (ans+1) << ".";
}