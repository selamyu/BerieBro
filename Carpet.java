public class Carpet {
        static double cost;

        public Carpet(double cost) {
            if (cost < 0){
                cost = 0;
            }
            this.cost = cost;
        }

        public static double getCost() {
            return cost;
        }
}
