/*
요소의 첫번째부터 마지막까지 검사하여 찾아내는 방법
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
    cout<<"요소 개수";
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
    cout<<"검색값 :";
    cin>>searchNum;
    //call searchingFunction
    int *addofArr=arr;
    int result=LinearSearching(addofArr,NumOfElements,searchNum);
    if(result==-1){
        cout<<"error;no result"<<endl;
        return 1;
    }else{
        cout<<searchNum<<"은 arr["<<result<<"]에 있습니다"<<endl;
    }
    return 0;
}