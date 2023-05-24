include <iostream>
#include <cstdio>
#include <deque>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{//Using the largest in the window logic using deque
    deque<int>max;
    int temp[4] = {a,b,c,d};//stored in an array of size 4
    for (int i=0 ; i<4 ; i++)//iterate over size of window
    {
        while(!max.empty() && temp[i]>temp[max.back()])//Condition to find largest of 4
        {
            max.pop_back();
        }
        max.push_back(i);
    }  
    return temp[max.front()];
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
