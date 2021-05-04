package com.company;
import java.util.*;

public class Main {
    public static int solution(int n) {
        int answer = 0;
        while(n != 0) {
            answer += n % 10;
            n /= 10;
        }
        return answer;
    }

    public static void main(String[] args) {
        int n = 123;
        if (solution(n) == 6) System.out.println(true);
        else System.out.println(false);
    }
}
