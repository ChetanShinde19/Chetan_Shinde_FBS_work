class Artist
{
	String name;
	int age;
	public String getName() {
		return this.name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return this.age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public Artist(String name, int age) {
		super();
		this.name = name;
		this.age = age;
	}
	 
	void display()
	{
		System.out.println("Name: "+getName());
		System.out.println("Age: "+getAge());
	}
}

class Painter extends Artist
{
	String paintingStyle;
	String mediumUsed;
	int numberOfPaintings;
	public String getPaintingStyle() {
		return this.paintingStyle;
	}
	public void setPaintingStyle(String paintingStyle) {
		this.paintingStyle = paintingStyle;
	}
	public String getMediumUsed() {
		return this.mediumUsed;
	}
	public void setMediumUsed(String mediumUsed) {
		this.mediumUsed = mediumUsed;
	}
	public int getNumberOfPaintings() {
		return this.numberOfPaintings;
	}
	public void setNumberOfPaintings(int numberOfPaintings) {
		this.numberOfPaintings = numberOfPaintings;
	}
	public Painter(String name, int age, String paintingStyle, String mediumUsed, int numberOfPaintings) {
		super(name, age);
		this.paintingStyle = paintingStyle;
		this.mediumUsed = mediumUsed;
		this.numberOfPaintings = numberOfPaintings;
	}
	
	@Override
	void display()
	{
		super.display();
		System.out.println("Painting: "+getPaintingStyle());
		System.out.println("medium Use: "+getMediumUsed());
		System.out.println("Number of Paintings: "+getNumberOfPaintings());
	}
}

class Musician extends Artist
{
	String instrument;
	String musicGenre;
	int numberOfAlbums;
	public String getInstrument() {
		return this.instrument;
	}
	public void setInstrument(String instrument) {
		this.instrument = instrument;
	}
	public String getMusicGenre() {
		return this.musicGenre;
	}
	public void setMusicGenre(String musicGenre) {
		this.musicGenre = musicGenre;
	}
	public int getNumberOfAlbums() {
		return this.numberOfAlbums;
	}
	public void setNumberOfAlbums(int numberOfAlbums) {
		this.numberOfAlbums = numberOfAlbums;
	}
	
	public Musician(String name, int age, String instrument, String musicGenre, int numberOfAlbums) {
		super(name, age);
		this.instrument = instrument;
		this.musicGenre = musicGenre;
		this.numberOfAlbums = numberOfAlbums;
	}
	
	@Override
	void display()
	{
		super.display();
		System.out.println("Instrument: "+getInstrument());
		System.out.println("Music Genre: "+getMusicGenre());
		System.out.println("Number of Albums: "+getNumberOfAlbums());
	}
}

class Actor extends  Artist
{
	String filmIndustry;
	int numberOfMovies;
	public String getFilmIndustry() {
		return this.filmIndustry;
	}
	public void setFilmIndustry(String filmIndustry) {
		this.filmIndustry = filmIndustry;
	}
	public int getNumberOfMovies() {
		return this.numberOfMovies;
	}
	public void setNumberOfMovies(int numberOfMovies) {
		this.numberOfMovies = numberOfMovies;
	}
	public Actor(String name, int age, String filmIndustry, int numberOfMovies) {
		super(name, age);
		this.filmIndustry = filmIndustry;
		this.numberOfMovies = numberOfMovies;
	}
	
	@Override
	void display()
	{
		super.display();
		System.out.println("Film Industry: "+getFilmIndustry());
		System.out.println("Number of Movies: "+getNumberOfMovies());
	}
}
public class Question_05 {
	public static void main(String[] args) {
		Painter painter1 = new Painter("Chetan shinde", 22, "Portrait", "yes", 19);
		Musician musician1 = new Musician("Pratik Jadhav", 22, "Gitar", "Romantic",15);
		Actor actor1 =  new Actor("Vaibhav Shinde", 18, "T-series", 10);
		
		System.out.println("Artist Details: ");

		System.out.println("Painter: ");
		painter1.display();
		System.out.println("\nMusician:");
		musician1.display();
		System.out.println("\nActor: ");
		actor1.display();
	}

}
