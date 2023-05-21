public class Student {
    String name;
    int age;
    String country;
    String state;
    String city;

    public Student(String name, int age, String country, String state, String city) {
        this.name = name;
        this.age = age;
        this.country = country;
        this.state = state;
        this.city = city;
    }

    public static void main(String[] args){
    Student student = new Student("Tes", 29, "Eritrea", "Debub", "Areza");
        System.out.println(student.name+ " "+ student.age+ " "+student.country+ " "+ student.state+ " "+student.city);


    }
}
