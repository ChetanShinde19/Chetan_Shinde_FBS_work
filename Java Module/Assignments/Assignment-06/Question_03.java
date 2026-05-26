import java.util.Scanner;

abstract class InsurancePolicy {

    String policyHolderName;
    double basePremium;

    
    public InsurancePolicy(String policyHolderName,
                           double basePremium) {

        this.policyHolderName = policyHolderName;
        this.basePremium = basePremium;
    }

    abstract double calculatePremium();

    void printPolicyDetails() {

        System.out.println("\n===== POLICY DETAILS =====");

        System.out.println("Policy Holder Name : "
                + policyHolderName);

        System.out.println("Base Premium       : Rs."
                + basePremium);

        System.out.println("Final Premium      : Rs."
                + calculatePremium());
    }
}


class CarInsurance extends InsurancePolicy {

    int carAgeInYears;
    boolean hadAccidentInLastYear;
    double carValue;

    public CarInsurance(String policyHolderName,
                        double basePremium,
                        int carAgeInYears,
                        boolean hadAccidentInLastYear,
                        double carValue) {

        super(policyHolderName, basePremium);

        this.carAgeInYears = carAgeInYears;
        this.hadAccidentInLastYear =
                hadAccidentInLastYear;

        this.carValue = carValue;
    }

    @Override
    double calculatePremium() {

        double premium = basePremium;

        if (carAgeInYears <= 3) {

            premium += premium * 0.10;

        }
        else if (carAgeInYears <= 7) {

            premium += premium * 0.20;

        }
        else {

            premium += premium * 0.30;
        }

        if (hadAccidentInLastYear) {

            premium += premium * 0.25;

        }
        else {

            premium -= premium * 0.10;
        }

        if (carValue > 1000000) {

            premium += 2000;
        }

        return premium;
    }
}


class HealthInsurance extends InsurancePolicy {

    int age;
    boolean isSmoker;
    boolean hasPreExistingDisease;

    public HealthInsurance(String policyHolderName,
                           double basePremium,
                           int age,
                           boolean isSmoker,
                           boolean hasPreExistingDisease) {

        super(policyHolderName, basePremium);

        this.age = age;
        this.isSmoker = isSmoker;
        this.hasPreExistingDisease =
                hasPreExistingDisease;
    }

    @Override
    double calculatePremium() {

        double premium = basePremium;

        if (age < 30) {

            premium += premium * 0.10;

        }
        else if (age <= 45) {

            premium += premium * 0.25;

        }
        else {

            premium += premium * 0.40;
        }

        if (isSmoker) {

            premium += premium * 0.30;

        }
        else {

            premium -= premium * 0.05;
        }

        if (hasPreExistingDisease) {

            premium += premium * 0.20;
        }

        return premium;
    }
}


public class Question_03 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        InsurancePolicy policy = null;

        System.out.println(
                "===== INSURANCE PREMIUM CALCULATOR =====");

        System.out.println("1. Car Insurance");
        System.out.println("2. Health Insurance");

        System.out.print("Select Policy Type: ");

        int choice = sc.nextInt();

        sc.nextLine();

        System.out.print(
                "Enter Policy Holder Name: ");

        String name = sc.nextLine();

        System.out.print("Enter Base Premium: ");

        double premium = sc.nextDouble();

        if (choice == 1) {

            System.out.print(
                    "Enter Car Age (Years): ");

            int carAge = sc.nextInt();

            System.out.print(
                    "Had Accident Last Year? (true/false): ");

            boolean accident = sc.nextBoolean();

            System.out.print(
                    "Enter Car Value: ");

            double carValue = sc.nextDouble();

            policy = new CarInsurance(
                    name,
                    premium,
                    carAge,
                    accident,
                    carValue);
        }

        
        else if (choice == 2) {

            System.out.print("Enter Age: ");

            int age = sc.nextInt();

            System.out.print(
                    "Is Smoker? (true/false): ");

            boolean smoker = sc.nextBoolean();

            System.out.print(
                    "Has Pre-existing Disease? (true/false): ");

            boolean disease = sc.nextBoolean();

            
            policy = new HealthInsurance(
                    name,
                    premium,
                    age,
                    smoker,
                    disease);
        }

        else {

            System.out.println("Invalid Choice!");
            System.exit(0);
        }

        policy.printPolicyDetails();

        sc.close();
    }
}