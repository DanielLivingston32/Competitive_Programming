#include <bits/stdc++.h>

using namespace std;

// Complete the stepPerms function below.
int stepPerms(int n)
{
    long long arr[n + 1];
    arr[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i <= 2)
        {
            arr[i] = i;
        }
        else
        {
            arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
        }
    }
    return arr[n];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int s;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int s_itr = 0; s_itr < s; s_itr++)
    {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int res = stepPerms(n);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}
