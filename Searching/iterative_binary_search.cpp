#include<iostream>
using namespace std;

int iterative_binary_search(vector<int>& A, int key, int left, int right) {
    while(left <= right) {
        int mid = left + (right - left)/2;
        if(A[mid] == key)
            return mid;
        else if(A[mid] < key) 
            left = mid + 1;
        else if(A[mid] > key)
            right = mid - 1;
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
    int ans = iterative_binary_search(A,key,0,A.size()-1);
    if(ans == -1) 
        cout << "Element not found.";
    else 
        cout << "Element found at " << (ans+1) << ".";
}