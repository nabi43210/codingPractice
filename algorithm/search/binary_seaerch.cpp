//binary search
// array[] is "already sorted !!!!"

//재귀의 방법같은 경우 함수호출 부하가 생기므로 비효율적입니다
int BinarySearch(const int array[], int value, int low, int high) {
     if(low > high) {
         return false;
     }
     int mid = (low+high) / 2;
     if(array[mid] > value) {
         return BinarySearch(array, value, low, mid-1);
     }
     else if(array[mid] < value) {
         return BinarySearch(array, value, mid+1, high);
     }
     else {
         return mid;
     }
}