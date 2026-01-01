class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
     vector<int>ans;
     int count = 0;
     for(int i = 1; i<height.size(); i++){
          if(height[i-1]>threshold){
              ans.push_back(i);
            } 
        }return ans;        
    }
};