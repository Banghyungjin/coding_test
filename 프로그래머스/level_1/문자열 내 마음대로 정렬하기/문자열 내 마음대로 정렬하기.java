package com.company;

public class Main {
    public static String[] solution(String[] strings, int n) {
        String[] answer = new String[strings.length];
        String temp;
        for(int i = 0; i < strings.length - 1; i++) {
            for (int j = i + 1; j <  strings.length; j++) {
                if (strings[i].charAt(n) > strings[j].charAt(n)) {
                    temp = strings[i];
                    strings[i] = strings[j];
                    strings[j] = temp;
                }
                else if (strings[i].charAt(n) == strings[j].charAt(n)) {
                    if (strings[i].compareTo(strings[j]) > 0) {
                        temp = strings[i];
                        strings[i] = strings[j];
                        strings[j] = temp;
                    }
                }
            }
        }
        System.arraycopy(strings, 0, answer, 0, strings.length);
        return answer;
    }

    public static void main(String[] args) {
        boolean is_true = true;
	    String[] strings = {"sun", "bed", "car"};
	    int n = 1;
        String[] answer = {"car", "bed", "sun"};
        String[] my_answer = solution(strings, n);
	    for (int i = 0; i < my_answer.length; i++) {
            if (!my_answer[i].equals(answer[i])) {
                is_true = false;
                break;
            }
        }
	    System.out.println(is_true);
    }
}
