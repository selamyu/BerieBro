public class Dog {
    private static String name; // static instance

    public Dog(String name){
        Dog.name = name; // in case of static
    }

    public void printName(){
        System.out.println("name "+ name);
    }

    public static void main(String[] args){
        Dog d1 = new Dog("Hangor");
        Dog d2 = new Dog("Ambelay");
        d1.printName();
        d2.printName();
    }
}
