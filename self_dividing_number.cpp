class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        int j = 0;
        // int n = right - left + 1;//no use 
        //will use push_back() instead
        vector<int> v;

        for(int i=left ; i<=right ; i++)
        {
            if(i>=1 && i<=9)//every single digit is a self dividing number
            {
                // v[j] = i;
                // j++;
                v.push_back(i);
            }
            else if(i>9)//means its not a single digit number
            {
                int temp = i;
                while(temp!=0)
                {
                    int ld = temp%10;
                    // if(ld==0) break;
                    if(ld==0 || i%ld!=0 )//|| ld==0)
                    {
                        break;
                    }
                    temp/=10;
                }
                if(temp == 0)
                {
                    v.push_back(i);
                } 
            }
        }
        return v;
        
    }
};
