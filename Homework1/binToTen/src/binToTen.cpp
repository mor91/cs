
#include <iostream>
#include <string>


using namespace std;

string from10to2(int num_base_10) {
    int rest=0;
    int num= num_base_10;
    string num_base_2="";
    while(num!=0){
        rest= num % 2;
        num_base_2=num_base_2 + std::to_string(rest);
        num=num / 2;

    }

    return num_base_2;
}
int main() {
	int num_base_10;
	cin >> num_base_10;
	string num_base_2=from10to2(num_base_10);
	cout << num_base_2 <<endl;
	return 0;
	
}

