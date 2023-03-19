#include <iostream>
#include <vector>

int FindOutlier(std::vector<int> arr);

int main()
{
    std::vector<int> arr = {2, 4, 0, 100, 4, 11, 2602, 36};
    std::cout << FindOutlier(arr);

    return 0;
}

int FindOutlier(std::vector<int> arr)
{
    int result = 0;
    int even = 0;
    int odd = 0;

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }
    
    if (even > odd)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 != 0) result = arr[i];
        }
    }
    else
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 == 0) result = arr[i];
        }
    }


    return result;
}