package com.company;

import java.util.ArrayList;

public class Main {
    public static String solution(int n) {
        StringBuilder answer = new StringBuilder("");
        while(n != 0) {
            if(n % 3 != 0) {
                answer.insert(0, n % 3);
                n /= 3;
            }
            else {
                answer.insert(0, 4);
                n = n / 3 - 1;
            }
        }
        return answer.toString();
    }

    public static void main(String[] args) {
        boolean is_right = true;
        int n = 5;
        String answer = "12";
        String my_answer = solution(n);
        if (!answer.equals(my_answer)) is_right = false;
        System.out.println(is_right);
    }
}