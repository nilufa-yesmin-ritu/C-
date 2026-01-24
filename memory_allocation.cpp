#include <iostream>
#include <algorithm>
using namespace std;

void displayAllocation(int assign[], int jobSize[], int originalBlock[], int jobCount) {
    cout << "\nJob No\tJob Size\tBlock No\tBlock Size\tFragment\n";

    for (int i = 0; i < jobCount; i++) {
        if (assign[i] != -1) {
            int bIndex = assign[i];
            int bSize = originalBlock[bIndex];
            int frag = bSize - jobSize[i];

            cout << i + 1 << "\t"
                 << jobSize[i] << "\t\t"
                 << bIndex + 1 << "\t\t"
                 << bSize << "\t\t"
                 << frag << endl;
        } else {
            cout << i + 1 << "\t"
                 << jobSize[i] << "\t\t---\t\t---\t\t---\n";
        }
    }
}

void firstFitAlgo(int memBlock[], int blockCount, int jobSize[], int jobCount) {
    int assign[jobCount];
    fill(assign, assign + jobCount, -1);

    int originalBlock[blockCount];
    for (int i = 0; i < blockCount; i++)
        originalBlock[i] = memBlock[i];

    for (int i = 0; i < jobCount; i++) {
        for (int j = 0; j < blockCount; j++) {
            if (memBlock[j] >= jobSize[i]) {
                assign[i] = j;
                memBlock[j] = 0;   // block used
                break;
            }
        }
    }

    cout << "\nFirst Fit Result\n";
    displayAllocation(assign, jobSize, originalBlock, jobCount);
}

void bestFitAlgo(int memBlock[], int blockCount, int jobSize[], int jobCount) {
    int assign[jobCount];
    fill(assign, assign + jobCount, -1);

    int originalBlock[blockCount];
    for (int i = 0; i < blockCount; i++)
        originalBlock[i] = memBlock[i];

    for (int i = 0; i < jobCount; i++) {
        int bestPos = -1;
        for (int j = 0; j < blockCount; j++) {
            if (memBlock[j] >= jobSize[i]) {
                if (bestPos == -1 || memBlock[j] < memBlock[bestPos])
                    bestPos = j;
            }
        }
        if (bestPos != -1) {
            assign[i] = bestPos;
            memBlock[bestPos] = 0;
        }
    }

    cout << "\nBest Fit Result\n";
    displayAllocation(assign, jobSize, originalBlock, jobCount);
}

void worstFitAlgo(int memBlock[], int blockCount, int jobSize[], int jobCount) {
    int assign[jobCount];
    fill(assign, assign + jobCount, -1);

    int originalBlock[blockCount];
    for (int i = 0; i < blockCount; i++)
        originalBlock[i] = memBlock[i];

    for (int i = 0; i < jobCount; i++) {
        int worstPos = -1;
        for (int j = 0; j < blockCount; j++) {
            if (memBlock[j] >= jobSize[i]) {
                if (worstPos == -1 || memBlock[j] > memBlock[worstPos])
                    worstPos = j;
            }
        }
        if (worstPos != -1) {
            assign[i] = worstPos;
            memBlock[worstPos] = 0;
        }
    }

    cout << "\nWorst Fit Result\n";
    displayAllocation(assign, jobSize, originalBlock, jobCount);
}

int main() {
    int blockCount, jobCount;

    cout << "Enter number of memory blocks: ";
    cin >> blockCount;
    int memBlock[blockCount];

    for (int i = 0; i < blockCount; i++) {
        cout << "Enter block size " << i + 1 << ": ";
        cin >> memBlock[i];
    }

    cout << "\nEnter number of jobs: ";
    cin >> jobCount;
    int jobSize[jobCount];

    for (int i = 0; i < jobCount; i++) {
        cout << "Enter job size " << i + 1 << ": ";
        cin >> jobSize[i];
    }

    int option;
    do {
        cout << "\n1. First Fit\n2. Best Fit\n3. Worst Fit\n4. Exit\n";
        cout << "Choose option: ";
        cin >> option;

        int tempBlock[blockCount];
        for (int i = 0; i < blockCount; i++)
            tempBlock[i] = memBlock[i];

        switch (option) {
            case 1: firstFitAlgo(tempBlock, blockCount, jobSize, jobCount); break;
            case 2: bestFitAlgo(tempBlock, blockCount, jobSize, jobCount); break;
            case 3: worstFitAlgo(tempBlock, blockCount, jobSize, jobCount); break;
            case 4: cout << "Program exited.\n"; break;
            default: cout << "Invalid option.\n";
        }
    } while (option != 4);

    return 0;
}