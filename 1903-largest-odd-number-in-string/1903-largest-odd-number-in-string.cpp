#include<bits/stdc++.h>
class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int ind=-1;
        for(int i=num.length()-1; i>=0; i--){
            if((num[i]-'0')%2!=0){
                ind=i;
                break;
            }
        }
        if(ind!=-1){
            for(int i=0; i<=ind; i++){
                ans+=num[i];
            }
        }
        return ans;
    }
};


// string s="";
//         int val=stoi(num);
//         int maxVal=INT_MIN;
        
//         if(val<10){
//             if(val%2!=0){
//                 s=to_string(val);
//             }
//         }
//         while(val<9){
//             int res=val%10;
//             if(res%2!=0){
//                 maxVal=max(maxVal, res);
//             }
//             res/=10;
//         }
        
//         s=to_string(maxVal);
        
//         return s;