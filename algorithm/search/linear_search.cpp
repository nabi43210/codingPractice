/*
����� ù��°���� ���������� �˻��Ͽ� ã�Ƴ��� ���
*/
#include <iostream>
using namespace std;
int LinearSearching(int *addofArr, int index, int target){
    int *j=addofArr;
    int count=0;
    while(1){
        if(*j==target){
            return count;
        }
        if(count==index){
            return -1;
        }
        j++;
        count++;
    }

}
int main(){
    int NumOfElements=0,i,searchNum;
    cout<<"��� ����";
    cin>>NumOfElements;
    int arr[NumOfElements];

    for(i=0;i<NumOfElements;i++){
        cout<<"arr["<<i<<"]:";
        cin>>arr[i];
    }
    //just print
    for(i=0;i<NumOfElements;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"�˻��� :";
    cin>>searchNum;
    //call searchingFunction
    int *addofArr=arr;
    int result=LinearSearching(addofArr,NumOfElements,searchNum);
    if(result==-1){
        cout<<"error;no result"<<endl;
        return 1;
    }else{
        cout<<searchNum<<"�� arr["<<result<<"]�� �ֽ��ϴ�"<<endl;
    }
    return 0;
}