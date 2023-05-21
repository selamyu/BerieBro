public class Main {
    public static void main(String[] args){
        Car car = new Car();
        car.setMake("Porsche");
        car.setModel("Carrera");
        car.setDoors(2);
        car.setConvertible(true);
        car.setColor("Red");

        System.out.println("make = "+car.getMake());
        System.out.println("model = "+car.getModel());
        car.describeCar();

        Car targa = new Car();
        targa.setMake("Porsche");
        targa.setModel("Targa");
        targa.setDoors(2);
        targa.setConvertible(false);
        targa.setColor("Red");

        targa.describeCar();


//        Account account = new Account("12345", 5000.00, "Tesfay", "tesfay@gmail.com",
//                "0544602456");
        Account account = new Account();

        System.out.println(account.getNumber());
//
//        account.setNumber("12345");
//        account.setBalance(1000.00);
//        account.setCustomerName("Tesfay");
//        account.setCustomerEmail("tesfay@gmail.com");
//        account.setCustomerPhone("+9714460235");


        account.withdrawFunds(100.0);
        account.depositFunds(250);
        account.withdrawFunds(50);


        SimpleCalculator calculator = new SimpleCalculator();

        calculator.setFirstNumber(5.0);
        calculator.setSecondNumber(4);
        System.out.println("add= " + calculator.getAdditionResult());
        System.out.println("subtract= " + calculator.getSubtractionResult());
        calculator.setFirstNumber(5.25);
        calculator.setSecondNumber(0);
        System.out.println("multiply= " + calculator.getMultiplicationResult());
        System.out.println("divide= " + calculator.getDivisionResult());


        System.out.println();
        Person person = new Person();
        person.setFirstName("");   // firstName is set to empty string
        person.setLastName("");    // lastName is set to empty string
        person.setAge(10);
        System.out.println("fullName= " + person.getFullName());
        System.out.println("teen= " + person.isTeen());

        person.setFirstName("John");    // firstName is set to John
        person.setAge(19);
        System.out.println("fullName= " + person.getFullName());
        System.out.println("Teen= " + person.isTeen());
        person.setLastName("Smith");    // lastName is set to Smith
        System.out.println("fullName= " + person.getFullName());


        
        //repeat and indent
        System.out.println("ABC\n".repeat(3));
        System.out.println("-".repeat(20));
        System.out.println("ABC\n".repeat(3).indent(6));
    }
}
