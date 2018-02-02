class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0|| (x!=0 &&x==0)) return false;
        if (x<10)return true;
        long long temp=1;
        while (x/temp>0)temp*=10;
        temp/=10;
        int tmp=1;
        bool flag=true;
        while(tmp<=temp){
            if (tmp==1){
                if ((x/temp)%10==x%10){
                    tmp*=10;
                    temp/=10;
                    flag=true;
                    continue;
                }
                else {
                    flag=false;break;
                }
                
            }
            if ((x/tmp)%10==(x/temp)%10){
                tmp*=10;
                temp/=10;
                flag=true;
            }
            else {flag=false;break;
            }
            
        }
        return flag;
    }
};
