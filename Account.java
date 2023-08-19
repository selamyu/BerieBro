public class Account {
    private String number;
    private double balance;
    private String customerName;
    private String customerEmail;
    private String customerPhone;


    //we can also use this() instead......
    public Account(){
        this("12346", 2.5, "Default name", "Defailt address", "default phone");
    }

    public Account(String number, double balance, String customerName, String customerEmail, String customerPhone) {
        this.number = number;
        this.balance = balance;
        this.customerName = customerName;
        this.customerEmail = customerEmail;
        this.customerPhone = customerPhone;
    }



    public void depositFunds(double depositAmount){
        balance += depositAmount;
        System.out.println("Deposit of $"+ depositAmount + " made. New balance is $"+ balance);
    }

    public void withdrawFunds(double withdrawAmount){
        if (balance - withdrawAmount < 0){
            System.out.println("Insuffient Funds! YOu only have $"+balance+ " in your account");
        }else {
            balance -= withdrawAmount;
            System.out.println("Withdrawal of $"+ withdrawAmount + " processed, Remainding balace = $"+balance);
        }
    }
    public String getNumber() {
        return number;
    }

    public void setNumber(String number) {
        this.number = number;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public String getCustomerName() {
        return customerName;
    }

    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }

    public String getCustomerEmail() {
        return customerEmail;
    }

    public void setCustomerEmail(String customerEmail) {
        this.customerEmail = customerEmail;
    }

    public String getCustomerPhone() {
        return customerPhone;
    }

    public void setCustomerPhone(String customerPhone) {
        this.customerPhone = customerPhone;
    }
}
