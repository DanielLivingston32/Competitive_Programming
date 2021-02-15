#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int n;
	cin>>n;
    vector<int> input;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		input.push_back(temp);
	}

    sort(input.begin(), input.end());

    do
    {
        for(int i=0;i<n;i++){
			cout<<input[i]<<" ";
		}
		cout<<endl;
    }while (next_permutation(input.begin(), input.end()));

    return 0;
}