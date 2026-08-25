class Solution {
public:
    int maxArea(vector<int>& height) {
       int i = 0;
       int j = height.size()-1;
       int w = 0;
       int h = 0;
       int ans = 0;
       long long area = 0;
       while(i < j) {
          w = j - i;
          h = min(height[i] , height[j]);
          area = w*h;
          if(ans < area) ans = area;
          if(height[i] < height[j]) i++;
          else j--;
        } 
       return ans;
    }
};