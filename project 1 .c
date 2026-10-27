#include <stdio.h>

void engineDiagnosis(void);
void overheatingDiagnosis(void);
void batteryDiagnosis(void);
void brakeDiagnosis(void);
void fuelEfficiencyDiagnosis(void);
void tyreDiagnosis(void);

/* Ask the engine-starting questions and suggest possible causes. */
void engineDiagnosis(void)
{
    int dashboardLights;
    int engineCranks;

    printf("\n--- Engine Not Starting Diagnosis ---\n");

    printf("Do the dashboard lights turn on? (1 = Yes, 0 = No): ");
    scanf("%d", &dashboardLights);
    while (dashboardLights != 0 && dashboardLights != 1)
    {
        printf("Please enter 1 for Yes or 0 for No: ");
        scanf("%d", &dashboardLights);
    }

    printf("Does the engine crank when you try to start it? (1 = Yes, 0 = No): ");
    scanf("%d", &engineCranks);
    while (engineCranks != 0 && engineCranks != 1)
    {
        printf("Please enter 1 for Yes or 0 for No: ");
        scanf("%d", &engineCranks);
    }

    printf("\nYour answers: Dashboard lights = %d, Engine cranks = %d\n",
           dashboardLights, engineCranks);

    if (dashboardLights == 0)
    {
        if (engineCranks == 0)
        {
            printf("Possible cause: The battery may be weak, discharged, or disconnected.\n");
            printf("Recommendation: Check the battery connections and have the battery tested.\n");
        }
        else
        {
            printf("Possible cause: There may be an electrical problem affecting the dashboard.\n");
            printf("Recommendation: Ask a professional to inspect the electrical system.\n");
        }
    }
    else
    {
        if (engineCranks == 0)
        {
            printf("Possible cause: A starter-system or electrical fault may be present.\n");
            printf("Recommendation: Have the starter, relay, and wiring inspected.\n");
        }
        else
        {
            printf("Possible cause: A fuel, ignition, or engine-management issue may be present.\n");
            printf("Recommendation: Arrange a professional diagnostic inspection.\n");
        }
    }
}

/* Ask about overheating symptoms and give basic safety advice. */
void overheatingDiagnosis(void)
{
    int warningLight;
    int coolantLeak;

    printf("\n--- Engine Overheating Diagnosis ---\n");

    printf("Is the temperature warning light on? (1 = Yes, 0 = No): ");
    scanf("%d", &warningLight);
    while (warningLight != 0 && warningLight != 1)
    {
        printf("Please enter 1 for Yes or 0 for No: ");
        scanf("%d", &warningLight);
    }

    printf("Are there signs of a coolant leak? (1 = Yes, 0 = No): ");
    scanf("%d", &coolantLeak);
    while (coolantLeak != 0 && coolantLeak != 1)
    {
        printf("Please enter 1 for Yes or 0 for No: ");
        scanf("%d", &coolantLeak);
    }

    printf("\nYour answers: Warning light = %d, Coolant leak signs = %d\n",
           warningLight, coolantLeak);

    if (warningLight == 1)
    {
        if (coolantLeak == 1)
        {
            printf("Possible cause: A coolant leak may be causing the engine to overheat.\n");
        }
        else
        {
            printf("Possible cause: A cooling fan, thermostat, or coolant-circulation problem may be present.\n");
        }
        printf("Recommendation: Stop safely, switch off the engine, and arrange professional assistance.\n");
    }
    else
    {
        if (coolantLeak == 1)
        {
            printf("Possible cause: A coolant leak may lead to overheating.\n");
            printf("Recommendation: Have the cooling system inspected before continuing a long drive.\n");
        }
        else
        {
            printf("Possible cause: The issue may be intermittent or not visible from these answers.\n");
            printf("Recommendation: Monitor the temperature and stop safely if the engine overheats.\n");
        }
    }

    printf("Safety warning: Never open the radiator cap while the engine is hot.\n");
}

