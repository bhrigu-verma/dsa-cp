#include<iostream>
void sortarray(int * arr){
    int temp;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }}                                              
    }
}
int main(){
    int arr[5]={5,4,3,2,1};
    sortarray(arr);
    for(int i=0;i<5;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}