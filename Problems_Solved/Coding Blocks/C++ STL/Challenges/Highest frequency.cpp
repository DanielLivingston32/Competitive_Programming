// Time Complexity: O(N) & Space Complexity: O(1)
// Use scanf to increase input speed thereby stopping TLE for very large inputs.

#include<iostream>
#include<unordered_map>
#include<cstdio>

using namespace std;

int main() {
    int n;
    scanf("%d", n);
    unordered_map<int, int> hashmap;
    int max_value = 0, max_element = 0, temp;
    for (int i=0;i<n;i++) {
        scanf("%d", temp);
        hashmap[temp]+=1;
        if (hashmap[temp]>max_value) {
            max_value = hashmap[temp];
            max_element = temp;
        }
    }
    cout<<max_element;
}