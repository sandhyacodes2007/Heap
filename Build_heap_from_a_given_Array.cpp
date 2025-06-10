#include<bits/stdc++.h>
using namespace std;
void heapify_down(vector<int>& nums, int ind){
    int n= nums.size();
    int smallest= ind;
    int lchild= 2*ind+1;
    int rchild= 2*ind+2;
    if(lchild<n && nums[smallest]>nums[lchild]){
        smallest= lchild;
    }
    if(rchild<n && nums[smallest] >nums[rchild]){
        smallest= rchild;
    }
    if(smallest!= ind){
        swap(nums[smallest], nums[ind]);
        heapify_down(nums, smallest);
    }
    return;
}
void build_min_heap(vector<int>& nums){
    int n= nums.size();
    for(int ind=n/2 -1; ind>=0; ind--){
        heapify_down(nums, ind);
    }
    return;
}
int main(){
    int n; 
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
   build_min_heap(nums);
    for(int it:nums)
        cout<<it<<endl;
    
    return 0;
}