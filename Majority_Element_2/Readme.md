Here, we use the algorithm to calculate whether the given two elements are occurs n/3 in the given subarray. If yes, then the array is discarded. Then we move onto other arrays and there will be one subarray where the num1 and num2 will be n/3 in count or greater within that subarray.

Here, it is not said that there will a number/s that occur greater than n/3 in the array and hence num1 and num2 are not guranteed to be there greater than n/3 times. i.e. they are present maybe n/3 times but maybe not greater than n/3 times. Also, in case like:

[-1,-1,-1]

num1 and num2 both will be -1 and count1=3 and count2=0;

Thus, in all cases we check whether num1 and num2 are present greater than n/3 times.

Also, we we put if else condition in count of num1 and num2. In case both the num are same.