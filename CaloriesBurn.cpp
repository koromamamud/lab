#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   double userAge, userWeight, userHeart, userTime;
   double userCalories;


   cin >> userAge >> userWeight >> userHeart >> userTime;

   userCalories = ((userAge * 0.2757 + userWeight * 0.03295 + userHeart * 1.0781 - 75.4991) * userTime) / 8.368;

    cout << fixed << setprecision(2);

   cout << "Calories: " << userCalories << " calories" << endl;

   return 0;
}
// This code calculates the calories burned based on user input for age, weight, heart rate, and time spent exercising.