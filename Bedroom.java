public class Bedroom {
    private String name;
    private Wall wall1, wall2, wall3, wall4;
    private Ceiling ceiling;
    private Bed bed;
    private Lamp lamp;

    public Bedroom(String name, Wall wall1, Wall wall2, Wall wall3, Wall wall4, Ceiling ceiling, Bed bed, Lamp lamp) {
        this.name = name;
        this.wall1 = wall1;
        this.wall2 = wall2;
        this.wall3 = wall3;
        this.wall4 = wall4;
        this.ceiling = ceiling;
        this.bed = bed;
        this.lamp = lamp;
    }

    public Lamp getLamp(){
        return lamp;
    }
    public void makeBed(){
        Bed.make();
    }


    public static void main(String[] args){
        Wall wall1 = new Wall("West");
        Wall wall2 = new Wall("East");
        Wall wall3 = new Wall("South");
        Wall wall4 = new Wall("North");

        System.out.println(wall1.getDirection());

        Ceiling ceiling = new Ceiling(12, 55);
        System.out.println(ceiling.getHeight() + " "+ ceiling.getPaintedColor());

        Bed bed = new Bed("Modern", 4, 3, 2, 1);
        System.out.println(bed.getStyle() + " "+ bed.getPillow()+" "+ bed.getHeight()+ " "+bed.getSheets()+ " "+bed.getQuilt());


        Lamp lamp = new Lamp("Classic", false, 75);
        System.out.println(lamp.getStyle() + " "+ lamp.isBattery()+ " "+lamp.getGlobRating());

        Bedroom bedRoom = new Bedroom("YOUR NAME HERE", wall1, wall2, wall3, wall4, ceiling,bed, lamp);
        bedRoom.makeBed();

        bedRoom.getLamp().turnOn();

        System.out.println(bedRoom.wall1.getDirection() +" "+ bedRoom.wall2.getDirection() + " "+bedRoom.ceiling.getHeight()+" "+bedRoom.bed.getQuilt());;
    }
}




