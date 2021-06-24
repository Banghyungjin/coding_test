package com.company;

public class Main {
    public static String solution(String s, int n) {
        String answer = "";
        int temp = 0;
        int index = n;
        for(int i = 0; i < s.length(); i++) {
            temp = s.charAt(i);
            if (temp != 32) {
                for(int j = 0; j < n; j++) {
                    if (temp == 90 || temp == 122) temp -= 25;
                    else temp++;
                }
            }
            answer += (char)temp;
        }
        return answer;
    }

    public static void main(String[] args) {
        String s = "AB";
        int n = 1;
        if (solution(s,n).equals("BC")) System.out.println(true);
        else System.out.println(false);
    }
}