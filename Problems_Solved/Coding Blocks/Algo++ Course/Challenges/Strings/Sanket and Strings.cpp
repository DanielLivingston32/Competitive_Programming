#include <iostream>
#include <string>

using namespace std;

int main()
{
    int k;
    cin >> k;
    cin.get();
    string input;
    getline(cin, input);
    int a_cnt[input.size()] = {0};
    int b_cnt[input.size()] = {0};
    a_cnt[0] += (input[0] == 'a') ? 1 : 0;
    b_cnt[0] += (input[0] == 'b') ? 1 : 0;
    /*
    for (int i = 1; i < input.size(); i++)
    {
        if (input[i] == "a")
        {
            if
        }
        else
        {
            cnt2++;
        }
    }
    int added = input.size() - max(cnt1, cnt2)*/
    ;
    // cout << (max(cnt1, cnt2) + max(added, k));
}