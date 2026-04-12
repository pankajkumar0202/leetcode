class Solution {
public:
    string trafficSignal(int timer) {
        if(timer == 0) {
            return "Green";
        }
        else if(timer == 30) {
            return "Orange"; 
        }
        else if( 30 < timer && timer <= 90) {
            return "Red"; 
        }
        else{
            return "Invalid"; 
        }
    }
};