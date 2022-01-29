#include<iostream>  //#include<stdio.h>
using namespace std;   //#include<conio.h>
int main()
{
    const int SIZE=5;
    int arr[]={1,2,3,4};
    int x=5;
    int y=6;
    int z=7;
    cout<<x<<endl<<y<<endl<<z<<endl;   //printf("%d, %d, %d", x,y,z);
    arr[4]=8;
    arr[5]=9;
    arr[6]=0;
    cout<<x<<endl<<y<<endl<<z<<endl;    //printf("%d, %d, %d", x,y,z);

}
/*As we know array allows a continous memory allocation so
after delaration of array arr and it's 4 elements, we declare
int x=5, whose storing bucket should be formed right after the
(next to) bucket of 4th element of arrar arr, similarly bucket y
after x and bucket z after y. now, we declare 4th element
of array arr which is 8. so now as already bucket of int x
was existing just after the 4th element of array arr, this value
of arr[4] gets assigned to the value of int x so val of int x
also changes. similarly then arr[5] gets assigned to int y and
similarly for arr[6]. so x should become 8, y should be 9 and
z should give 0 as it's output but this does not happen.
instead, we get values of x,y,z as 0,9,8.  */
