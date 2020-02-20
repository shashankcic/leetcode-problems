class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        short int start=0,end=nums.size()-1,check=0;
        int temp[end+1];
        for(short int i=start;i<=end;i++){
            temp[i]=nums[i];
        }
        sort(temp,temp+end+1);
        for(short int i=start;i<=end;i++)
        {
            for(short int j=i+1;j<=end;j++)
            {
                if(i!=j)
                    if(temp[i]+temp[j]==target)
                    {
                        start=i;
                        end=j;
                        check=1;
                        break;
                    }
            }
            if(check==1)
                break;
        }
        if(check==1)
        {
            for(short int i=0;i<nums.size();i++)
            {
                if(nums.at(i)==temp[start])
                {
                    start=i;
                    check=2;
                    break;
                }
                if(check==2)
                    break;
            }
            for(short int i=0;i<nums.size();i++)
            {
                if(nums.at(i)==temp[end]&&start!=i)
                {
                    end=i;
                    check=3;
                    break;
                }
                if(check==3)
                    break;
            }
            return {start,end};
        }
        return nums;
    }
};