// package _27_concatenating_strings.java;

// declare variables
class Index {

    public static void main(String[] args) {

        String start = "This is the start ";
        String end = "This is the end";
        String myString2 = start + end;
        System.out.println(myString2);

        // ----------------------------------------

        String string3 = start.concat(end);
        System.out.println(string3);
        // ----------------------------------------

        start += end;
        System.out.println(start);

    }
}