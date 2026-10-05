#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    string period = s.substr(8, 2);

    int hour = stoi(s.substr(0, 2));

    if (period == "AM") {
        if (hour == 12) {
            s[0] = '0';
            s[1] = '0';
        }
    }
    else {
        if (hour != 12) {
            hour += 12;
            s[0] = '0' + (hour / 10);
            s[1] = '0' + (hour % 10);
        }
    }

    s.erase(8, 2);

    return s;
}

int main() {
    string s;
    cin >> s;

    cout << timeConversion(s) << endl;

    return 0;
}
