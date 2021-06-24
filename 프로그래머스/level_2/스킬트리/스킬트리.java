package com.company;

public class Main {
    public static int solution(String skill, String[] skill_trees) {
        int answer = 0;
        String inputString = "[^" + skill + "]";
        for(int i = 0; i < skill_trees.length; i++) {
            skill_trees[i] = skill_trees[i].replaceAll(inputString,"");
            if(skill.indexOf(skill_trees[i]) == 0 || skill_trees[i].equals("")) answer ++;
        }
        return answer;
    }

    public static void main(String[] args) {
        boolean is_right = true;
        String skill = "CBD";
        String[] skill_trees = {"BACDE", "CBADF", "AECB", "BDA"};
        int my_answer = solution(skill,skill_trees);
        int answer= 2;
        if (answer != my_answer) is_right = false;
        System.out.println(is_right);
    }
}