package com.company;

public class Main {
    public static String solution(int num) {
        String answer = "Even";
        if (num % 2 == 1 || num % 2 == -1) answer = "Odd";
        return answer;
    }

    public static void main(String[] args) {
        int num = 3;
        if (solution(num).equals("Odd")) System.out.println(true);
        else System.out.println(false);
    }
}