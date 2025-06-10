#include<bits/stdc++.h>
using namespace std;
 void heapifyUp(vector<int>& nums, int ind ){
int parent=(ind-1)/2;

    if( ind>0 && nums[ind]<nums[parent]){
        swap(nums[ind], nums[parent] );
        heapifyUp(nums, parent);
    }

return;
    }
    void heapifyDown(vector<int>& nums, int ind){
        int smallest = ind;
        int lchild= 2*ind+1;
        int rchild= 2*ind+2;
        if(lchild< nums.size() && nums[lchild]<nums[smallest]){
            smallest= lchild;
        }
        if(rchild<nums.size() &&nums[rchild] <nums[smallest]){
            smallest= rchild;
        }
        if(smallest!= ind){
            swap(nums[ind], nums[smallest]);
            heapifyDown(nums, smallest);
        }
        return;
    }
    

    void heapify(vector<int> &nums, int ind, int val) {
int n= nums.size();
if(nums[ind]>val){
    nums[ind]= val;
    heapifyUp( nums, ind);
    
}else
{
    nums[ind]= val;

    heapifyDown( nums, ind);
}

return ;
    }
    int main(){
        int n;
        cin>>n;
        int ind;
        cin>>ind;
        int val;
        cin>>val;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        heapify(nums, ind, val);
        for(int x: nums){
            cout<<x<<endl;
        }
        return 0;
    }