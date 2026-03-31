class Solution {
public:
    string reverseStr(string s, int k) {
        int i;
        int left,right;
        for(i=0;i<s.size();i+= 2*k){
int end = min(i + k - 1, (int)s.size() - 1);

            left = i;
            right = end;
            while(left<right){
           
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
           

            }
        }
        return s;
    }
};