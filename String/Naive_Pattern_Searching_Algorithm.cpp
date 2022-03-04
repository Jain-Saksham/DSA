#include<bits/stdc++.h>
using namespace std;
void search(string &txt, string &pat)
{
    int n=txt.size();
    int m=pat.size();
    for(int i=0;i<=n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)
        {
            if(txt[i+j]!=pat[j])
            {
                break;
            } 
        }
        if(j==m)
        {
            cout<<"Pat string present at: "<<i<<"th position"<<endl;
        }
    }

}
int main()
{
    string txt,pat;
    cout<<"Enter parent string:"<<endl;
    cin>>txt;
    cout<<endl<<"Enter parent string:"<<endl;
    cin>>pat;
    search(txt,pat);
    return 0;
}