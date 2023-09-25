#include <iostream>
using namespace std;


 int peakIndexInMountainArray(int arr[],int n) {
        int start = 0;
        int end = n - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }

        return start;
}

int main(){
    int a[3] = {0,1,0};
    cout<<"Peak Element : "<<peakIndexInMountainArray(a,3);
    return 0;

}