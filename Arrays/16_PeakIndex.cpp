#include<iostream>
#include<vector>
using namespace std;

int peakIndex(vector<int>v, int n) {
	int s = 0, e = v.size() - 1;
	int mid=(s + e) / 2;
	while (s < e)
	{
		if(v[mid] < v[mid+1])
     			s=mid+1;
    		else
      			e = mid;
    
		mid = (s + e) / 2;
	}
	return s;
    }
   
int main(){
vector<int> v={3,4,9,67,99,5,1};

return 0;
}