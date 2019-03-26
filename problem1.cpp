#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float box = 250;
	float sideline = 100;
	float premium = 50;
	float genad = 25;
	float sbox, ssideline, spremium, sgenad, ttlb, ttls, ttlp, ttlga, ttlamt;
	std::cout << std::fixed;
    std::cout << std::setprecision(2);
	cout << "Please Enter the tickets bought for BOX seating: ";
	cin >> sbox;
	cout << "Please Enter the tickets bought for SIDELINE seating: ";
	cin >> ssideline;
	cout << "Please Enter the tickets bought for PREMIUM seating: ";
	cin >> spremium;
	cout << "Please Enter the tickets bought for GEN AD seating: ";
	cin >> sgenad;
	cout << "\n\n=====Ticket Sales=====\n";
	cout << "Type              Price\n";
	cout << "Box               "<< box << endl;
	cout << "Sideline          "<< sideline << endl;
	cout << "Premium           "<< premium << endl;
	cout << "Gen Ad            "<< genad << endl;
	cout << "\n\n=====Total Sales=====\n";
	std::cout << std::fixed;
    std::cout << std::setprecision(0);
	cout << "Box               "<< sbox << endl;
	cout << "Sideline          "<< ssideline << endl;
	cout << "Premium           "<< spremium << endl;
	cout << "Gen Ad            "<< sgenad << endl;
	std::cout << std::fixed;
    std::cout << std::setprecision(2);
	cout << "\n\n=====Total Sold BOX=====\n";
	ttlb = box * sbox;
	cout << box << " * " << sbox << " = " << ttlb << endl;
	cout << "\n\n=====Total Sold SIDELINE=====\n";
	ttls = sideline * ssideline;
	cout << sideline << " * " << ssideline << " = " << ttls << endl;
	cout << "\n\n=====Total Sold PREMIUM=====\n";
	ttlp = premium * spremium;
	cout << premium << " * " << spremium << " = " << ttlp << endl;
	cout << "\n\n=====Total Sold GEN AD=====\n";
	ttlga = genad * sgenad;
	cout << genad << " * " << sgenad << " = " << ttlga << endl;
	cout << "\n\n=====GRAND TOTAL=====\n";
	ttlamt = ttlb + ttls + ttlp + ttlga;
	cout << ttlb << " + " << ttls << " + " << ttlp << " + " << ttlga << " = " << ttlamt << endl;
	return 0;
}
