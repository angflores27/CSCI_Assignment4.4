//  Assignment 4.4 (actually 4.5 but have one named that already)
//
//  Created by Angela Flores on 11/30/22.

#include <iostream>
using namespace std;

//  positive integer n and returns the sum of the squares of all the numbers from 1 to n. Using following function header:
void display(int n)
{
    if (n==0)
        return;
    else
        display(n-1);
        cout<<n<<" ";
}
// positive integer n and returns the sum of the squares of all the numbers from 1 to n. Using following function header:
int sumSquares(int n)
{
    if (n==1)
        return 1;
    else
        return (n*n)+sumSquares(n-1);
}
//integer array along with it length, the function returns true if the array contains 0, and returns false otherwise. Using following function header:
bool containZero(int a[], int length)
{
    if (length==0)
        return false;
    else {
        if(a[length-1]==0)
            return true;
        else
            return containZero(a, length-1); }
}
// integer array along with its length and then returns minimum of the numbers in the array. Using following function header:
int min(int a[], int length)
{
    if (length==1)
        return a[0];
    else {
        if (a[length-1]<min(a,(length -1)))
            return a[length-1];
        else
            return min(a, (length-1));
    }
}

int main()
{
    int a[6]={-7, 0, 79, -68 ,43, 1};
    cout<<"All the numbers are: ";
    display(7);
    cout<<endl;
    cout<<"The sum of squares up to 5 is: "<<sumSquares(5)<<endl;
    cout<<"Bool answer, does the array contain 0? "<<containZero(a, 6)<<endl;
    cout<<"The minimum value is: "<<min(a,6)<<endl;
    return 0;
    
}
