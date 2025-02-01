#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[minIndex])
        {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }
    int swap = maxIndex + (n - 1 - minIndex);
    if (minIndex < maxIndex)
    {
        swap--;
    }
    cout << swap << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // Step 1: Find max (tallest soldier) and min (shortest soldier)
//     int maxIndex = 0, minIndex = 0;

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > arr[maxIndex])
//         {
//             maxIndex = i; // Update max index
//         }
//         if (arr[i] <= arr[minIndex])
//         {
//             minIndex = i; // Update min index (choosing last occurrence)
//         }
//     }

//     // Step 2: Calculate swaps
//     int swaps = maxIndex + (n - 1 - minIndex);

//     // Step 3: If minIndex is left of maxIndex, reduce swaps by 1
//     if (minIndex < maxIndex)
//     {
//         swaps--;
//     }

//     cout << swaps << endl;
//     return 0;
// }
