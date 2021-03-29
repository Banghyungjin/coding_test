package com.company;

import java.util.ArrayList;

public class Main {
    public static int solution(String s) {
        int answer = s.length();
        int temp_answer = 0;
        int max_count = s.length() / 2;
        String last_one = "";
        int count = 0;
        for (int i = 1; i <= max_count; i++) {
            String temp_s = s;
            ArrayList<String>strings = new ArrayList<String>();
            temp_answer = 0;
            count = 1;
            while(temp_s.length() > 0) {
                if(temp_s.length() >= i) {
                    if(temp_s.substring(0, 0 + i).equals(last_one)) {
                        count++;
                    }
                    else {
                        if (count != 1) {
                            strings.add(Integer.toString(count));
                        }
                        strings.add(temp_s.substring(0, 0 + i));
                        count = 1;
                    }
                    last_one = temp_s.substring(0, 0 + i);
                    temp_s = temp_s.substring(i);
                }
                else {
                    strings.add(temp_s);
                    temp_s = "";
                }
            }
            if (count != 1) {
                strings.add(Integer.toString(count));
            }
            for(int j = 0; j < strings.size(); j++) {
                temp_answer += strings.get(j).length();
            }
            if (answer > temp_answer) answer = temp_answer;
            strings.clear();
        }
        return answer;
    }

    public static void main(String[] args) {
        boolean is_right = true;
        String s = "abcabcabcabcdededededede";
        int my_answer = solution(s);
        int answer= 14;
        if (answer != my_answer) is_right = false;
        System.out.println(is_right);
    }
}