package com.company;

public class Main {
    public static String solution(String[] seoul) {
        String answer = "";
        for (int i = 0; i < seoul.length; i++) {
            if (seoul[i].equals("Kim")) answer = "김서방은 " + i + "에 있다";
        }
        return answer;
    }

    public static void main(String[] args) {
        String[] seoul = {"Jane", "Kim"};  //the answer is 1;
        System.out.println(solution(seoul).equals("김서방은 1에 있다"));
    }
}
