#include <iostream>
using namespace std;

class BigInt {
    public:
	BigInt(){
		dynamic_array = new int[1];
		dynamic_array[0] = 0;
	}

	BigInt(unsigned int num){
		
	}

	void print(){
		for(int i = 0; i < 1; i++)
		{
			cout << dynamic_array[i];
		}
	}

	int numDigits(unsigned int num){
		int len = 1;

		if (num > 0) {
    			for (len = 0; num > 0; len++) {
        			num = num / 10;
    			}
		}
		return len;
	}

    private:
	int* dynamic_array;
};

int main() {
	BigInt temp;
	//temp.print();
	return 0;
}
