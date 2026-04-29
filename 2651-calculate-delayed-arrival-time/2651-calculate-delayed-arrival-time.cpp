class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        if(delayedTime == 24) {
            delayedTime = 0;
        }
        int sum = arrivalTime + delayedTime;
        if(sum == 24) {
            return 0;
        }
        if(sum > 24) {
            sum -= 24;
        }
        return sum;  
    }
};