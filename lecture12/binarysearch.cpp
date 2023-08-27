#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int s = 0, e = size - 1;
    while (s <= e) {  // Use a loop condition instead of 'true'
        int mid = s/2 + e/2;
        if (key == arr[mid]) {
            return 1;
        } else if (key < arr[mid]) {  // Corrected condition
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return 0;  // Return 0 when key is not found
}


int main(){
    int size, key;
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    cout<<"enter the number to search ";
    cin>>key;

    int found=binarySearch(even,6,key);
    if(found){
        cout<<"key found ";
    }
    else cout<<"key not found ";
    cout<<endl;
    int ofound=binarySearch(odd, 5, key);
    if(ofound){
        cout<<"key found ";
    }
    else cout<<"key not found ";
    return 0;


}