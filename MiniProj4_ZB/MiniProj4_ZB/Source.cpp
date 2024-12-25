//  Zane Brown 
//  11/29/2022
//  Dr. Passos
//  This program counts the number of page faults
//  that occur in a FIFO type page replacement system

#include <iostream>
#include <cstdlib> 
#include <time.h>
#include <queue>
#include <unordered_set>

using namespace std;

int pageFaults(int pages[], int n, int capacity)
{
    unordered_set<int> s;

    queue<int> indexes;

    int page_faults = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.size() < capacity)
        {
            if (s.find(pages[i]) == s.end())
            {
                s.insert(pages[i]);

                page_faults++;

                indexes.push(pages[i]);
            }
        }
        else
        {
            if (s.find(pages[i]) == s.end())
            {
                int val = indexes.front();

                indexes.pop();

                s.erase(val);

                s.insert(pages[i]);

                indexes.push(pages[i]);

                page_faults++;
            }
        }
    }

    return page_faults;
}

int main()
{
	srand((unsigned)time(NULL));
	int min, max;
	min = 0;
	max = 4065;
    int cap = 10;

    int pages[10000];

    for (int i = 0; i < 9999; i++)
    {
        int randNum = rand() % (max - min + 1) + min;

        randNum = (randNum >> 6);

        pages[i] = randNum;
    }

    int n = sizeof(pages) / sizeof(pages[0]);

    cout << "Number of occurred page faults: ";
    cout << pageFaults(pages, n, cap);

	return 0;
}