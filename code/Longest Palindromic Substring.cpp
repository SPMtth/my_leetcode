#include <iostream>
#include <vector>
#include <unordered_map>
#include<algorithm>
#include <unordered_map>

string longestPalindrome(string s) {
    map<char,int> data;
    int result=0;
    int c_result=0;
    int c_start=0,c_end=0;
    int start=0;
    int end=0;
    //map<int, string>::iterator iter;
    // for(int i=s.size()-1;i>=0;i--){
    //     if(data.find(s[i])==data.end()){
    //         data[s[i]]=i;
    //     }
    // }
    for(int i=0;i<s.size()-1;i++){
        c_start=i;
        c_end=i+1;
        c_result=0;
        
        while(c_start>=0&&c_end<=s.size()-1&&s[c_start]==s[c_end]){
            c_result=c_end-c_start+1;
            c_start--;
            c_end++;
            
        }
        if (c_result>0&&c_result>result){
            result=c_result;
            start=c_start+1;
            end=c_end-1;
            
        }
        
    }
    for(int i=1;i<s.size()-1;i++){
        c_start=i-1;
        c_end=i+1;
        c_result=0;
        
        while(c_start>=0&&c_end<=s.size()-1&&s[c_start]==s[c_end]){
            c_result=c_end-c_start+1;
            c_start--;
            c_end++;
            
        }
        if (c_result>0&&c_result>result){
            result=c_result;
            start=c_start+1;
            end=c_end-1;
            
        }
        
    }
    if(result==0)return s.substr(0,1);
    return s.substr(start,result);
    
    
}
