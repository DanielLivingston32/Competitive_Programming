#include<iostream>
#include<vector>
#include<limits>
#include<map>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<long int> prices;
        prices.reserve(n);
        long int temp;
        for (int i=0;i<n;i++) {
            cin>>temp;
            prices.push_back(temp);
        }
        map<long int, long int> hashmap;
        vector<int> results;
        int money;
        cin>>money;
        for (int i=0;i<n;i++) {
            temp = money - prices[i];
            if (hashmap.find(prices[i])!=hashmap.end()) {
                results.push_back(prices[i]);
            }
            else {
                hashmap[temp]=prices[i];
            }
        }
        long int lowest_key = results[0];
        long int lowest_key_difference = abs(hashmap[results[0]]-results[0]);
        for (int i=1;i<results.size();i++) {
            temp = abs(hashmap[results[i]]-results[i]);
            if (temp<lowest_key_difference) {
                lowest_key_difference = temp;
                lowest_key = results[i];
            }
        }


        cout<<"Deepak should buy roses whose prices are "<<min(hashmap[lowest_key], lowest_key)<<" and "<<max(hashmap[lowest_key], lowest_key)<<"."<<endl;
    }
}

// Second Implementation
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<climits>


// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while (t--) {
//         int n;
//         cin>>n;
//         vector<int>prices;
//         prices.reserve(n);
//         int temp;
//         for (int i=0;i<n;i++) {
//             cin>>temp;
//             prices.push_back(temp);
//         }
//         sort(prices.begin(), prices.end());
//         int money;
//         cin>>money;
//         int x, y;
//         int i=0, j=n-1;
//         while (i<j) {
//             temp = prices[i]+prices[j];
//             if (temp==money) {
//                 x=i;
//                 y=j;
//                 i++;
//                 j--;
//             }
//             else if (temp>money) {
//                 j--;
//             }
//             else {
//                 i++;
//             }
//         }
//         cout<<"Deepak should buy roses whose prices are "<<prices[x]<<" and "<<prices[y]<<"."<<endl;

//     }
// }