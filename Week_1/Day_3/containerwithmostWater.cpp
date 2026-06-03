int maxArea(vector<int>& height){
    int n = height.size();
    int i = 0, j = n - 1;
    int maxWater = 0;
    while(i < j){
        int wd = j - i;
        int ht = min(height[i], height[j]);
        int area = wd * ht;
        maxWater = max(maxWater, area);
        if(height[i] > height[j]){
            j--;
        } else{
            i++;
        }
    }
    return maxWater;
}