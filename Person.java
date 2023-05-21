public class Person {
    String firstName;
    String lastName;
    int age;

    public String getFirstName() {
        return firstName;
    }

    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public int getAge() {
        return age;
    }

    public int setAge(int age) {
        if (age < 0 || age > 100){
            return 0;
        }
        else{
            return this.age;
        }
    }

    public boolean isTeen(){
       if (age > 12 && age < 20){
           return true;
       }
       return false;
    }

    public String getFullName (){
        if (firstName.isEmpty()) {
            return lastName;
        }
        if (lastName.isEmpty()){
            return firstName;
        }
        if (firstName.isEmpty() && lastName.isEmpty()){
            return " ";
        }
        else {
            return firstName + " " + lastName;
        }
    }
}