/* Ask about starting and lighting symptoms that may involve the battery. */
void batteryDiagnosis(void)
{
    int startsSlowly;
    int dimLights;

    printf("\n--- Battery Problems Diagnosis ---\n");

    printf("Does the engine start slowly? (1 = Yes, 0 = No): ");
    scanf("%d", &startsSlowly);
    while (startsSlowly != 0 && startsSlowly != 1)
    {
        printf("Please enter 1 for Yes or 0 for No: ");
        scanf("%d", &startsSlowly);
    }

    printf("Do the dashboard lights appear dim? (1 = Yes, 0 = No): ");
    scanf("%d", &dimLights);
    while (dimLights != 0 && dimLights != 1)
    {
        printf("Please enter 1 for Yes or 0 for No: ");
        scanf("%d", &dimLights);
    }

    printf("\nYour answers: Slow start = %d, Dim lights = %d\n",
           startsSlowly, dimLights);

    if (startsSlowly == 1 && dimLights == 1)
    {
        printf("Possible cause: The battery may be weak, or the charging system may have a fault.\n");
        printf("Recommendation: Have the battery and alternator tested by a professional.\n");
    }
    else if (startsSlowly == 1)
    {
        printf("Possible cause: The battery may be losing charge, or the starter may need inspection.\n");
        printf("Recommendation: Have the battery and starting system checked.\n");
    }
    else if (dimLights == 1)
    {
        printf("Possible cause: A battery connection or charging-system issue may be present.\n");
        printf("Recommendation: Ask a professional to inspect the battery and charging system.\n");
    }
    else
    {
        printf("Possible cause: These answers do not show a common battery symptom.\n");
        printf("Recommendation: Seek inspection if other battery warning signs appear.\n");
    }
}

/* Ask about brake symptoms and give safety-focused suggestions. */
void brakeDiagnosis(void)
{
    int softPedal;
    int unusualNoise;

    printf("\n--- Brake Problems Diagnosis ---\n");

    printf("Does the brake pedal feel unusually soft? (1 = Yes, 0 = No): ");
    scanf("%d", &softPedal);
    while (softPedal != 0 && softPedal != 1)
    {
        printf("Please enter 1 for Yes or 0 for No: ");
        scanf("%d", &softPedal);
    }

    printf("Do you hear unusual noises while braking? (1 = Yes, 0 = No): ");
    scanf("%d", &unusualNoise);
    while (unusualNoise != 0 && unusualNoise != 1)
    {
        printf("Please enter 1 for Yes or 0 for No: ");
        scanf("%d", &unusualNoise);
    }

    printf("\nYour answers: Soft pedal = %d, Unusual noise = %d\n",
           softPedal, unusualNoise);

    if (softPedal == 1)
    {
        if (unusualNoise == 1)
        {
            printf("Possible cause: A brake-system issue and worn brake components may be present.\n");
        }
        else
        {
            printf("Possible cause: Low brake fluid, air in the brake lines, or another brake-system issue may be present.\n");
        }
        printf("Safety advice: Stop in a safe location and arrange professional assistance.\n");
    }
    else if (unusualNoise == 1)
    {
        printf("Possible cause: Brake pads, discs, or other brake components may be worn.\n");
        printf("Recommendation: Arrange a professional brake inspection as soon as possible.\n");
    }
    else
    {
        printf("Possible cause: These answers do not show a common brake symptom.\n");
        printf("Recommendation: Seek professional assistance if braking performance changes.\n");
    }
}

