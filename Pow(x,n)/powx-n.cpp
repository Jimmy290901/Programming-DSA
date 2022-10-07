//Name: Rajat Dhull
//Github ID: github.com/dhullrajat



//This code is faster than 100% of all c++ solutions at leetcode.
//Submission Link: https://leetcode.com/submissions/detail/582064141/

//C++ code:

class Solution {
public:
    double myPow(double x,long n) {
      
      //These lines handles negative powers, in case of negative powers, we need to raise the positive power to 1/number..
      //Example: 2^-2 is equal to (1/2)^2 , this means that we have to raise power -n to (1/x). NOTE that -n is a positive number
      //Now recursion makes a magic here.. we will just say to recursion that just raise a positive power to reciprocal of the number 
      //and the work will be handled by recursion
        if(n<0){
            return myPow(1/x,-n);
        }
      
      //Now as we are increasing power each time, the required power gets half each time.. This might get some complex,
      /*
      so here is an example..
      2^4
      -> (2*2,2), as 2^4= (2*2)^(4/2)= 4^2
         (4*4,1), so the next function call will have x as 16 and n as 1
         Now we will go to the else case and return 16*(16*16,0) which return 16 as the final answer.
      */
        else if(n==0) return 1;
        else if(n%2==0) return myPow(x*x,n/2);
        else return x*myPow(x*x,(n-1)/2);
    }
};

//Hope It helps
