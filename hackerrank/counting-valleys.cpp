#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s) {
    bool down = false;
    int m = 0;
    int valleyCounter = 0;
    for(int i = 0; i < n; i++) {
        m = m + (s[i] == 'U' ? 1 : -1);        
        if(m < 0) {
            down = true;
        }
        if(m == 0 && down && s[i] != 'D') {
            valleyCounter++;
        }        
    }
    return valleyCounter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
