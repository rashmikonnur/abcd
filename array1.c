#include<stdio.h>
int min(int a,int b);
int getMinimumDistance(int arr[], int n, int x, int y)
{
    int flag=-1;
    int output;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] ==x || arr[i] == y)
        {
            if(flag != -1 && arr[i] != arr[flag])
            {
                output = min(output,i-flag);
            }
            flag=i;
        }
    }

    return output;

}
int min(int output,int flag)
{
    int t,i=0;
    if(output>flag)
    {
        t=output,i-flag;
    }
    return t;
}
int main()
{
    int arr[] = {1, 3, 2, 5, 8, 2, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    int y = 8;
    printf("Minimum possible distance between  x  and y is =%d",getMinimumDistance(arr, n, x, y));
    return 0;
}
