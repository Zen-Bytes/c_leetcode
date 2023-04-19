/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

*/


int maxArea(int* height, int heightSize){
    int left = 0, right = heightSize - 1, max_area = 0;

    while (left < right) {
        int current_area = (right - left) * (height[left] < height[right] ? height[left] : height[right]);
        max_area = current_area > max_area ? current_area : max_area;

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}
