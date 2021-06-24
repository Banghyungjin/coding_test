package com.company;

public class Main {
    public static String[] solution(int n, int[] arr1, int[] arr2) {
        String[] answer = new String[n];
        String temp_answer = "";
        for (int i = 0; i < arr1.length; i++) { //arr1과 arr2에서 하나씩 빼온뒤 or 해서 새로운 배열에 넣음
            temp_answer = Integer.toBinaryString(arr1[i] | arr2[i]);
            while (temp_answer.length() < n) {
                temp_answer = " " + temp_answer;
            }
            temp_answer = temp_answer.replaceAll("1","#");
            temp_answer = temp_answer.replaceAll("0"," ");
            answer[i] = temp_answer;
        }
        return answer;
    }

    public static void main(String[] args) {
        boolean is_right = true;
        int n = 5;
        int[] arr1 = {9,20,28,18,11};
        int[] arr2 = {30,1,21,17,28};
        String[] answer = {"#####","# # #", "### #", "#  ##", "#####"};
        String[] my_answer = solution(n, arr1, arr2);
        for (int i = 0; i < answer.length; i++) {
            if (!my_answer[i].equals(answer[i])) {
               is_right = false;
               break;
            }
        }
        System.out.println(is_right);
    }
}