### Problem link: https://leetcode.com/problems/the-employee-that-worked-on-the-longest-task/

To find - given logs of tasks/jobs, find the lid of the employee that did the longest job

Code Logic: -
1. Traverse through each log
2. Calculate the period duration to complete the corresponding job of that log
3. If the duration is more than current max duration (maxTime), update the minId
4. Id the duration is equal to maxTime, minId is minimum of minId and employee id in the log.