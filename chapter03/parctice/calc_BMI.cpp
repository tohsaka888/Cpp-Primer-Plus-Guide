#include <iostream>

const int footer_to_inch = 12;
const float inch_to_meter = 0.0254;
const float kg_to_pound = 2.2f;

int main(int argc, char const *argv[])
{
  using namespace std;
  int footer, inch, weight;
  float converted_height, converted_weight, BMI;
  cout << "Please enter your height(footer): ";
  cin >> footer;
  cout << "Please enter your height(inch): ";
  cin >> inch;
  cout << "Please enter your weight(footer): ";
  cin >> weight;

  converted_height = (inch + footer * footer_to_inch) * inch_to_meter;
  converted_weight = weight / kg_to_pound;

  BMI = converted_weight / (converted_height * converted_height);

  cout << "Your BMI is " << BMI << endl;
  return 0;
}