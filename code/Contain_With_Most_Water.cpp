class Solution {
public:
    int maxArea(vector<int>& height) {
        int s_id=0;
        int l_id=height.size()-1;
        
        int maxsize=0;
        int h;
        int flag=0;
        
        while(s_id!=l_id){
            h=height[s_id]<height[l_id]?height[s_id]:height[l_id];
            flag=height[s_id]<height[l_id]?1:0;
            maxsize=h*(l_id-s_id)>maxsize?h*(l_id-s_id):maxsize;
            int temp;
            if(flag==1){
                temp=height[s_id];
                s_id++;
                while(s_id<l_id&&height[s_id]<=temp)s_id++;
                if(s_id==l_id)return maxsize;
                
            }
            else{
                temp=height[l_id];
                l_id--;
                while(s_id<l_id&&height[l_id]<=temp)l_id--;
                if(s_id==l_id)return maxsize;
            }
            
            
        }
        
        
    }
};
