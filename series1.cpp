#include <iostream>

using namespace std;

int findFact(int n)
{
    return n == 1 ? 1 : n * findFact(n - 1);
}

int main()
{
    int n, sum = 0;

    cout << "Enter the value of n : " << endl;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += findFact(i);
    }

    cout << "Sum : " << sum << endl;
}