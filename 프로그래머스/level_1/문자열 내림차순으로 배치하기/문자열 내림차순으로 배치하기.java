package com.company;

public class Main {
    public static String solution(String s) {
        StringBuilder answer = new StringBuilder();
        char[] text = new char[s.length()];
        for(int i = 0; i < s.length(); i++) {
            text[i] = s.charAt(i);
        }
        char temp;
        for(int i = 0; i < s.length() - 1; i++) {
            for(int j = i + 1; j < s.length(); j++) {
                if(text[i] < text[j]) {
                    temp = text[j];
                    text[j] = text[i];
                    text[i] = temp;
                }
            }
        }
        for(int i = 0; i < s.length(); i++) {
            answer.append(text[i]);
        }
        return answer.toString();
    }

    public static void main(String[] args) {
	    String s = "Zbcdefg";
	    if (solution(s).equals("gfedcbZ")) {
	        System.out.println("True");
        }
	    else {
            System.out.println("False");
        }
    }
}
