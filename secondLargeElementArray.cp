/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int secondLarge(vector<int>& num);
void biggest(vector<int>& num);
int main()
{
    vector<int> arr;
    arr.push_back(7); arr.push_back(4); arr.push_back(5),arr.push_back(3);
    int result=secondLarge(arr);
    cout<<result<<endl;

    return 0;
}

void biggest(vector<int>& num)
{
    cout<<num.back()<<"begin"<<endl;
    for( int i=0; i<num.size()-1;i++)
    {
        if(num[i]>num[i+1])
        {
            int temp;
            temp=num[i];
            num[i]=num[i+1];
            num[i+1]=temp;
            if(num.back()==0)
            {
                
            }
            cout<<num[0]<<num[1]<<num.back()<<"middle"<<endl;
            
        }
    }
}

int secondLarge(vector<int>& num)
{
    biggest(num);
    num.pop_back();
    biggest(num);
    return num.back();
    
}