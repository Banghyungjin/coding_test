package com.company;

import java.util.ArrayList;

public class Main {
    public static int solution(String dartResult) {
        String input = "";
        int answer = 0;
        int counter = 0;
        ArrayList<Integer> score = new ArrayList<Integer>();    //점수계산용 배열 3개 만듬
        ArrayList<Integer> bonus = new ArrayList<Integer>();
        ArrayList<Integer> option = new ArrayList<Integer>();
        for(int i =0 ; i < 3; i++) {                            //옵션은 없을수도 있으므로 미리 값을 1로 초기화
            option.add(1);
        }
        for (int i = 0; i < dartResult.length(); i++) {         //dartResult를 읽어들임
            if (dartResult.substring(i,i+1).matches("[0-9]")) { //숫자일 경우
                counter ++;                                     //카운터로 몇번째 점수인지 측정
                input += dartResult.substring(i,i+1);           //input에 읽은 숫자를 덧붙임
            }
            else if (dartResult.substring(i,i+1).matches("[SDT]")){ //보너스 문자일 경우
                score.add(Integer.parseInt(input));                 //일단 있던 점수를 점수배열에 넣음
                input = dartResult.substring(i,i+1);                //보너스 문자를 읽어서 해당 보너스를
                input = input.replaceAll("S","1");
                input = input.replaceAll("D","2");
                input = input.replaceAll("T","3");
                bonus.add(Integer.parseInt(input));                 //보너스 배열에 넣음
                input = "";
            }
            else if (dartResult.substring(i,i+1).matches("[\\*]")){ //옵션 문자일 경우
                if (counter != 1) {                                 //각 옵션에 맞는 숫자를 옵션 배열에 넣음
                    option.set(counter - 2, option.get(counter - 2) * 2);
                }
                option.set(counter - 1, 2);
            }
            else {
                option.set(counter - 1, -1);
            }
        }
        for (int i = 0; i < score.size(); i++) {    //점수^보너스 * 옵션 식으로 정답 산출
            answer += Math.pow(score.get(i), bonus.get(i)) * option.get(i);
        }

        return answer;
    }

    public static void main(String[] args) {
        boolean is_right = true;
        String dartResult = "1S2D*3T";
        int answer = 37;
        int my_answer = solution(dartResult);
        if (answer != my_answer) is_right = false;
        System.out.println(is_right);
    }
}