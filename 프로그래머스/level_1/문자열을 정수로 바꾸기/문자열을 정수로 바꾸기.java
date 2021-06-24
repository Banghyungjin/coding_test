package com.company;

public class Main {
    public static int solution(String s) {
        int answer = 0;
        answer = Integer.parseInt(s);
        return answer;
    }

    public static void main(String[] args) {
        String s = "1234";
        if (solution(s) == 1234) System.out.println(true);
        else System.out.println(false);
    }
}