/* Ask about fuel use and simple factors that can reduce efficiency. */
void fuelEfficiencyDiagnosis(void)
{
    int mileageDecreased;
    int tyrePressureChecked;

    printf("\n--- Low Fuel Efficiency Diagnosis ---\n");

    printf("Has the vehicle's mileage decreased recently? (1 = Yes, 0 = No): ");
    scanf("%d", &mileageDecreased);
    while (mileageDecreased != 0 && mileageDecreased != 1)
    {
        printf("Please enter 1 for Yes or 0 for No: ");
        scanf("%d", &mileageDecreased);
    }

    printf("Has the tyre pressure been checked recently? (1 = Yes, 0 = No): ");
    scanf("%d", &tyrePressureChecked);
    while (tyrePressureChecked != 0 && tyrePressureChecked != 1)
    {
        printf("Please enter 1 for Yes or 0 for No: ");
        scanf("%d", &tyrePressureChecked);
    }

    printf("\nYour answers: Mileage decreased = %d, Tyre pressure checked = %d\n",
           mileageDecreased, tyrePressureChecked);

    if (mileageDecreased == 1)
    {
        if (tyrePressureChecked == 0)
        {
            printf("Possible cause: Incorrect tyre pressure may be reducing fuel efficiency.\n");
            printf("Recommendation: Check tyre pressure using the vehicle manufacturer's recommendation.\n");
        }
        else
        {
            printf("Possible cause: Maintenance needs, traffic conditions, or driving habits may affect fuel efficiency.\n");
            printf("Recommendation: Review servicing needs and arrange a professional inspection if the problem continues.\n");
        }
    }
    else
    {
        if (tyrePressureChecked == 0)
        {
            printf("Possible cause: No reduced mileage was selected, but tyre pressure should still be checked regularly.\n");
            printf("Recommendation: Check tyre pressure using the vehicle manufacturer's recommendation.\n");
        }
        else
        {
            printf("Possible cause: These answers do not show a clear fuel-efficiency concern.\n");
            printf("Recommendation: Continue regular servicing and monitor fuel use.\n");
        }
    }
}

/* Ask about tyre condition and pressure-warning symptoms. */
void tyreDiagnosis(void)
{
    int visibleDamage;
    int pressureWarning;

    printf("\n--- Tyre Problems Diagnosis ---\n");

    printf("Does the tyre appear visibly damaged? (1 = Yes, 0 = No): ");
    scanf("%d", &visibleDamage);
    while (visibleDamage != 0 && visibleDamage != 1)
    {
        printf("Please enter 1 for Yes or 0 for No: ");
        scanf("%d", &visibleDamage);
    }

    printf("Is the tyre pressure warning light on? (1 = Yes, 0 = No): ");
    scanf("%d", &pressureWarning);
    while (pressureWarning != 0 && pressureWarning != 1)
    {
        printf("Please enter 1 for Yes or 0 for No: ");
        scanf("%d", &pressureWarning);
    }

    printf("\nYour answers: Visible damage = %d, Pressure warning = %d\n",
           visibleDamage, pressureWarning);

    if (visibleDamage == 1)
    {
        if (pressureWarning == 1)
        {
            printf("Possible cause: The tyre may be damaged, deflated, or losing air.\n");
        }
        else
        {
            printf("Possible cause: The tyre may have a cut, bulge, puncture, or other visible damage.\n");
        }
        printf("Safety advice: Stop in a safe location and arrange professional assistance.\n");
    }
    else if (pressureWarning == 1)
    {
        printf("Possible cause: One or more tyres may have incorrect pressure or a slow leak.\n");
        printf("Recommendation: Check tyre pressure when the tyres are cool and arrange an inspection if needed.\n");
    }
    else
    {
        printf("Possible cause: These answers do not show a clear tyre problem.\n");
        printf("Recommendation: Continue regular checks of tyre pressure and tread condition.\n");
    }
}

int main(void)
{
    int choice;

    printf("VEHICLE DIAGNOSTIC ASSISTANT\n");

    do
    {
        printf("\n1. Engine Not Starting\n");
        printf("2. Engine Overheating\n");
        printf("3. Battery Problems\n");
        printf("4. Brake Problems\n");
        printf("5. Low Fuel Efficiency\n");
        printf("6. Tyre Problems\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                engineDiagnosis();
                break;
            case 2:
                overheatingDiagnosis();
                break;
            case 3:
                batteryDiagnosis();
                break;
            case 4:
                brakeDiagnosis();
                break;
            case 5:
                fuelEfficiencyDiagnosis();
                break;
            case 6:
                tyreDiagnosis();
                break;
            case 7:
                printf("Thank you for using the Vehicle Diagnostic Assistant. Goodbye!\n");
                break;
            default:
                printf("Invalid selection. Please enter a number from 1 to 7.\n");
        }
    } while (choice != 7);

    return 0;
}