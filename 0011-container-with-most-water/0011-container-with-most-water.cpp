class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int st = 0;
        int end = height.size()-1;
        while(end>st){
        int width = end-st;
        int  len = min(height[st],height[end]);
        int area = len*width;
        maxArea=max(maxArea,area);
        if(height[st]<height[end]){
            st++;
        }
        else
        end--;
        }
        return maxArea;
    }
};