package com.company;

public class Main {
    public static boolean solution(String s) {
        boolean answer = false;
        if(s.length() == 4 || s.length() == 6) {
            int[] input = new int[s.length()];
            for (int i = 0; i < s.length(); i++) {
                if(s.charAt(i) < 48 || s.charAt(i) > 57) {
                    return false;
                }
                input[i] = s.charAt(i);
            }
            answer = true;
        }
        return answer;
    }

    public static void main(String[] args) {
        String s = "a234";  //the answer is false
        System.out.println(solution(s));
    }
}
