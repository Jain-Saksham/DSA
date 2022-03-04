#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template  <typename T>
T findKthLargestElement(vector<T>& v, T kthLargestElement)
{
	sort(v.begin(), v.end());
    return v[v.size() - kthLargestElement];
}

int main() 
{
    vector<int> v{5,4,-8,9,11,-2,7};
    int k;
    cout<< "Enter value of k: ";
    cin>>k;
    cout<<"Kth Largest Element: "<<findKthLargestElement<int>(v,k)<<endl;
    return 0;
}

