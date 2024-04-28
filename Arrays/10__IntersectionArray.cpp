#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0, j = 0;
    vector<int> ans;
    while(i<n && j<m) {
    
    if(arr1[i]==arr2[j])
    {
    	ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if (arr1[i] < arr2[j]) {
  		i++;
    }
    else
    {
    	j++;
    }
    
    }
    return ans;
}

int main()
{
    vector<int> arr1  {2,4,6,8,5};
    vector<int> arr2  {3,4,8,6,7};
    vector<int> ans=findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());
    for(int i:ans)
    {
        cout<<i<<" ";
    }

   return 0;
}