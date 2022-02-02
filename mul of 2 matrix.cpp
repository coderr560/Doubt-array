#include<iostream>
using namespace std;
int main()
{
    int arr1[2][3]={{2,3,6},{6,3,1}};
    int arr2[3][2]={{3,5},{5,7},{7,2}};
    int s=0;
    for(int t=0;t<2;t++)
    {
    for(int j=0;j<=1;j++)
    {
    for(int i=0;i<=2;i++)
    {
        int x=arr1[t][i]*arr2[i][j];
        s=s+x;
    }
    cout<<s<<"      "; s=0;
    }
    cout<<endl;



    }
}
