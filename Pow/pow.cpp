#include<bits/stdc++.h>
using namespace std;

double binpow(double a, long long int b) {
    if (b == 0)
        return 1;
    double res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

double pow (double x,long long int n)
{
    double s=1;//Initialsing a final product
    if(n<0)
    {
        n=-n;//Incase the power is negative I am dividing the number exactly number of times
        s = binpow(x,n);//Using Binary exponentiation to solve this problem in O(logn)
        s = 1/s;
    }
    else
    {
      s = binpow(x,n);
    }
    return s;
}

 

int main()
{
    float s = pow(2,-2);
    cout<<s<<endl;
}
