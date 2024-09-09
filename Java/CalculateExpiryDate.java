import java.util.Scanner;
import java.util.Calendar;
import java.util.Date;
import java.text.SimpleDateFormat;
import java.text.ParseException;
import java.util.*;

public class UserInterface {

    public static Date parseDateFunction(String date) throws ParseException {
        SimpleDateFormat d = new SimpleDateFormat("dd/MM/yyyy");
        d.setLenient(false);
        return d.parse(date);
    }
    
    public static Date calculateExpireDate(Date manufactureDate, int months) {
        Calendar cal = new GregorianCalendar();
        cal.setTime(manufactureDate);
        cal.add(Calendar.MONTH, months);
        return cal.getTime();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Manufacturing Date");
        String manuDateString = sc.next();
        Date manuDate = null;

        try {
            manuDate = parseDateFunction(manuDateString);
            System.out.println("Enter the Month");
            int month = sc.nextInt();
            Date expiryDate = calculateExpireDate(manuDate, month);
            SimpleDateFormat d2 = new SimpleDateFormat("dd/MM/yyyy");
            String expDate = d2.format(expiryDate);
            System.out.println(expDate + " is the expiry date");
        } catch (Exception e) {
            System.out.println(manuDateString + " is not a valid date");
        }
    }
}
