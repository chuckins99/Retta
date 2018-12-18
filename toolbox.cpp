// Chuck's Toolbox // Open Source // Some Standard to metric conversions
// First Project  // Repo : 

//Made by Caughlin Higgins
// Collaberated by :

#include <iostream>

using namespace std;

int main()
{   cout << endl;
    
    int desired_number; {};
    
    cout << "|~~~~~~~~~~~~ CHUCKS TOOLBOX ~~~~~~~~~~~~~|" << endl;
    cout << "|~~~~~~~~~~~~ Version 1.0.0  ~~~~~~~~~~~~~|" << endl;
    cout << "|~~~~~~~~~~~~ Tools Available : ~~~~~~~~~~|" << endl;
    cout << "|~~1~~| |~~2~~| |~~3~~| |~~4~~| |~~5~~| |6|" << endl;
    cout << "|  $  | |     | |     | |     | |     | Esc" << endl;
    cout << "CAN2USD |Speed| |     | |     | |     |    " << endl;
    cout << "        KMH2MPH |Lngth| |     | |     |    " << endl;
    cout << "                CM2INCH | Vol | |     |    " << endl;
    cout << "                        LIT2GAL |Temp |    " << endl;
    cout << "                                CEL2FAR    " << endl;
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
    cout << endl;
    cout << "Please Enter Desired Tool # :" << endl;
    
    cin >> desired_number;
    
    if (desired_number == 1){ 
        cout << "You chose tool # 1 - Canadian to USD dollar converter!" << endl;
        cout << endl;
        cout << "Please Enter CAN dollar amount :" << endl;
        double can_dol_amt = {0.0};
        double us_value = {0.0};
        const double can_value = 1.33; 
        cin >> can_dol_amt;
        us_value = can_dol_amt * can_value;
        cout << "Your Canadian dollar amount is worth " << us_value << " in USD" << endl;
        }
    
    if (desired_number == 2){
        cout << "You chose tool # 2 - Kilometers/hour to Miles/hour converter!" << endl;
        cout << endl;
        cout << "Please enter speed in Kilometers : " << endl;
        double speed_km = {0.0};
        double speed_ml = {0.0};
        double km_ml_conv = {.621};
        cin >> speed_km;
        speed_ml = km_ml_conv * speed_km;
        cout << "Your speed is equal to " << speed_ml << " miles per hour" << endl;
        }
        
    if (desired_number == 3){    
        cout << "You chose tool # 3 - Centimeters to Inches converter!" << endl;
        cout << endl;
        cout << "Please enter your measurement in Centimeters :" << endl;
        double centimeter_value = {0.0};
        double inch_value = {0.0};
        double const cm_in_conv = {2.54};
        cin >> centimeter_value; 
        inch_value = centimeter_value / cm_in_conv;
        cout << centimeter_value << " centimeters is equal to " << inch_value << " inches" << endl;
        }
    
    if (desired_number == 4){
        cout << "You chose tool # 4 - Liters to Gallons converter" << endl;
        cout << endl;
        cout << "Please enter amount in Liters :" << endl;
        double liter_value = {0.0};
        double gallon_value = {0.0};
        double const lit_to_gal_conv = {3.785};
        cin >> liter_value;
        gallon_value = liter_value / lit_to_gal_conv;
        cout << liter_value << " liters is equal to " << gallon_value << " gallons" << endl;
        }
        
    if (desired_number == 5){    
        cout << "You chose tool # 5 - Celsius to Fahrenheit" << endl;
        cout << endl;
        cout << "Please enter value in Celsius : " << endl;
        double cel_value = {0.0};
        double far_value = {0.0};
        cin >> cel_value;
        double const cel_conv = {(cel_value * 9 / 5) + 32};
        far_value = cel_conv;
        cout << cel_value << " celsius is equal to " << far_value << " fahrenheit" << endl;
    
        }
    
    if (desired_number == 6){
    return 0;
        }
    
    cout << endl;
	return 0;
    
}
