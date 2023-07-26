#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int>& arr, int target, int low, int high) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] > target) {
            return binary_search(arr, target, low, mid - 1);
        }
        else {
            return binary_search(arr, target, mid + 1, high);
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int target = 12;

    int result = binary_search(arr, target, 0, arr.size() - 1);

    if (result != -1) {
        cout << "Phan tu " << target << " duoc tim thay tai vi tri " << result << "." << endl;
    } else {
        cout << "Phan tu " << target << " khong co trong mang." << endl;
    }

    return 0;
}
