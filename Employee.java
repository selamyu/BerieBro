public class Employee extends Worker{
    private long empId;
    private String hireDate;

    public Employee(String name, String birthDate, long empId, String hireDate) {
        super(name, birthDate);
        this.empId = empId;
        this.hireDate = hireDate;
    }

    @Override
    public String toString() {
        return "Employee{" +
                "empId=" + empId +
                ", hireDate='" + hireDate + '\'' +
                '}' + super.toString();
    }

    public static void main(String[] args){
        Employee tim = new Employee("Tim", "11/11/1998", 77000, "01/01/2020");

        System.out.println(tim);
        System.out.println("Age = "+ tim.getAge());
        System.out.println("Pay = "+ tim.collectPay());


        SalariedEmployee joe = new SalariedEmployee("Joe", "11/11/1998", 1000, "11/11/2020", 35000);
        System.out.println(joe);
        System.out.println("Joe's Paycheck = $"+ joe.collectPay());

        joe.retire();
        System.out.println("Joe's Pension check = $"+ joe.collectPay());

    }
}
