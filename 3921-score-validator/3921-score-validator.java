class Solution {
    public int[] scoreValidator(String[] events) {
        int count = 0;
        int score = 0;
        int [] arr = new int [2];
        for(int i = 0; i<events.length; i++) {
            if(events[i] .equals("1")) {
                score += 1;
            }
            else if(events[i] .equals("2")) {
                score += 2;
            }
            else if(events[i] .equals ("3")) {
                score += 3;
            }
            else if(events[i] .equals ("4")) {
                score += 4;
            }
            else if(events[i] .equals ("5")) {
                score += 5;
            }
            else if(events[i] .equals ("6")) {
                score += 6;
            }
            else if(events[i] .equals ("W")) {
               count += 1;
            }
            else if(events[i] .equals ("WD")) {
                score += 1;
            }
            else if(events[i] .equals ("NB")) {
                score += 1;
            }
            else{
                score += 0;
            }
            if(count == 10) {
                break;
            }  
        }
        arr[0] = score;
        arr[1] = count;
        return arr;
    }
}