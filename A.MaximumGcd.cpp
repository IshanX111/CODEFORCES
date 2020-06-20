#include <bits/stdc++.h>
using namespace std;
int arr[1000000];


int findMaxGCD(int arr[], int n)
{

    int high = 0;
    for (int i = 0; i < n; i++)
        high = max(high, arr[i]);


    int count[high + 1] = {0};
    for (int i = 0; i < n; i++)
        count[arr[i]]++;


    int counter = 0;


    for (int i = high; i >= 1; i--)
    {
        int j = i;
       counter = 0;

        while (j <= high)
        {


            if(count[j] >=2)
               return j;

           else if (count[j] == 1)
                counter++;


            j += i;


            if (counter == 2)
                return i;
        }
    }
}


int main()
{
    int t,n,i;
    cin>>t;

    while(t--){
    cin>>n;

    for(i=0;i<n;i++){
        arr[i]=i+1;
    }

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << findMaxGCD(arr, n)<<endl;
    memset(arr,0,sizeof(arr));

    }
}
