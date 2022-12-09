#include<bits/stdc++.h>
using namespace std;
 
class GFG{
     
public:
int fib(int n)
{
    int f[n + 2];
    int i;
 
    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
    }
};
 
// Driver code
int main ()
{
    GFG g;
    int n;
    while (cin>>n)
    {
        cout<<"The Fibonacci number for " <<n<<" is "<< g.fib(n)<<endl;   
    }
     
    return 0;
}
 