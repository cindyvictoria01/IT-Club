import java.util.ArrayList;
import java.util.Scanner;

public class App{
    public static Scanner input = new Scanner(System.in);  
    public static ArrayList <Makanan> dataMakanan = new ArrayList<Makanan>();  
    public static ArrayList <Minuman> dataMinuman = new ArrayList<Minuman>();
    public static ArrayList <Order> dataOrder = new ArrayList<Order>();

    public static void main(String[] args) throws Exception {
        int pilihan = 0;
        initF();
        initD();
        do{
            cetakMenu();
            pilihan = input.nextInt();
            input.nextLine();
            input = new Scanner(System.in);  
            if(pilihan == 1){
                showMenuMakanan();
            }else if (pilihan == 2) {
                showMenuMinuman();
            }else if(pilihan == 3) {
                Order tmpOrder = inputOrder();
                dataOrder.add(tmpOrder);
            }else if(pilihan == 4) {
                showOrder();
            }else if(pilihan == 5) {
                showAllOrder();
            }
        }while(pilihan!=0);
    }

    // cetak menu
    public static void cetakMenu(){
        System.out.println("\nMenu:");
        System.out.println("1. Lihat Menu Makanan");
        System.out.println("2. Lihat Menu Minuman");
        System.out.println("3. Pesan");
        System.out.println("4. Lihat Order");
        System.out.println("5. Lihat Semua Order");
        System.out.println("0. Keluar");
        System.out.print("Masukkan Pilihan anda: ");
    }

    // input data makanan ke arraylist
    public static void initF(){
        dataMakanan.add(new Makanan(1, "Cheese Burger", "Spicy/Not Spicy", 25000));
        dataMakanan.add(new Makanan(2, "French Fries", "Salt/No salt", 20000));
    }

    // menampilkan menu makanan 
    public static void showMenuMakanan(){
        System.out.println("Food Menu: ");
        System.out.println("-----------");
        System.out.println("Kode \t Nama \t\t Pilihan \t Harga");
        for (int i = 0; i<dataMakanan.size(); i++){
            System.out.println(dataMakanan.get(i).getFoodID() + "\t" + dataMakanan.get(i).getNamaMakanan() 
            + " \t " + dataMakanan.get(i).getDMakanan() + "\t\t" + dataMakanan.get(i).getHarga());
        }
    }

    // input data minuman
    public static void initD() {
        dataMinuman.add(new Minuman(1, "Coca Cola", "M", 10000));
        dataMinuman.add(new Minuman(2, "Coca Cola", "L", 15000));
    }

    // show data makanan
    public static void showMenuMinuman(){
        System.out.println("Beverage Menu: ");
        System.out.println("---------------");
        System.out.println("Kode \t Nama \t\t Ukuran \t Harga");
        for (int i = 0; i<dataMinuman.size(); i++){
            System.out.println(dataMinuman.get(i).getDrinkID() + "\t" + dataMinuman.get(i).getNamaMinuman() + 
            " \t " + dataMinuman.get(i).getSize() + " \t\t " + dataMinuman.get(i).getHarga());
        } 
    }

    // pesan sesuai input customer
    public static Order inputOrder(){
        int orderID;
        int foodID;
        int drinkID;
        int jumlahF;
        int jumlahD;
        int totalHarga = 0;
        input = new Scanner(System.in);

        System.out.print("Order ID: ");
        orderID = input.nextInt();
        System.out.print("Kode Makanan: ");
        foodID = input.nextInt();
        System.out.print("Jumlah: ");
        jumlahF = input.nextInt();
        System.out.println("Pesanan: " + foodID + "(" + jumlahF + ")");
        System.out.print("Kode Minuman: ");
        drinkID = input.nextInt();
        input.nextLine();
        System.out.print("Jumlah: ");
        jumlahD = input.nextInt();
        System.out.println("Pesanan: " + drinkID + "(" + jumlahD + ")");
        totalHarga = hitungTotalHarga(foodID, jumlahF, drinkID, jumlahD);
        System.out.println("Total Harga: " + totalHarga);
        return new Order(orderID, foodID, drinkID, jumlahF, jumlahD, totalHarga);
    }

    // function untuk mengambil data makanan
    public static Makanan getDataMakanan(int foodID) {
        for(int i =0;i<dataMakanan.size();i++) {
            if(dataMakanan.get(i).getFoodID() == foodID) {
                return dataMakanan.get(i);
            }
        }
        return null;
    }

    // function untuk mengambil data minuman
    public static Minuman getDataMinuman(int drinkID) {
        for(int i =0;i<dataMinuman.size();i++) {
            if(dataMinuman.get(i).getDrinkID() == drinkID) {
                return dataMinuman.get(i);
            }
        }
        return null;
    }

    // function untuk menghitung total harga
    public static int hitungTotalHarga(int foodID, int jumlahF, int drinkID, int jumlahD){
        int hargaF = getDataMakanan(foodID).getHarga();
        int hargaD = getDataMinuman(drinkID).getHarga();
        return (hargaF * jumlahF) + (hargaD * jumlahD);
    }

    // function untuk mengambil data order
    public static Order getDataOrder(int orderID) {
        for(int i=0;i<dataOrder.size();i++) {
            if(dataOrder.get(i).getOrderID() == orderID) {
                return dataOrder.get(i);
            }
        }
        return null;
    }

    public static void showAllOrder(){
        for(int i=0;i<dataOrder.size();i++) {
            System.out.println("Order ke-" + i);
            System.out.println("No Order: " + dataOrder.get(i).getOrderID());
            System.out.println("Total Harga: " + dataOrder.get(i).getTotalHarga());
        }
    }

    // menampilkan order
    public static void showOrder(){
        int orderID;
        int foodID;
        int drinkID;

        System.out.print("Order ID: ");
        orderID = input.nextInt();

        Order dataOrder = getDataOrder(orderID);
        foodID = getDataOrder(orderID).getFoodID();
        drinkID = getDataOrder(orderID).getDrinkID();
        
        Makanan dataMakanan = getDataMakanan(foodID);
        Minuman dataMinuman = getDataMinuman(drinkID);

        System.out.println("Pesanan: ");
        System.out.println("Nama Makanan: " + dataMakanan.getNamaMakanan());
        System.out.println("Jumlah: " + dataOrder.getJumlahF() + " * " + dataMakanan.getHarga());
        System.out.println("Nama Minuman: " + dataMinuman.getNamaMinuman() + " (" + dataMinuman.getSize() + ")");
        System.out.println("Jumlah: " + dataOrder.getJumlahD() + " * " + dataMinuman.getHarga());
        System.out.println("Total Harga: " + dataOrder.getTotalHarga());
    }
}
