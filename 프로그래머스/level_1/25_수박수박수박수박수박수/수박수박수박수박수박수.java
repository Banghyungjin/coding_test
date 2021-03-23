package com.company;

public class Main {
    public static String solution(int n) {
        String answer = "";
        boolean count = true;
        for(int i = 0; i < n; i++) {
            if(count) {
                answer += "수";
                count = false;
            }
            else {
                answer += "박";
                count = true;
            }
        }
        return answer;
    }

    public static void main(String[] args) {
        int n = 3;
        if (solution(n).equals("수박수")) System.out.println(true);
        else System.out.println(false);
    }
}
