class Time {
    int hrs, min, sec;

    public Time(int hrs, int min, int sec) {
        this.hrs = hrs;
        this.min = min;
        this.sec = sec;
    }

    // add two Time objects
    public Time add(Time t) {

        int s = this.sec + t.sec;
        int m = this.min + t.min;
        int h = this.hrs + t.hrs;

        // carry forward
        m += s / 60;
        s = s % 60;

        h += m / 60;
        m = m % 60;

        h = h % 24; // 24-hour format

        return new Time(h, m, s);
    }

    void display() {
        System.out.printf("%02d:%02d:%02d\n", hrs, min, sec);
    }
}

public class Question_4 {
    public static void main(String[] args) {

        Time t1 = new Time(10, 78, 50);
        Time t2 = new Time(12, 84, 80);

        Time t3 = t1.add(t2);

        t3.display();
    }
}