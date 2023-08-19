public class SalariedEmployee extends Employee{
    double annualSalary;
    boolean isRetired;

    public SalariedEmployee(String name, String birthDate, long empId, String hireDate, double annualSalary) {
        super(name, birthDate, empId, hireDate);
        this.annualSalary = annualSalary;
    }

@Override
    public double collectPay(){
        double paycheck=  annualSalary / 26;
        double adjustedPay = (isRetired) ? 0.9 * paycheck : paycheck;

        return (int) adjustedPay;
}
public void retire(){
        terminate("12/12/2025");
        isRetired = true;

}


}
