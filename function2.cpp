#include <iostream>
using namespace std;

int getSum(int arr[],  int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int nums[3];
    cout << "Input 3 nums separated by spaces: ";
    cin >> nums[0]>>nums[1]>>nums[2];

    int size_array = sizeof(nums) / sizeof(nums[0]);

    cout << "the size of aray is: "<< size_array<< endl;
    cout << "the sum of elements from array is: "<< getSum(nums, size_array);

}