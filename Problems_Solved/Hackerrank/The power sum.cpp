#include <bits/stdc++.h>

using namespace std;

int result = 0;

// Complete the powerSum function below.
void powerSum(int X, int N, int curr_sum, int i)
{
    // Base case
    if (curr_sum == X)
    {
        result++;
        return;
    }
    if (i > X)
    {
        return;
    }
    // Recursive case
    for (int j = i; j <= X; j++)
    {
        int curr_i = (long long)pow(j, N);
        if (curr_sum + curr_i > X)
        {
            return;
        }
        powerSum(X, N, curr_sum + curr_i, j + 1);
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int X;
    cin >> X;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    powerSum(X, N, 0, 1);

    fout << result << "\n";

    fout.close();

    return 0;
}
