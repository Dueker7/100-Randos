#include <iostream>
#include <random>


using namespace std;

int main()
{
    srand(time(NULL));
    int oneHunderedInts[100];
    int evenNumbers[100], oddNumbers[100];
    int evenNumTrack = 0, oddNumTrack = 0, oneHundIntTrack = 0;

    for (int i = 0; i <= 99; i++) {
        oneHunderedInts[i] = rand() % 100;
        
    }
    int n = sizeof(oneHunderedInts) / sizeof(oneHunderedInts[0]);
    sort(oneHunderedInts, oneHunderedInts + n);

    for (int x = 0; x <= 99; x++) {
        if (oneHunderedInts[x] % 2 == 0) {
            //is even
            evenNumbers[evenNumTrack] = oneHunderedInts[x];
            evenNumTrack++;
        }
        else {
            //is odd
            oddNumbers[oddNumTrack] = oneHunderedInts[x];
            oddNumTrack++;
        }
    }

    for (int y = 0; y <= evenNumTrack; y++) {
        if (evenNumbers[y] < 100 && evenNumbers[y] > 0) {
            oneHunderedInts[oneHundIntTrack] = evenNumbers[y];
            oneHundIntTrack++;
        }
    }

    for (int z = 0; z <= oddNumTrack; z++) {
        if (oddNumbers[z] < 100 && oddNumbers[z] > 0) {
            oneHunderedInts[oneHundIntTrack] = oddNumbers[z];
            oneHundIntTrack++;
        }
    }

    for (int a = 0; a <= 99; a++) {
        cout << oneHunderedInts[a] << endl;
    }
}


