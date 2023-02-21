// package _04_variable_value_assigned_to_another_variable.java;

// declare variables
class Index {

    String fName;
    // fName = "Daniel"; // Error outside of main function

    String[] colors = { "red", "green", "blue" };

    public static void main(String[] args) {

        // fname = "Daniel"; // Error also

        String f_Name;
        f_Name = "John";
        System.out.println(f_Name); // john

        String first_Name;
        first_Name = f_Name;
        System.out.println(first_Name); // john

        int age;
        age = 34;
        int herAge;
        herAge = age;

        boolean hasChildren;
        hasChildren = true;
        System.out.println(hasChildren); // true

        boolean sheHasChildren;
        sheHasChildren = hasChildren;
        System.out.println(sheHasChildren); // true

    }
}