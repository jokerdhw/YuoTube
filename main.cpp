#include <iostream>
#include <vector>
#include <cmath>

double p_H2_an = 115016.92908;	
double p_vapor_an = 14983.07092;
double p_N2_an = 0;

double p_O2_ca = 22475.92518;
double p_vapor_ca = 24971.784873;
double p_N2_ca = 84552.28995;

double anode_volume = 1.36e-5;
double cathode_volume = 2.72e-5;

constexpr double M_WATER = 18.02e-3;         // 水蒸气摩尔质量，kg/mol
constexpr double M_N2 = 28e-3;               // 氮气摩尔质量，kg/mol
constexpr double M_H2 = 2.016e-3;            // 氢气摩尔质量，kg/mol
constexpr double M_O2 = 32e-3;               // 氧气摩尔质量，kg/mol
constexpr double M_AIR = 28.97e-3;           // 空气摩尔质量，kg/mol

double get_m() {
	return p_O2_ca * M_O2 * cathode_volume / 8.3145 / 338.15;
}

int main() {
	double m = get_m();
	std::cout << "m = " << m << std::endl;
	return 0;
}