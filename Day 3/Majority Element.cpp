class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
    sort(nums.begin(),nums.end());
      int count=0,temp=nums[0],thr=ceil(nums.size()/2.0);
     for(int num:nums) 
     {
         if(num==temp)
         {
             count++;
         }
         else
         {
         count=1;
             temp=num;
         }
         if(count>=thr)
             return num;
     }
        return -1;
    }
};


/*******  Other solution using Moore's Voting Algorithim*******/


class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
   int count=0,cnt=0;
        for(auto num:nums)
        {
            if(count==0)
                cnt=num;
            
            if(cnt==num)
              count++;
            else
                count--;
        }
    
            return cnt;
        
    }
};
