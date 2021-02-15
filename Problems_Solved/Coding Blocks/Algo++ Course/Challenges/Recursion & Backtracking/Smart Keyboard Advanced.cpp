#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
};

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

vector<string> permutedResults;

void generatePermutations(char input[],char output[],int i,int j){
    // Base case
    if(input[i]=='\0'){
        output[j]  = '\0';
        string temp(output);
        permutedResults.push_back(temp);
        return;
    }
    // Recursive case
    int digit = input[i] - '0';
    for(auto k:table[digit]){
        output[j] = k;
        generatePermutations(input,output,i+1,j+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    char input[11];
    cin.getline(input,11);

    char output[11];
    
    generatePermutations(input,output,0,0);

    bitset<11> check;
    
    for(auto i:permutedResults){
        for(int j=0;j<11;j++){
            if(searchIn[j].find(i)!=string::npos){
                if(!check[j]){
                    cout<<searchIn[j]<<endl;
                    check[j] = 1;
                }
            }
        }
    }

    return 0;
}