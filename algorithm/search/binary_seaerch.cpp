//binary search
// array[] is "already sorted !!!!"

//����� ������� ��� �Լ�ȣ�� ���ϰ� ����Ƿ� ��ȿ�����Դϴ�
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