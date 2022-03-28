public class Order {
    private int orderID; // Primary Key
    private int foodID;  // Foreign Key
    private int drinkID; // Foreign Key
    private int jumlahF;
    private int jumlahD;
    private int totalHarga;
    private Makanan dataMakanan;
    private Minuman dataMinuman;

    public Order(int orderID, int foodID, int drinkID, int jumlahF, int jumlahD, int totalHarga) {
        this.orderID = orderID;
        this.foodID = foodID;
        this.drinkID = drinkID;
        this.jumlahF = jumlahF;
        this.jumlahD = jumlahD;
        this.totalHarga = totalHarga;
    }

    public Order(){}

    public int getOrderID(){
        return this.orderID;
    }

    public void setOrderID(int orderID){
        this.orderID = orderID;
    }

    public int getFoodID(){
        return this.foodID;
    }

    public void setFoodID(int foodID){
        this.foodID = foodID;
    }

    public int getDrinkID(){
        return this.drinkID;
    }

    public void setDrinkID(int drinkID){
        this.drinkID = drinkID;
    }

    public int getJumlahF(){
        return this.jumlahF;
    }

    public void setJumlahF(int jumlahF){
        this.jumlahF = jumlahF;
    }

    public int getJumlahD(){
        return this.jumlahD;
    }

    public void setJumlahD(int jumlahD){
        this.jumlahD = jumlahD;
    }

    // public String getNotes(){
    //     return this.notes;
    // }

    // public void setNotes(String notes){
    //     this.notes = notes;
    // }

    public int getTotalHarga() {
        return this.totalHarga;
    }

    public void setTotalHarga(int totalHarga){
        this.totalHarga = totalHarga;
    }

    public Makanan getDataMakanan() {
        return this.dataMakanan;
    }

    public void setDataMakanan(Makanan dataMakanan){
        this.dataMakanan = dataMakanan;
    }

    public Minuman getDataMinuman() {
        return this.dataMinuman;
    }

    public void setDataMinuman(Minuman dataMinuman){
        this.dataMinuman = dataMinuman;
    }
}
