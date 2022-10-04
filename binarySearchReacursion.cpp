#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v, int s, int e, int target)
{

       int mid= (s+e)/2;
        if(target == v[mid])
            return mid;
        
        else if(target > v[mid])
            return binarySearch(v,mid+1,e,target);
        
        else if(target < v[mid])
            return binarySearch(v, s, mid-1, target);

        else return -1;
}
int main()
{
     vector<int> v ={10,20,30,40,50,60,70};
     cout<< binarySearch(v, 0, 6, 50 );

    
     return 0;
}
