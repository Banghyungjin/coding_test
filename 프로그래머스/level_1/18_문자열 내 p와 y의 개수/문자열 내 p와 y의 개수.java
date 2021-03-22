package com.company;

public class Main {
    public static boolean solution(String s) {
        int p = 0;
        int y = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s.charAt(i) == 'p' || s.charAt(i) == 'P') p ++;
            if(s.charAt(i) == 'y' || s.charAt(i) == 'Y') y ++;
        }
        return p == y;
    }

    public static void main(String[] args) {
        String s = "pPoooyY";
        System.out.println(solution(s));
    }
}
