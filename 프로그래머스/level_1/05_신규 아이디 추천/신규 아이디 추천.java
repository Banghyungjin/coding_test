package com.company;

public class Main {
    public static String solution(String new_id) {
        new_id = new_id.toLowerCase();  //#1
        new_id = new_id.replaceAll("[^-_.a-z0-9]","");  //#2
        new_id = new_id.replaceAll("[.]{2,}", "."); //#3
        new_id = new_id.replaceAll("^[.]|[.]$",""); //#4
        if(new_id.length() == 0) new_id += "a";    //#5
        if(new_id.length() >= 16) { //#6
            new_id = new_id.substring(0,15);
            if(new_id.charAt(new_id.length() - 1) == '.') new_id = new_id.substring(0,14);
        }
        while(new_id.length() <= 2) {   //#7
            new_id += new_id.charAt(new_id.length() - 1);
        }
        return new_id;
    }

    public static void main(String[] args) {
	    String s = "...!@BaT#*..y.abcdefghijklm";
	    if (solution(s).equals("bat.y.abcdefghi")) {
	        System.out.println("True");
        }
	    else {
            System.out.println("False");
        }
    }
}
