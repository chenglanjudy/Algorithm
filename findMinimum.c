/**
* Leetcode: Find Minimum in Rotated Sorted Array II
* 题目  一个有序的数组，在从某一个位置开始，旋转到数组的另一端​
* 举例：​0 1 2 3 4 5 6 -> 4 5 6 0 1 2 3​在这个变换之后的数组中，找到最小值。​
* 注意：
*  ◦有可能不旋转的哦。​
*  ◦数组元素有重复
*/

int min(const int a, const int b){
  return a>b? a:b;
}

int findMin(int num[],const int left,const int right){
  while(left < right){
      if(num[left] < num[right]{
          return num[left];
      }
      
      int mid = (left + right)/2;
      
      if(num[left] < num[mid]){
        left = mid + 1;
      }else if(num[left] > num[mid]){
        rignt = mid;
      }else{
        return min(findMin(num,left,mid),findMin(num,mid+1,right));
      }
  }
  return num[left];
}
