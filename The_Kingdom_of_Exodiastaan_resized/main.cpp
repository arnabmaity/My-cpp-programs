/*Created by Arnab Maity.Many Thanks to sahilshelangia.Got help from his code*/

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    int n,m,k,value=0;
    cin>>n>>m>>k;
    map<string,int>mymap;
    int arr[11][m+2] = {0};//In this array each row defines the enemy row.Like for Lannister row1,for Bolton row2,etc.
    for(int i=0;i<11;i++)
        for(int j=0;j<m+2;j++)
            arr[i][j]=0;//initialising the array
    while(k--)
    {
        int rowe,l,r;
        string str;
        cin>>rowe>>l>>r>>str;
        if(mymap.find(str)==mymap.end())//if the enemy is new we allocate a row for the new enemy
        {
            mymap[str] = ++value;
        }
        int row = mymap[str];
        //cout<<row<<endl;
        arr[row][l]++;//these and subsequent statements mean in that particular row from l to r there is enemy.and r+1 is negative means upto r there is that enemy
        arr[row][r+1]--;
    }
    //cout<<val<<endl;
    int i,j;
    int val = value;
    for(i=1;i<=val;i++)
    {
        for(j=1;j<=m;j++)
        {
            arr[i][j]=arr[i][j-1]+arr[i][j];
            //arr[i][j]+=arr[i][j-1];//this means which how many enemies are there in a particular column.eg. column 2 has 2 lannisters.
        }
    }
    int column_count[m+2]={0};
    for(i=1;i<=m;i++)
    {
        int sum=0,c=0;
        for(j=1;j<=val;j++)
        {
            if(arr[j][i]!=0)
            {
                c++;//counting distinct enemies
                sum+=arr[j][i];
            }
        }
        if(sum<n)
        {
            column_count[i] = c+1;//total distinct enemies + 1(for jonsnow)
        }
        else
        {
            column_count[i] = c;//if sum of a column is more or equal to the number of a row then it means that no Jonsnow is present in that particular column.
        }
    }
    int b=0;
    for(i=1;i<=m;i++)
    {
        b = max(b,column_count[i]);//maximum of all columns
    }
    int a=0;
    for(i=1;i<=m;i++)
    {
        if(column_count[i]==b)
        {
            a++;//how many maximum columns present
        }
    }
    //cout<<a<<" "<<b<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}
