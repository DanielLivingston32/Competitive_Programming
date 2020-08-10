// Please have the courtesy to give a star to my repository

#include<iostream>
#include<string>

using namespace std;

string SKMP(string s, string p) {
    int arr_s[26]={ 0 };
    int arr_p[26]={ 0 };
    string res = "";

    for (int i=0;i<s.size();i++) {
        arr_s[s[i] - 'a']++;
    }

    for (int i=0;i<p.size();i++) {
        arr_p[p[i]-'a']++;
    }

    char first_p_char = p[0];
    for (int i=0;i<26;i++) {
        if (arr_s[i]) {
            if (first_p_char == 97+i) {
                bool flag = false;
                for (int j=0;j<p.size();j++) {
                    char p_char = p[j];
                    if (97+i == p_char) {
                        continue;
                    }
                    else if (97+i<p_char) {
                        flag = true;
                        break;
                    }
                    else {
                        break;
                    }
                }
                if (flag) {
                    for (int j=0;j<arr_s[i]-arr_p[i];j++) {
                        res+=char(97+i);
                    }
                    res+=p;
                }
                else {
                    res+=p;
                    for (int j=0;j<arr_s[i]-arr_p[i];j++) {
                        res+=char(97+i);
                    }
                }
            }
            else {
                for (int j=0;j<arr_s[i]-arr_p[i];j++) {
                    res+=char(97+i);
                }
            }
        }
    }
    return res;

}

int main() {
    int t;
    cin>>t;
    while (t--) {
        string s, p;
        cin>>s>>p;
        cout<<SKMP(s, p)<<endl;
    }

}