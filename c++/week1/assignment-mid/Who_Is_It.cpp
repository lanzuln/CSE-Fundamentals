#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int bestID;
        int bestMarks;
        string bestName;
        char bestSection;

        cin >> bestID >> bestName >> bestSection >> bestMarks;

        for (int i = 0; i < 2; i++)
        {
            int ID;
            int Marks;
            string Name;
            char Section;
            cin >> ID >> Name >> Section >> Marks;

            if (Marks > bestMarks)
            {
                bestID = ID;
                bestName = Name;
                bestSection = Section;
                bestMarks = Marks;
            }

            if (Marks == bestMarks)
            {

                if (ID < bestID)
                {

                    bestID = ID;
                    bestName = Name;
                    bestSection = Section;
                    bestMarks = Marks;
                }
            }
        }

        cout << bestID << " " << bestName << " " << bestSection << " " << bestMarks << endl;
    }

    return 0;
}
