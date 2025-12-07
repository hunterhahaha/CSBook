#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int len; cin >> len;
        int *arr = new int[len];
        for (int i = 0; i < len; i++) cin >> arr[i];
        //折半插入排序， 降序
        for (int i = 1; i < len; i++)
        {
            int key = arr[i];
            int left = 0, right = i - 1;
            while(left <= right)
            {
                int mid = (left + right) / 2;
                if (arr[mid] < key) right = mid - 1;
                else left = mid + 1;
            }
            for (int j = i - 1; j >= left; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[left] = key;
            for (int k = 0; k < len; k++)
            {
                if (k) cout << " ";
                cout << arr[k];
            }
            cout << endl;
        }
        cout << endl;
        delete[] arr;
    }
    return 0;
}