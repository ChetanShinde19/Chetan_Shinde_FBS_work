class Vehicle
{
	String vehicleNumber;
	String model;
	String companyName;
	int noOfWheels;
	long price;
	
	public String getVehicleNumber() {
		return vehicleNumber;
	}
	public void setVehicleNumber(String vehicleNumber) {
		this.vehicleNumber = vehicleNumber;
	}
	public String getModel() {
		return model;
	}
	public void setModel(String model) {
		this.model = model;
	}
	public String getCompanyName() {
		return companyName;
	}
	public void setCompanyName(String companyName) {
		this.companyName = companyName;
	}
	public int getNoOfWheels() {
		return noOfWheels;
	}
	public void setNoOfWheels(int noOfWheels) {
		this.noOfWheels = noOfWheels;
	}
	public double getPrice() {
		return price;
	}
	public void setPrice(long price) {
		this.price = price;
	}
	
	public Vehicle() {
		super();
		this.vehicleNumber = "Not Given";
		this.model = "Not GIven";
		this.companyName = "Not Given";
		this.noOfWheels = 0;
		this.price = 0;
	}
	Vehicle(String vehicleNumber, String model, String companyName, int noOfWheels, long price) {
		super();
		this.vehicleNumber = vehicleNumber;
		this.model = model;
		this.companyName = companyName;
		this.noOfWheels = noOfWheels;
		this.price = price;
	}
	
	public void display()
	{
		
		System.out.println("Vehicle Number: "+getVehicleNumber());
		System.out.println("Model: "+getModel());
		System.out.println("Company Name: "+getCompanyName());
		System.out.println("No.of Wheels: "+getNoOfWheels());
		System.out.println("Price: "+getPrice()+"/-");
	}
}


//bike 
class Bike extends Vehicle{
	int noOfStands;
	int noOfHelmets;
	String bikeCategory;

	public int getNoOfStands() {
		return noOfStands;
	}
	public void setNoOfStands(int noOfStands) {
		this.noOfStands = noOfStands;
	}
	public int getNoOfHelmets() {
		return noOfHelmets;
	}
	public void setNoOfHelmets(int noOfHelmets) {
		this.noOfHelmets = noOfHelmets;
	}
	public String getBikeCategory() {
		return bikeCategory;
	}
	public void setBikeCategory(String bikeCategory) {
		this.bikeCategory = bikeCategory;
	}
	
	Bike()
	{
		super();
		this.noOfStands=0;
		this.noOfHelmets=0;
		this.bikeCategory="Not Specified";
	}
	Bike(String vehicleNumber,String model,String companyName,int noOfWheels,int noOfStands, int noOfHelmets, String bikeCategory,long price) {
		super(vehicleNumber,model,companyName, noOfWheels, price);
		this.noOfStands = noOfStands;
		this.noOfHelmets = noOfHelmets;
		this.bikeCategory = bikeCategory;
	}
	
	@Override
	public void display()
	{
		super.display();
		System.out.println("No.of Stands: "+getNoOfStands());
		System.out.println("No.of Helmets: "+getNoOfHelmets());
		System.out.println("Bike Category: "+getBikeCategory());
		
	}
}


//car
class Car extends Vehicle
{
	String hasPowerSteering;
	String driveMode;
	String parkingAssistSensors;
	
	
	public String getHasPowerSteering() {
		return hasPowerSteering;
	}

	public void setHasPowerSteering(String hasPowerSteering) {
		this.hasPowerSteering = hasPowerSteering;
	}

	public String getDriveMode() {
		return driveMode;
	}

	public void setDriveMode(String driveMode) {
		this.driveMode = driveMode;
	}

	public String getParkingAssistSensors() {
		return parkingAssistSensors;
	}

	public void setParkingAssistSensors(String parkingAssistSensors) {
		this.parkingAssistSensors = parkingAssistSensors;
	}

	Car() {
		super();
		this.hasPowerSteering="Not Specified";
		this.driveMode="Not Specified";
		this.parkingAssistSensors="Not Specified";
	}

	public Car(String vehicleNumber,String model,String companyName,int noOfWheels,long price,String hasPowerSteering, String driveMode, String parkingAssistSensors) {
		super(vehicleNumber,model,companyName, noOfWheels, price);
		this.hasPowerSteering = hasPowerSteering;
		this.driveMode = driveMode;
		this.parkingAssistSensors = parkingAssistSensors;
	}
	
	@Override
	public void display()
	{
		super.display();
	 System.out.println("Power Steering: "+getHasPowerSteering());	
	 System.out.println("Drive Mode: "+getDriveMode());
	 System.out.println("Parking Assist Sensors: "+getParkingAssistSensors());
	}
}

//bus
class Bus extends Vehicle
{
	int passengerCapacity;
	int standingCapacity;
	
	
	public int getPassengerCapacity() {
		return passengerCapacity;
	}

	public void setPassengerCapacity(int passengerCapacity) {
		this.passengerCapacity = passengerCapacity;
	}

	public double getStandingCapacity() {
		return standingCapacity;
	}

	public void setStandingCapacity(int standingCapacity) {
		this.standingCapacity = standingCapacity;
	}

	Bus()
	{
		super();
		this.passengerCapacity = 0;
		this.standingCapacity = 0;
	}
	
	Bus(String vehicleNumber,String model,String companyName,int noOfWheels,long price,int passengerCapacity, int standingCapacity) {
		super(vehicleNumber,model,companyName, noOfWheels,price);
		this.passengerCapacity = passengerCapacity;
		this.standingCapacity = standingCapacity;
		this.price=price;
	}
	
	@Override
	public void display()
	{
		super.display();
		System.out.println("Passenger Capacity: "+getPassengerCapacity());
		System.out.println("Standing Capacity: "+getStandingCapacity());
	}

}
public class Question_02 {

	public static void main(String[] args) {
		 
		Vehicle v1;
		v1 = new Bus("MH10DJ1900","V7L", "VOLVO", 10, 8000000L, 50, 0);
		
		v1 = new Bike("MH10DG5526", "GT 650", "Royal Enfield", 2, 2, 2, "Roadster/Street Bike", 300000);
		
		v1 = new Car("MH10CS0019", "M5", "BMW", 4, 9000000, "Yes", "Sports", "Active");
		
		System.out.println("Vehicle Details:");
		v1.display();
		System.out.println();
		v1.display();
		System.out.println();
		v1.display();

	}

}
