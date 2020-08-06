// This problem was taken from Spoj
#include<iostream>
#include<deque>

using namespace std;

int main() {
    long int n;
    int k;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cin>>k;

    // Processing first k elements
    deque<int> q(k);
    int i;
    for (i=0;i<k;i++) {
        while (!q.empty() && arr[i]>=arr[q.back()]) {
            q.pop_back();
        }
        q.push_back(i);
    }

    for (;i<n;i++) {
        cout<<arr[q.front()]<<" ";
        // 1. Delete the old values from the deque which are not there in the current window
        while (!q.empty() && (q.front()<=i-k)) {
            q.pop_back();
        }

        // 2. Remove the elements which are not useful and are in the current window
        while (!q.empty() && arr[i]>=arr[q.back()]) {
            q.pop_back();
        }
        // 3. Add new elements to the deque;
        q.push_back(i);
    }
    cout<<arr[q.front()];
}