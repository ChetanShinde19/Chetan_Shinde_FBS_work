class Player
{
	String name;
	int age;
	String country;
	int matchesPlayed;
	int jerseyNumber;
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
	public String getCountry() {
		return this.country;
	}
	public void setCountry(String country) {
		this.country = country;
	}
	public int getMatchesPlayed() {
		return this.matchesPlayed;
	}
	public void setMatchesPlayed(int matchesPlayed) {
		this.matchesPlayed = matchesPlayed;
	}
	public int getJerseyNumber() {
		return this.jerseyNumber;
	}
	public void setJerseyNumber(int jerseyNumber) {
		this.jerseyNumber = jerseyNumber;
	}
	public Player(String name, int age, String country, int matchesPlayed, int jerseyNumber) {
		super();
		this.name = name;
		this.age = age;
		this.country = country;
		this.matchesPlayed = matchesPlayed;
		this.jerseyNumber = jerseyNumber;
	}
	
	void display()
	{
		System.out.println("PlayerDetails: ");
		System.out.println("Name: "+getName());
		System.out.println("Age: "+getAge());
		System.out.println("Country: "+getCountry());
		System.out.println("Jersey Number: "+getJerseyNumber());
	}
}

class CricketPlayer extends Player
{
	int totalRuns;
	int totalWickets;
	String battingStyle;
	String bowlinngStyle;
	public int getTotalRuns() {
		return this.totalRuns;
	}
	public void setTotalRuns(int totalRuns) {
		this.totalRuns = totalRuns;
	}
	public int getTotalWickets() {
		return this.totalWickets;
	}
	public void setTotalWickets(int totalWickets) {
		this.totalWickets = totalWickets;
	}
	public String getBattingStyle() {
		return this.battingStyle;
	}
	public void setBattingStyle(String battingStyle) {
		this.battingStyle = battingStyle;
	}
	public String getBowlinngStyle() {
		return this.bowlinngStyle;
	}
	public void setBowlinngStyle(String bowlinngStyle) {
		this.bowlinngStyle = bowlinngStyle;
	}
	
	public CricketPlayer(String name, int age, String country, int matchesPlayed, int jerseyNumber, int totalRuns,
			int totalWickets, String battingStyle, String bowlinngStyle) {
		super(name, age, country, matchesPlayed, jerseyNumber);
		this.totalRuns = totalRuns;
		this.totalWickets = totalWickets;
		this.battingStyle = battingStyle;
		this.bowlinngStyle = bowlinngStyle;
	}
	
	@Override
	void display()
	{
		super.display();
		System.out.println("Total Runs: "+getTotalRuns());
		System.out.println("Total Wickets: "+getTotalWickets());
		System.out.println("Batting Style: "+getBattingStyle());
		System.out.println("Bowling Style: "+getBowlinngStyle());
		
	}
}

class FootBall extends Player
{
	int totalGoals;
	String playingPosition;
	public int getTotalGoals() {
		return this.totalGoals;
	}
	public void setTotalGoals(int totalGoals) {
		this.totalGoals = totalGoals;
	}
	public String getPlayingPosition() {
		return this.playingPosition;
	}
	public void setPlayingPosition(String playingPosition) {
		this.playingPosition = playingPosition;
	}
	public FootBall(String name, int age, String country, int matchesPlayed, int jerseyNumber, int totalGoals,
			String playingPosition) {
		super(name, age, country, matchesPlayed, jerseyNumber);
		this.totalGoals = totalGoals;
		this.playingPosition = playingPosition;
	}
	
	@Override
	void display()
	{
		super.display();
		System.out.println("Total  Goals: "+getTotalGoals());
		System.out.println("Playing Postion: "+getPlayingPosition());
	}
}

public class Question_04 {

	public static void main(String[] args) {
		CricketPlayer player1 = new CricketPlayer("Mahesh Deokar", 25, "India", 50, 19, 12, 5, "right hand", "Left hand");
		
		FootBall footBallPlayer1 = new FootBall("Chetan shinde", 22, "India", 20, 19, 4, "Center");
		
		System.out.println("Cricket Player:");
		player1.display();
		System.out.println();
		
		System.out.println("FootBall Player:");
		footBallPlayer1.display();
		System.out.println();
		
	}

}
