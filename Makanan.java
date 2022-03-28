public class Makanan {
    private int foodID;  // Primary Key
    private String namaMakanan;
    private String dMakanan;
    private int harga;

    public Makanan(int foodID, String namaMakanan, String dMakanan, int harga) {
        this.foodID = foodID;
        this.namaMakanan = namaMakanan;
        this.dMakanan = dMakanan;
        this.harga = harga;
    }

    public Makanan(){}

    public int getFoodID(){
        return this.foodID;
    }

    public void setFoodID(int foodID){
        this.foodID = foodID;
    }

    public String getNamaMakanan(){
        return this.namaMakanan;
    }

    public void setNamaMakanan(String namaMakanan){
        this.namaMakanan = namaMakanan;
    }

    public String getDMakanan(){
        return this.dMakanan;
    }

    public void setDMakanan(String dMakanan){
        this.dMakanan = dMakanan;
    }

    public int getHarga(){
        return this.harga;
    }

    public void setHarga(int harga){
        this.harga = harga;
    }
}
