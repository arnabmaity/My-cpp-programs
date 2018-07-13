/* Author : Arnab Maity. */
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define PB push_back
#define vi vector<int>
#define vlli vector<lli>
#define slli set<lli>
#define mlli map<lli,lli>
#define S second
#define F first
#define MOD 1000000007
void build_segment_tree(lli *tree,lli *a,lli start,lli last,lli tree_index)
{
    if(start==last)
    {
        tree[tree_index] = a[start];
        return;
    }
    lli mid = (start+last)/2;
    build_segment_tree(tree,a,start,mid,2*tree_index+1);
    build_segment_tree(tree,a,mid+1,last,2*tree_index+2);
    tree[tree_index] = tree[2*tree_index+1] + tree[2*tree_index+2];
}
lli query(lli *tree,lli *a,lli start,lli last,lli tree_index,lli pos1,lli pos2)
{
    lli ans1,ans2;
    if(pos1>last||pos2<start)
        return 0;
    if(start>=pos1&&last<=pos2)
    {
        /*if(f%2==1)
        return(high-low+1-arr[pos]);
        else return(arr[pos]);*/
        cout<< tree[tree_index];
        return 0;
    }
    lli mid = (start+last)/2;
    ans1 = query(tree,a,start,mid,2*tree_index+1,pos1,pos2);
    ans2 = query(tree,a,mid+1,last,2*tree_index+2,pos1,pos2);
    return (ans1+ans2);
}
int main()
{
    lli n;
    cin>>n;
    lli i,a[n];
    //memset(a,0,sizeof(a));
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    lli *tree = new lli[2*n];
    //lli *lazy = new lli[2*n];
    memset(tree,0,sizeof(tree));
   // memset(lazy,0,sizeof(lazy));
    build_segment_tree(tree,a,0,n-1,0);
    for(i=0;i<2*n-1;i++)
    {
        cout<<tree[i]<<endl;
    }
    lli q;
    cin>>q;
    while(q--)
    {
        lli a,b;
        cin>>a>>b;
        lli number_of_heads;
        number_of_heads =  query(tree,a,0,n-1,0,a,b);
        cout<<number_of_heads<<endl;
    }

    return 0;
}
