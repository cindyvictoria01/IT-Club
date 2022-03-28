# include <iostream>
# include <cmath>
using namespace std;

int main(){
	int x, y, z;
	
	cout << "Angka? ";
	cin >> x;
	y = sqrt(x);
	cout << "Akar dari " << x << ": " << y;
	
	z = log(x);
	cout << "\nLog(" << x << ") = " << z;
	
	return 0;
}
