/*
Among these, Varahamihira was an astrologer of eminence and his book Brihat Jataak is recokened as the ultimate authority in astrology.

He was once talking with Amarasimha,another gem among the nava ratnas and the author of Sanskrit thesaurus, Amarakosha.

Amarasimha wanted to know the final position of a person, who starts from the origin 0 0 and travels per following scheme.

TCS NQT Coding
Scheme
He first turns and travels 10 units of distance
His second turn is upward for 20 units
Third turn is to the left for 30 units
Fourth turn is the downward for 40 units
Fifth turn is to the right(again) for 50 units
… And thus he travels, every time increasing the travel distance by 10 units.

Test Cases
Case 1
Input : 3
Expected Output :-20 20
Case 2
Input: 4
Expected Output: -20 -20
Case 3
Input : 5
Expected Output : 30 -20
Case 4
Input : 7
Expected Output : 90 -20
*/
#include<stdio.h>
int main()
{
    int x=0,y=0;
    int no_of_steps;
    int distance=10;
    char c='R';
    scanf("%d",&no_of_steps);

    while(no_of_steps--)
    {
        switch(c)
        {
            case 'R':
            x += distance;
            distance += 10;
            c = 'U';
            break;

            case 'U':
            y += distance;
            distance += 10;
            c = 'L';
            break;

            case 'L':
            x -= distance;
            distance += 10;
            c = 'D';
            break;

            case 'D':
            y -= distance;
            distance += 10;
            c = 'A';
            break;

            case 'A':
            x += distance;
            distance += 10;
            c = 'R';
            break;
        }
    }
    printf("%d %d",x,y);
}