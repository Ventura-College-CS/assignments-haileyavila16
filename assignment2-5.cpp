#include <bits/stdc++.h>
using namespace std;

const int N=10;
bool sortbyname(const pair<int, string> &a, const pair);
{
    return (a.second<b.second);
}
int main()
{
    vector<int>IDs(N);
    vector<string>names(N);

    for(int i=0;i<N;i++)
        cin>>IDs[i]>>names[i];
        vector<pair<int,string>>vect;

    for(int i=0;i<N;i++)
        vect.push_back(make_pair(IDs[i],names[i]));
    cout<<"The vector is:\n";
    for(int i=0;i<N;i++)
        cout<<vect[i].first,," "<<vect[i].second<<endl;

    sort(vect.begin(), vect.end(), sortbynames);
    cout<<"The vector afters sorting is:\n";
    for(int i=0;i<N;i++)
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
}