package com.company;

import java.util.ArrayList;

public class Main {
    public static boolean is_perfect(String input) {    //올바른 괄호 문자열인지 확인을 위해 )가 먼저 나오면 false
        boolean output = true;
        int check = 0;
        for (int i = 0; i < input.length(); i++) {
            if (input.substring(i, i+1).equals("(")) check ++;
            else if (input.substring(i, i+1).equals(")") && check == 0) {
                output = false;
                break;
            }
            else check --;
        }
        if (check != 0) output = false;
        return output;
    }
    static boolean solution(String s) {
        boolean answer = is_perfect(s);
        return answer;
    }

    public static void main(String[] args) {
        boolean is_right = true;
        String s = "(())()";
        boolean my_answer = solution(s);
        boolean answer= true;
        if (my_answer != answer) is_right = false;
        System.out.println(is_right);
    }
}