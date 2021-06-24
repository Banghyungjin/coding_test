package com.company;

public class Main {
    public static long solution(int a, int b) {
        long answer = 0;
        if(a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        else if (a == b) return a;
        for (int i = a; i <= b; i++) {
            answer += i;
        }
        return answer;
    }
    public static void main(String[] args) {
	    int a = 3;
	    int b = 5;
	    if (solution(a, b) == 12) {
	        System.out.println("True");
        }
	    else {
            System.out.println("False");
        }
    }
}
