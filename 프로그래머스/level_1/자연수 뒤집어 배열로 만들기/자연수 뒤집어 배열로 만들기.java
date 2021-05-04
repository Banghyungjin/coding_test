package com.company;
import java.util.*;

public class Main {
    public static int[] solution(long n) {
        int length = (int)(Math.log10(n)+1);
        int[] answer = new int[length];
        int count = 0;
        while(n != 0) {
            answer[count] = (int)(n % 10);
            n /= 10;
            count++;
        }
        return answer;
    }

    public static void main(String[] args) {
        boolean is_true = true;
        int n = 12345;
        int[] answer = [5,4,3,2,1];
        int[] my_ans = solution(n);
        for (int i = 0; i < answer.length; i++) {
            if (answer[i] != my_ans[i]) {
                is_true = false;
            }
        }
        System.out.println(is_true);
    }
}
