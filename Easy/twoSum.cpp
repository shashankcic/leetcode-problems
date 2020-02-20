#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    short int start=0,end=nums.size()-1,check=0;
    int temp[end+1];
    for(short int i=start;i<=end;i++){
        temp[i]=nums[i];
    }
    sort(temp,temp+end+1);
    for(short int i=start;i<=end;i++)
    {
        for(short int j=start;j<=end;j++)
        {
            if(i!=j)
                if(temp[i]+temp[j]==target)
                {
                    start=i;
                    end=j;
                    check=1;
                    cout<<1<<check<<" "<<start<<" "<<end<<" "<<endl;
                    break;
                }
        }
        if(check==1)
            break;
    }
    if(check==1)
    {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums.at(i)==temp[start])
            {
                start=i;
                check=2;
                cout<<2<<check<<" "<<start<<" "<<end<<" "<<endl;
                break;
            }
            if(check==2)
                break;    
        }
        cout<<3<<check<<" "<<start<<" "<<end<<" "<<endl;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=start)
                if(nums.at(i)==temp[end])
                {
                    end=i;
                    check=3;
                    cout<<4<<check<<" "<<start<<" "<<end<<" "<<endl;
                    break;
                }
            if(check==3)
                break;    
        }
        cout<<5<<check<<" "<<start<<" "<<end<<" "<<endl;
        //if(check==3)
        {
            return {start,end};
        }
    }
    cout<<check<<" "<<start<<" "<<end<<" "<<endl;
    return nums;
}

int main(){
    vector<int> v= {0,4,3,0};
    int target = 0;
   vector<int> result=twoSum(v,target);
    

    for(auto i=result.begin();i!=result.end();i++)
        cout<<*i<<endl;

}