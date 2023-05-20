#include <iostream>

using namespace std;

int arr[1001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    
    arr[1] = 1;
    arr[2] = 2;

    cin >> n;
    for (int i = 3; i <= n; i++)
        arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
    cout << arr[n];
}