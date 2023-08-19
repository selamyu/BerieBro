public class Customer {
    String name;
    double CreditLimit;
    String Email;

    public Customer(String name, double creditLimit, String email) {
        this.name = name; // this refers to the class Customer. this.name means the customer name. Here, I can use Customer.name = name
        CreditLimit = creditLimit;
        Email = email;
    }
//here we have three ways of Constructor method.
    public Customer(){
        this("Merhawi", 120000, "mera@gmail.com");
    }

    public Customer(String name, String Email){
        this(name, 1000, Email);
    }

    public String getName() {
        return name;
    }

    public double getCreditLimit() {
        return CreditLimit;
    }

    public String getEmail() {
        return Email;
    }
}
