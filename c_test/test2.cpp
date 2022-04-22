#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<int> arr;
    int i = 1;
    int nums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    while (i < 10) {
        cout << i << endl;
        i++;
    }
    for(auto num : nums)
    {
        cout << num << endl;
    }
    return 0;
}
