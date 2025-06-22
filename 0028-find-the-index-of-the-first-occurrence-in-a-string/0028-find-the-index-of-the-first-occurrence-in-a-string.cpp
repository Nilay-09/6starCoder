class Solution {
public:
    int strStr(string haystack, string needle) {

        int n=haystack.size();
        int m=needle.size();

        int ans=-1;

        if(m>n) return -1;
        if(haystack==needle) return 0;

        for(int i=0;i<=n-m;i++){
            
            bool f=0;
            for(int j=0;j<m;j++ ){

                if(haystack[i+j]!=needle[j]){
                    f=1;
                }
            }
            if(f==0){ ans=i;
            break;
            }
        }

        return ans;
        
    }
};