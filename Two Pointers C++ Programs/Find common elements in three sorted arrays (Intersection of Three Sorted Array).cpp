// C++ program to find intersection of two sorted arrays
#include <bits/stdc++.h>
using namespace std;

vector <int> printIntersection(vector <int> arr1,vector <int> arr2, vector <int> arr3)
{
    int i = 0, j = 0, k=0;
    vector <int> ans;
    while (i < arr1.size() && j < arr2.size() && k < arr3.size())
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            ans.push_back(arr1[i]);
            i++; j++; k++;
        }
        else if (arr1[i] < arr2[j])
           i++;
        else if (arr2[j] < arr3[k])
	       j++;
	    else
	       k++;
    }
    return ans;
}

int main()
{
    vector <int> v1 = {1, 5, 10, 20, 40, 80};  //list 1
    vector <int> v2 = {6, 7, 20, 80, 100};   //list 2
    vector <int> v3 = {3, 4, 15, 20, 30, 70, 80, 120}; //list 3

    vector<int> ans = printIntersection(v1,v2,v3);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
