// Decode XORed Array

// There is a hidden integer array arr that consists of n non-negative integers.

// It was encoded into another integer array encoded of length n - 1, such that encoded[i] = arr[i] XOR arr[i + 1]. For example, if arr = [1,0,2,1], then encoded = [1,2,3].

// You are given the encoded array. You are also given an integer first, that is the first element of arr, i.e. arr[0].

// Return the original array arr. It can be proved that the answer exists and is unique.

 

// Example 1:

// Input: encoded = [1,2,3], first = 1
// Output: [1,0,2,1]
// Explanation: If arr = [1,0,2,1], then first = 1 and encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3]
// Example 2:

// Input: encoded = [6,2,7,3], first = 4
// Output: [4,2,0,7,4]
 

// Constraints:

// 2 <= n <= 104
// encoded.length == n - 1
// 0 <= encoded[i] <= 105
// 0 <= first <= 105


#include<bits/stdc++.h>
using namespace std;

// vector<int> decode(vector<int>& encoded, int first) {  //nothing wrong in this solution
    
//         vector<int> arr;
//         arr.push_back(first);    // here you don't write arr[0] = first because size is not declare for arr
//         for (int i = 1; i < encoded.size()+1; i++) {
//             arr.push_back(arr[i-1]^encoded[i-1]);
//         }
        
//         return arr;
// }

vector<int> decode(vector<int>& encoded, int first) {
    int n = encoded.size();
    vector<int> arr(n+1);
    arr[0] = first;
    for (int i = 1; i < n+1; i++) {
        arr[i] = arr[i-1]^encoded[i-1];
    }
    return arr;
}


int main() {
    vector<int> encoding;
    for (int i = 1; i < 4; i++) {
        encoding.push_back(i);
    }
    int first = 1;
    vector <int> decording = decode(encoding, first);

    for (auto i = decording.begin(); i != decording.end(); i++){
        cout << *i << " ";
    }
}