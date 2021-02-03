#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int T;

map<string, int> pts, goals;

bool comp(const string &a, const string &b)
{
    if (pts[a] > pts[b])
        return 1;
    if (pts[a] < pts[b])
        return 0;
    if (goals[a] > goals[b])
        return 1;
}

int main()
{
    // your code goes here

    cin >> T;
    while (T--)
    {

        pts.clear();
        goals.clear();
        set<string> teams;

        for (int i = 0; i < 12; i++)
        {
            string team1, team2, tok;
            int g1, g2;
            cin >> team1 >> g1 >> tok >> g2 >> team2;

            if (g1 > g2)
                pts[team1] += 3;
            else if (g1 < g2)
                pts[team2] += 3;
            else
                pts[team1]++, pts[team2]++;
            goals[team1] += g1 - g2;
            goals[team2] += g2 - g1;
            teams.insert(team1);
            teams.insert(team2);
        }

        vector<string> v(teams.begin(), teams.end());
        sort(v.begin(), v.end(), comp);
        cout << v[0] << ' ' << v[1] << endl;
    }
    return 0;
}
