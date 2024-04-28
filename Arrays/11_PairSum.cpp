#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>>pairSum(vector<int> &arr, int s){
   vector< vector<int> > ans;
   
   for(int i=0;i<arr.size(); i++ )
   {
   		for(int j = i+1; j<arr.size(); j++) {
        	if(arr[i] +arr[j] == s)
            {
            	vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
				ans.push_back(temp);
            }
        }
   }
  //sort(ans.begin(), ans.end());
   return ans;
}

int main()
{
   vector<int>arr={1,3,4,6,8,5};
   vector<vector<int>>value=pairSum(arr, 7);
    for(int i=0; i<value.size(); i++)
   {
        for(int j=0; j<value[0].size(); j++)
        {
            cout<<value[i][j]<<" ";
        }
        cout<<endl;
   }
}