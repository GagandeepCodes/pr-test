#include <bits/stdc++.h>
using namespace std;
 
typedef long long intt;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define countOnes(x) __builtin_popcount(x)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep2(i,a,b) for(int i=a; i<=b; i+=2)
#define rep(i,a,b,n) for(int i=a; i<=b; i+=n)
#define PB push_back
#define pb pop_back
#define f first
#define s second
 
 
 
/*void subset(vector<int>&samplespace, vector<vector<int>>&ans, vector<int>&temp, int i){
    //base case
    if(i==samplespace.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(samplespace[i]);
    subset(samplespace, ans, temp, i+1);
    temp.pop_back();
    subset(samplespace, ans, temp, i+1);
    return;
}*/


/*void mergeit(int arr[], int low, int mid, int high){
    vector<int>temp;
    int left = low, right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]) temp.push_back(arr[left++]);
        else temp.push_back(arr[right++]);
    }
    while(left <= mid) temp.push_back(arr[left++]);
    while(right <= high) temp.push_back(arr[right++]);
    for(int i=low; i<=high; i++) arr[i] = temp[i-low];
}
void msort(int arr[], int low, int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    msort(arr, low, mid);
    msort(arr, mid+1, high);
    mergeit(arr, low, mid, high);
}*/
 
 
void solve(){
    int n,k; cin>>n>>k;
    vi arr(n,0);
    intt pro=1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        pro *= arr[i];
    }

    if(2023%pro==0){
        int ans = 2023/pro;
        cout<<"YES"<<endl;
        cout<<ans<<" ";
        for(int i=0; i<k-1; i++) cout<<1<<" ";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
}
 
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}
// Trying to update the same functionality.