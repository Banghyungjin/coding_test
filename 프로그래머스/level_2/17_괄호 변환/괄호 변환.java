package com.company;

import java.util.ArrayList;

public class Main {
    public static String solution(String p) {
        return chopchop(p);
    }

    public static boolean is_perfect(String input) {    //올바른 괄호 문자열인지 확인을 위해 )가 먼저 나오면 false
        int check = 0;
        for (int i = 0; i < input.length(); i++) {
            if (input.substring(i, i+1).equals("(")) check ++;
            else if (input.substring(i, i+1).equals(")") && check == 0) {
                return false;
            }
            else check --;
        }
        return true;
    }

    public static String chopchop(String input) {
        String output = "";
        if (is_perfect(input)) output = input;
        else if (input.length() != 0) {  // 1
            String u = "";
            String v = "";
            int check = 0;
            for (int i = 0; i < input.length(); i++) {  // 2
                if (input.substring(i, i+1).equals("(")) check ++;  //받아온 문자열의 처음부터 탐색하면서
                else check --;                                      //(와)의 숫자가 같아지는 순간 u와 v로 나눔
                if (check == 0) {
                    u = input.substring(0,i + 1);
                    v = input.substring(i + 1);
                    break;
                }
            }
            if (is_perfect(u)) {    // 3
                output = u + chopchop(v);
            }
            else {  // 4
                output += "(";  // 4-1
                output += chopchop(v);  // 4-2
                output += ")";  // 4-3
                if (u.length() > 2) u = u.substring(1,u.length() - 1);  // 4-4
                else u = "";
                if (u.length() != 0) {
                    u = u.replaceAll("\\(","r");
                    u = u.replaceAll("\\)","l");
                    u = u.replaceAll("r",")");
                    u = u.replaceAll("l","(");
                }
                output += u;
            }
        }
        return output;  // 4-5
    }

    public static void main(String[] args) {
        boolean is_right = true;
        String s = "()))((()";
        String my_answer = solution(s);
        String answer= "()(())()";
        if (!answer.equals(my_answer)) is_right = false;
        System.out.println(is_right);
    }
}