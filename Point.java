import static java.lang.Math.sqrt;

public class Point {
    int x;
    int y;


    public Point(){
        this(3, 4);
    }
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }

    public double distance(){
        double s = (double) sqrt((x -0)*(x-0) + (y-0)*(y-0));
        System.out.println(s);
        return s;
    }

    public static void main(String[] args){
        Point point = new Point();
        point.distance();
    }
}
