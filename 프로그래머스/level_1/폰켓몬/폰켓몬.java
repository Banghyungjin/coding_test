package com.company;

import java.util.LinkedHashSet;

public class Main {
    public static int solution(int[] nums) {
        int answer = 0;
        LinkedHashSet<Integer> num_set = new LinkedHashSet<>();
        for(int i : nums){
            num_set.add(i);
        }
        answer = Math.min(nums.length / 2, num_set.size());
        return answer;
    }

    public static void main(String[] args) {
        boolean is_true = true;
        int[] nums = {3,1,2,3};
        int answer = 2;
        int my_answer = solution(nums);
        if (my_answer != answer) {
            is_true = false;
        }
        System.out.println(is_true);
    }
}
