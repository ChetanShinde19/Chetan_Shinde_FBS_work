import java.util.Iterator;

class Artist {
	String ArtistName;

	public Artist(String artistName) {
		super();
		ArtistName = artistName;
	}

	public String getArtistName() {
		return ArtistName;
	}

}

class Painter extends Artist {
	String style;

	public Painter(String artistName, String style) {
		super(artistName);
		this.style = style;
	}

	public String getStyle() {
		return style;
	}

}

class Musician extends Artist {
	String inutrument;

	public Musician(String artistName, String musician) {
		super(artistName);
		this.inutrument = musician;
	}

	public String getinstument() {
		return inutrument;
	}

}

class Actor extends Artist {
	String genre;

	public Actor(String artistName, String genre) {
		super(artistName);
		this.genre = genre;
	}

	public String getGenre() {
		return genre;
	}
}

public class CulturalFest {

	public static void checkMusicEventEligibility(Artist artist) {
		if (artist instanceof Musician) {
			Musician musician = (Musician) artist;
			System.out.println("Musician " + musician.getArtistName() + "is allowed for the"
					+ " Music Event and is playing" + musician.getinstument());
		} else {
			System.out.println(artist.getArtistName() + " is not allowed for the Music Event.");
		}
	}

	public static void main(String[] args) {
		Artist[] artists = new Artist[5];

		System.out.println("=====Cultural Fest - Music Event eligibility Checks=====");
		artists[0] = new Painter("Leonardo", "Renaissance");
		artists[1] = new Musician("Ravi Shankar", "Sitar");
		artists[2] = new Actor("Naseeruddin Shah", "Drama");
		artists[3] = new Musician("A.R. Rahman", "Piano");
		artists[4] = new Painter("Picasso", "Cubism");

		for (Artist artist : artists) {
			checkMusicEventEligibility(artist);
		}
	}

}
