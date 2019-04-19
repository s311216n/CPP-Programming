// C++ program to find intersection of two sorted arrays
#include <bits/stdc++.h>
using namespace std;

vector <int> printUnion(vector <int> arr1,vector <int> arr2)
{
    int i = 0, j = 0;
    vector <int> ans;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
	    else if (arr2[j] < arr1[i])
	    {
	        ans.push_back(arr2[j]);
            j++;
	    }
	    else
        {
            ans.push_back(arr1[i]);
            i++;
	        j++;
	    }
    }
    while (i < arr1.size())
    {
        ans.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size())
    {
        ans.push_back(arr2[j]);
        j++;
    }
    return ans;
}

int main()
{
    vector <int> v1 = {1, 3, 4, 5, 7};  //list 1
    vector <int> v2 = {2, 3, 5, 6};   //list 2

    vector<int> ans = printUnion(v1,v2);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
