package _05_initialize_variables_with_assignment_operator.java;

import java.util.Arrays;

// declare variables
class Index {

    public static void main(String[] args) {

        String name = "John"; // OK
        System.out.println(name);

        int age = 39; // OK
        System.out.println(age);

        boolean hasChildren = true; // OK
        System.out.println(hasChildren);

        String f_Name = "john";
        System.out.println(f_Name); // john

        String first_Name = "Jana";
        System.out.println(first_Name); // john

        String[] colors = { "red", "green", "blue" };
        System.out.println(Arrays.toString(colors));

    }
}