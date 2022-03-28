public class Minuman {
    private int drinkID;  // Primary Key
    private String namaMinuman;
    private String size;
    private int harga;

    public Minuman(int drinkID, String namaMinuman, String size, int harga){
        this.drinkID = drinkID;
        this.namaMinuman = namaMinuman;
        this.size = size;
        this.harga = harga;
    }

    public Minuman(){}

    public int getDrinkID(){
        return this.drinkID;
    }

    public void setDrinkID(int drinkID){
        this.drinkID = drinkID;
    }

    public String getNamaMinuman(){
        return this.namaMinuman;
    }

    public void setNamaMinuman(String namaMinuman){
        this.namaMinuman = namaMinuman;
    }

    public String getSize(){
        return this.size;
    }

    public void setSize(String size){
        this.size = size;
    }

    public int getHarga(){
        return this.harga;
    }

    public void setHarga(int harga){
        this.harga = harga;
    }
}
