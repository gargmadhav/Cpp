// to print the differnce bw the sum of elements at even indices
// to the sum of the elements at odd indices

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(6);
    // input vector
    for (int i = 0; i < 6; i++)
    {
        cout << v[i];
    }
    
    int sum = 0;
    int evensum, oddsum;
    // output and condition
    for (int i = 0; i < v.size(); i++)
    {
        if (v.size() % 2 == 0)
        {
            evensum = sum + v[i];
        }

        else if
        {
            for (int i = 0; i < v.size(); i++)
            {
                if (v.size() % 2 == 1)
                {
                    oddsum = sum + v[i];
                }
            }
        }
        
    }
}