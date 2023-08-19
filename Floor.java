import java.awt.geom.Area;

public class Floor {
    static double width;
    static double length;

    public Floor(double width, double length) {
        if (width < 0){
            width = 0;
        }
        this.width = width;

        if (length < 0){
            length = 0;
        }
        this.length = length;
    }
    public static double getArea(){
        double Area = width * length;
        return Area;
    }


    public double getCost() {
        return 0;
    }


    public void main(String[] args){
        Carpet carpet = new Carpet(3.5);
        Floor floor = new Floor(2.75, 4.0);
        Calculator calculator = new Calculator(floor, carpet);
        System.out.println("total= " + calculator.getTotalCost());
        carpet = new Carpet(1.5);
        floor = new Floor(5.4, 4.5);
        calculator = new Calculator(floor, carpet);
        System.out.println("total= " + calculator.getTotalCost());
    }

}
