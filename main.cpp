// if you dont understand the code pretend that you are program
#include <iostream>
#include <list>
#include <limits>
using namespace std;
list<string> coms = {};
list<string> letter1 = {};
list<string> letter2 = {};
list<string> stg = {};
list<float> nums1 = {};
list<float> nums2 = {};
list<float> prg = {};
list<string> unknowcoms = {};
float reg[32];
string memp[32];
string com;
int errorc = 0;
int com1 = 0;
int com2 = 0;
int com4 = 0;
int com6 = 0;
int uncoms = 0;
string com8;
string adv;
int cmp1 = 0;
int cmp2 = 0;
int cmp3 = 0;
int cmp4 = 0;
int cmp5 = 0;
int cmp6 = 0;
string com5;
string com3;
int comh = 0;
int comh1 = 0;
string resultc;
string resultc1;
int resultc2 = 0;
string resultc3;
int resultc4 = 0;
int resultc5 = 0;
int resultc6 = 0;
int comh3 = 0;
int comh4 = 0;
int inf = 0;
int prgch = 0;
int pindexc = 0;
string resultc10;

int rindexc = 0;
int indexc = 0;
int jerror = 0;
int bend = 0;

string mainent;
string fcom;
int fcomindexc=0;
int fcom1 = 0;
int comh1h = 0;
int main()
{
    while(bend==0)
    {
        uncoms=0;
        cout << "launch/code" << endl;
        cin >> mainent;
        if(mainent=="launch")
        {
            cout << "Size: " << prg.size() << endl;
            pindexc=0;
            for(float n2 : prg)
            {
                cout << "Program: ";
                cout << pindexc << endl;
                pindexc++;
            }
            cout << "enter number of the program" << endl;
            cin >> prgch;
            fcom1=0;
        fcomindexc=0;
        inf = 0;
        auto it9 = prg.begin();
        advance(it9, prgch);
        indexc=*it9;
    while (uncoms == 0)
    {
        inf++;
        if(inf>100000)
        {
            cout << "inf error" << endl;
            indexc=indexc+2;
        }
        auto it2 = coms.begin();
        advance(it2, indexc);
        resultc = *it2;
        if(fcom1==0)
        {
            fcomindexc=indexc;
        }
        fcom1++;
        if (resultc == "END")
        {
            cout << "Prgm finished" << endl;
            comh = 0;
            uncoms=0;
            cout << endl;
            indexc++;
            comh1=0;
            break;
        }
        if (resultc == "MOV")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, indexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                auto it5 = letter2.begin();
                advance(it5, indexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "N")
                {
                    auto it6 = nums2.begin();
                    advance(it6, indexc);
                    resultc4 = *it6;
                    reg[resultc2] = resultc4;
                }
                if (resultc3 == "R")
                {
                    auto it6 = nums2.begin();
                    advance(it6, indexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc4];
                }
            }
        }
        if (resultc == "STORE")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, indexc);
            resultc1 = *it3;
            if (resultc1 == "M")
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                auto it5 = letter2.begin();
                advance(it5, indexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "M")
                {
                    auto it6 = nums2.begin();
                    advance(it6, indexc);
                    resultc4 = *it6;
                    memp[resultc2] = memp[resultc4];
                }
                if (resultc3 == "S")
                {
                    auto it10 = stg.begin();
                    advance(it10, indexc);
                    resultc10 = *it10;
                    memp[resultc2] = resultc10;
                }
            }
        }
        if (resultc == "SUB")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, indexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                auto it5 = letter2.begin();
                advance(it5, indexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "N")
                {
                    auto it6 = nums2.begin();
                    advance(it6, indexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] - resultc4;
                }
                if (resultc3 == "R")
                {
                    auto it6 = nums2.begin();
                    advance(it6, indexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] - reg[resultc4];
                }
            }
        }
        if (resultc == "ADD")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, indexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                auto it5 = letter2.begin();
                advance(it5, indexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "N")
                {
                    auto it6 = nums2.begin();
                    advance(it6, indexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] + resultc4;
                }
                if (resultc3 == "R")
                {
                    auto it6 = nums2.begin();
                    advance(it6, indexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] + reg[resultc4];
                }
            }
        }
        if (resultc == "MUL")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, indexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                auto it5 = letter2.begin();
                advance(it5, indexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "N")
                {
                    auto it6 = nums2.begin();
                    advance(it6, indexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] * resultc4;
                }
                if (resultc3 == "R")
                {
                    auto it6 = nums2.begin();
                    advance(it6, indexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] * reg[resultc4];
                }
            }
        }
        if (resultc == "DIV")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, indexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                auto it5 = letter2.begin();
                advance(it5, indexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "N")
                {
                    auto it6 = nums2.begin();
                    advance(it6, indexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] / resultc4;
                }
                if (resultc3 == "R")
                {
                    auto it6 = nums2.begin();
                    advance(it6, indexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] / reg[resultc4];
                }
            }
        }
        if (resultc == "INC")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, indexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                resultc2 = *it4;
                reg[resultc2] = reg[resultc2] + 1;
            }
        }
        if (resultc == "DEC")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, indexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                resultc2 = *it4;
                reg[resultc2] = reg[resultc2] - 1;
            }
        }
        if (resultc == "OUT")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it4 = nums1.begin();
            advance(it4, indexc);
            auto it3 = letter1.begin();
            advance(it3, indexc);
            auto it10 = stg.begin();
            advance(it10, indexc);
            resultc1 = *it3;
            resultc2 = *it4;
            resultc10 = *it10;
            cout << "output" << endl;
            if (resultc1 == "R")
            {
                cout << reg[resultc2] << endl;
            }
            if (resultc1 == "M")
            {
                cout << memp[resultc2] << endl;
            }
            if (resultc1 == "N")
            {
                cout << resultc2 << endl;
            }
            if (resultc1 == "S")
            {
                cout << resultc10 << endl;
            }
        }
        if (resultc == "IN")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it4 = nums1.begin();
            advance(it4, indexc);
            auto it3 = letter1.begin();
            advance(it3, indexc);
            resultc1 = *it3;
            resultc2 = *it4;
            cout << "input" << endl;
            if (resultc1 == "R")
            {
                cin >> reg[resultc2];
                if(reg[resultc2]==4320)
                {
                    cout << "system code actived" << endl;
                    cout << "inf finished" << endl;
                    indexc=comh3-2;
                    cout << endl;
                }
                if (cin.fail())
              {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Wrong format" << endl;
                reg[resultc2]= 0;
             }                  if(reg[resultc2]>99999999999999999)
                {
                    cout << "Bigger then limits error" << endl;
                    reg[resultc2]= 0;
                }
            }
            if (resultc1 == "M")
            {
                cin >> memp[resultc2];
                if(memp[resultc2]=="4320")
                {
                    cout << "system code actived" << endl;
                    cout << "inf finished" << endl;
                    indexc=comh3-2;
                    cout << endl;
                }
            }
        }
        // cmp and j...
        if (resultc == "JMP")
        {
            auto it4 = nums1.begin();
            advance(it4, indexc);
            resultc2 = *it4;
            if(resultc2>comh3)
            {
                cout << "Bad alloc" << endl;
                cout << endl;
            }
            if(resultc2<=comh3)
           {
                    indexc = (resultc2+fcomindexc)- 1;
            }
        }
        if (resultc == "JEQ") // =
        {
            if (cmp1 == 1)
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                resultc2 = *it4;
                if(resultc2>comh3)
            {
                cout << "Bad alloc" << endl;
                cout << endl;
            }
                if(resultc2<=comh3)
                {
                    indexc = (resultc2+fcomindexc)- 1;
                }
            }
        }
        if (resultc == "JNE") // !=
        {
            if (cmp2 == 1)
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                resultc2 = *it4;
                if(resultc2>comh3)
            {
                cout << "Bad alloc" << endl;
                cout << endl;
            }
                if(resultc2<=comh3)
                {
                    indexc = (resultc2+fcomindexc)- 1;
                }
            }
        }
        if (resultc == "JLT") // <
        {
            if (cmp3 == 1)
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                resultc2 = *it4;
                if(resultc2>comh3)
            {
                cout << "Bad alloc" << endl;
                cout << endl;
            }
                if(resultc2<=comh3)
                {
                    indexc = (resultc2+fcomindexc)- 1;
                }
            }
        }
        if (resultc == "JGT") // >
        {
            if (cmp4 == 1)
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                resultc2 = *it4;
                if(resultc2>comh3)
            {
                cout << "Bad alloc" << endl;
                cout << endl;
            }
                if(resultc2<=comh3)
                {
                    indexc = (resultc2+fcomindexc)- 1;
                }
            }
        }
        if (resultc == "JLE") // <=
        {
            if (cmp5 == 1)
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                resultc2 = *it4;
                if(resultc2>comh3)
            {
                cout << "Bad alloc" << endl;
                cout << endl;
            }
                if(resultc2<=comh3)
                {
                    indexc = (resultc2+fcomindexc)- 1;
                }
            }
        }
        if (resultc == "JGE") // =>
        {
            if (cmp6 == 1)
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                resultc2 = *it4;
                if(resultc2>comh3)
            {
                cout << "Bad alloc" << endl;
                cout << endl;
            }
                if(resultc2<=comh3)
                {
                    indexc = (resultc2+fcomindexc)- 1;
                }
            }
        }
        if (resultc == "CMP")
        {
            auto it3 = letter1.begin();
            advance(it3, indexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                auto it5 = letter2.begin();
                advance(it5, indexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "N")
                {
                    auto it6 = nums2.begin();
                    advance(it6, indexc);
                    resultc4 = *it6;
                    if (reg[resultc2] == resultc4)
                    {
                        cmp1 = cmp1 + 1;
                    }
                    if (reg[resultc2] != resultc4)
                    {
                        cmp2 = cmp2 + 1;
                    }
                    if (reg[resultc2] < resultc4)
                    {
                        cmp3 = cmp3 + 1;
                    }
                    if (reg[resultc2] > resultc4)
                    {
                        cmp4 = cmp4 + 1;
                    }
                    if (reg[resultc2] <= resultc4)
                    {
                        cmp5 = cmp5 + 1;
                    }
                    if (reg[resultc2] >= resultc4)
                    {
                        cmp6 = cmp6 + 1;
                    }
                }
                if (resultc3 == "R")
                {
                    auto it6 = nums2.begin();
                    advance(it6, indexc);
                    resultc4 = *it6;
                    if (reg[resultc2] == reg[resultc4])
                    {
                        cmp1 = cmp1 + 1;
                    }
                    if (reg[resultc2] != reg[resultc4])
                    {
                        cmp2 = cmp2 + 1;
                    }
                    if (reg[resultc2] < reg[resultc4])
                    {
                        cmp3 = cmp3 + 1;
                    }
                    if (reg[resultc2] > reg[resultc4])
                    {
                        cmp4 = cmp4 + 1;
                    }
                    if (reg[resultc2] <= reg[resultc4])
                    {
                        cmp5 = cmp5 + 1;
                    }
                    if (reg[resultc2] >= reg[resultc4])
                    {
                        cmp6 = cmp6 + 1;
                    }
                }
            }
            if (resultc1 == "M")
            {
                auto it4 = nums1.begin();
                advance(it4, indexc);
                auto it5 = letter2.begin();
                advance(it5, indexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "S")
                {
                    auto it10 = stg.begin();
                    advance(it10, indexc);
                    resultc10 = *it10;
                    if (memp[resultc2] == resultc10)
                    {
                        cmp1 = cmp1 + 1;
                    }
                    if (memp[resultc2] != resultc10)
                    {
                        cmp2 = cmp2 + 1;
                    }
                }
                if (resultc3 == "M")
                {
                    auto it6 = nums2.begin();
                    advance(it6, indexc);
                    resultc4 = *it6;
                    if (memp[resultc2] == memp[resultc4])
                    {
                        cmp1 = cmp1 + 1;
                    }
                    if (memp[resultc2] != memp[resultc4])
                    {
                        cmp2 = cmp2 + 1;
                    }
                }
            }
        }
        indexc = indexc + 1;
    }
        }
        if(mainent=="code")
        {
    // coder
    uncoms=0;
    comh1=0;
    jerror=0;
    comh1h=0;
    while (comh == 0)
    {
        errorc=0;
        cin >> com;
        if(uncoms>0 and com!="END")
        {
            com="def";
        }
        coms.push_back(com);
        if (com == "OUT")
        {
            cin >> com3;
            letter1.push_back(com3);
            letter2.push_back("a");
            if(com3!="R" and com3!="N" and com3!="S" and com3!="M")
            {
                nums1.push_back(0);
                nums2.push_back(0);
                stg.push_back("a");
                uncoms++;
                comh1=comh1+1;
                unknowcoms.push_back(com);
                jerror++;
                errorc=1;
            }
            if (com3 == "R")
            {
                stg.push_back("a");
                cin >> com1;
                if(com1>32 or com1<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                if (cin.fail())
                {
                    comh1=comh1+1;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    com1 = 0;
                    uncoms++;
                }
                nums1.push_back(com1);
                nums2.push_back(0);
            }
            if (com3 == "N")
            {
                stg.push_back("a");
                cin >> com2;
                if (cin.fail())
                {
                    comh1=comh1+1;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    uncoms++;
                }
                nums1.push_back(com2);
                nums2.push_back(0);
            }
            if (com3 == "M")
            {
                stg.push_back("a");
                cin >> com2;
                if(com2>32 or com2<0)
                {
                    comh1=comh1+1;
                    com2 = 0;
                    uncoms++;
                }
                if (cin.fail())
                {
                    comh1=comh1+1;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    com2 = 0;
                    uncoms++;
                }
                nums1.push_back(com2);
                nums2.push_back(0);
            }
            if (com3 == "S")
            {
                cin >> com8;
                stg.push_back(com8);
                nums1.push_back(0);
                nums2.push_back(0);
            }
        }
        else if (com == "IN")
        {
            cin >> com3;
            letter1.push_back(com3);
            letter2.push_back("a");
            stg.push_back("a");
            if(com3!="R" and com3!="M")
            {
                nums1.push_back(0);
                nums2.push_back(0);
                uncoms++;
                comh1=comh1+1;
                unknowcoms.push_back(com);
                jerror++;
                errorc=1;
            }
            if (com3 == "R")
            {
                cin >> com1;
                if(com1>32 or com1<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                if (cin.fail())
                {
                    comh1=comh1+1;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    com1 = 0;
                    uncoms++;
                }
                nums1.push_back(com1);
                nums2.push_back(0);
            }
            if (com3 == "M")
            {
                cin >> com2;
                if(com2>32 or com2<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                if (cin.fail())
                {
                    comh1=comh1+1;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    com2 = 0;
                    uncoms++;
                }
                nums1.push_back(com2);
                nums2.push_back(0);
            }
        }
        else if (com == "MOV")
        {
            cin >> com3;
            com5 = com3;
            letter1.push_back(com3);
            stg.push_back("a");
            if(com3!="R" and com3!="N")
            {
                letter2.push_back("a");
                nums1.push_back(0);
                nums2.push_back(0);
                uncoms++;
                comh1=comh1+1;
                unknowcoms.push_back(com);
                jerror++;
                errorc=1;
            }
            if (com3 == "R")
            {
                cin >> com1;
                if(com1>32 or com1<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                if (cin.fail())
              {
                  comh1=comh1+1;
                    cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com1=0;
                 uncoms++;
                 }
                nums1.push_back(com1);
                cin >> com3;
                letter2.push_back(com3);
                if(com3!="R" and com3!="N")
            {
                nums2.push_back(0);
                uncoms++;
                comh1=comh1+1;
                unknowcoms.push_back(com);
                jerror++;
                errorc=1;
            }
                if (com3 == "R")
                {
                    cin >> com1;
                    if(com1>32 or com1<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                    if (cin.fail())
                    {
                        comh1=comh1+1;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        com1 = 0;
                        uncoms++;
                    }
                    nums2.push_back(com1);
                }
                if (com3 == "N")
                {
                    cin >> com2;
                    if (cin.fail())
                    {
                        comh1=comh1+1;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        com2 = 0;
                        uncoms++;
                    }
                    nums2.push_back(com2);
                    if(uncoms<0)
            {
                comh1h++;
                errorc=1;
            }
                }
            }
        }
        else if (com == "STORE")
        {
            cin >> com3;
            com5 = com3;
            letter1.push_back(com3);
            if (com3 == "M")
            {
                cin >> com1;
                if(com1>32 or com1<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                if (cin.fail())
              {
                  comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com1=0;
                 uncoms++;
             }
                nums1.push_back(com1);
                cin >> com3;
                letter2.push_back(com3);
                if (com3 == "M")
                {
                    cin >> com2;
                    if(com2>32 or com2<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                    if (cin.fail())
              {
                  comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com2=0;
                 uncoms++;
             }
                    nums2.push_back(com2);
                }
                if (com3 == "S")
                {
                    cin >> com8;
                    stg.push_back(com8);
                    nums2.push_back(0);
                }
            }
        }
        else if (com == "CMP")
        {
            cin >> com3;
            com5 = com3;
            letter1.push_back(com3);
            if (com3 == "R")
            {
                stg.push_back("a");
                cin >> com1;
                if(com1>32 or com1<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                if (cin.fail())
              {
                  comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com1=0;
                 uncoms++;
             }
                nums1.push_back(com1);
                cin >> com3;
                letter2.push_back(com3);
                if (com3 == "R")
                {
                    cin >> com1;
                    if(com1>32 or com1<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                    if (cin.fail())
              {
                  comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com1=0;
                 uncoms++;
             }
                    nums2.push_back(com1);
                }
                if (com3 == "N")
                {
                    cin >> com2;
                    if (cin.fail())
              {
                  comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com2=0;
                 uncoms++;
             }
                    nums2.push_back(com2);
                }
            }
            if (com5 == "M")
            {
                cin >> com1;
                if(com1>32 or com1<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                if (cin.fail())
              {
                  comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com1=0;
                 uncoms++;
             }
                nums1.push_back(com1);
                cin >> com3;
                letter2.push_back(com3);
                if (com3 == "M")
                {
                    stg.push_back("a");
                    cin >> com2;
                    if(com2>32 or com2<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                    if (cin.fail())
              {
                  comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com2=0;
                 uncoms++;
             }
                    nums2.push_back(com2);
                }
                if (com3 == "S")
                {
                    cin >> com8;
                    nums2.push_back(0);
                    stg.push_back(com8);
                }
            }
        }
        // j..
        else if (com == "JMP") //always
        {
            cin >> com6;
            if(com6>32)
            {
                comh1=comh1+1;
                uncoms++;
            }
            if (cin.fail())
              {
                  comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com6=0;
                 uncoms++;
             }
            nums1.push_back(com6);
            nums2.push_back(0);
            letter1.push_back("a");
            letter2.push_back("a");
            stg.push_back("a");
        }
        else if (com == "JEQ") // =
        {
            cin >> com6;
            if(com6>32)
            {
                comh1=comh1+1;
                uncoms++;
            }
            if (cin.fail())
              {
                comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com6=0;
                 uncoms++;
             }
            nums1.push_back(com6);
            nums2.push_back(0);
            letter1.push_back("a");
            letter2.push_back("a");
            stg.push_back("a");
        }
        else if (com == "JNE") // !=
        {
            cin >> com6;
            if(com6>32)
            {
                comh1=comh1+1;
                uncoms++;
            }
            if (cin.fail())
              {
                comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com6=0;
                 uncoms++;
             }
            nums1.push_back(com6);
            nums2.push_back(0);
            letter1.push_back("a");
            letter2.push_back("a");
            stg.push_back("a");
        }
        else if (com == "JLT") // <
        {
            cin >> com6;
            if(com6>32)
            {
                comh1=comh1+1;
                uncoms++;
            }
            if (cin.fail())
              {
                comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com6=0;
                 uncoms++;
             }
            nums1.push_back(com6);
            nums2.push_back(0);
            letter1.push_back("a");
            letter2.push_back("a");
            stg.push_back("a");
        }
        else if (com == "JGT") // >
        {
            cin >> com6;
            if(com6>32)
            {
                comh1=comh1+1;
                uncoms++;
            }
            if (cin.fail())
              {
                comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com6=0;
                 uncoms++;
             }
            nums1.push_back(com6);
            nums2.push_back(0);
            letter1.push_back("a");
            letter2.push_back("a");
            stg.push_back("a");
        }
        else if (com == "JLE") // <=
        {
            cin >> com6;
            if(com6>32)
            {
                comh1=comh1+1;
                uncoms++;
            }
            if (cin.fail())
              {
                comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com6=0;
                 uncoms++;
             }
            nums1.push_back(com6);
            nums2.push_back(0);
            letter1.push_back("a");
            letter2.push_back("a");
            stg.push_back("a");
        }
        else if (com == "JGE") // =>
        {
            cin >> com6;
            if(com6>32)
            {
                comh1=comh1+1;
                uncoms++;
            }
            if (cin.fail())
              {
                comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com6=0;
                 uncoms++;
             }
            nums1.push_back(com6);
            nums2.push_back(0);
            letter1.push_back("a");
            letter2.push_back("a");
            stg.push_back("a");
        }
        else if (com == "SUB")
        {
            cin >> com3;
            com5 = com3;
            letter1.push_back(com3);
            stg.push_back("a");
            if (com5 == "R")
            {
                cin >> com1;
                if(com1>32 or com1<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                if (cin.fail())
              {
                  comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com1=0;
                 uncoms++;
             }
                nums1.push_back(com1);
                cin >> com3;
                letter2.push_back(com3);
                if (com3 == "R")
                {
                    cin >> com4;
                    if(com4>32 or com4<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                    if (cin.fail())
              {
                  comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com4=0;
                 uncoms++;
             }
                    nums2.push_back(com4);
                }
                if (com3 == "N")
                {
                    cin >> com2;
                    if (cin.fail())
              {
                  comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com2=0;
                 uncoms++;
             }
                    nums2.push_back(com2);
                }
            }
        }
        else if (com == "ADD")
        {
            cin >> com3;
            com5 = com3;
            letter1.push_back(com3);
            stg.push_back("a");
            if (com5 == "R")
            {
                cin >> com1;
                if(com1>32 or com1<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                if (cin.fail())
              {
                  comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com1=0;
                 uncoms++;
             }
                nums1.push_back(com1);
                cin >> com3;
                letter2.push_back(com3);
                if (com3 == "R")
                {
                    cin >> com4;
                    if(com4>32 or com4<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                    if (cin.fail())
              {
                  comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com4=0;
                 uncoms++;
             }
                    nums2.push_back(com4);
                }
                if (com3 == "N")
                {
                    cin >> com2;
                    if (cin.fail())
              {
                  comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com2=0;
                 uncoms++;
             }
                    nums2.push_back(com2);
                }
            }
        }
        else if (com == "INC")
        {
            cin >> com3;
            letter1.push_back(com3);
            stg.push_back("a");
            if (com3 == "R")
            {
                cin >> com1;
                if(com1>32 or com1<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                if (cin.fail())
              {
                comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com1=0;
                 uncoms++;
             }
                nums1.push_back(com1);
                nums2.push_back(0);
                letter2.push_back("a");
            }
        }
        else if (com == "DEC")
        {
            cin >> com3;
            letter1.push_back(com3);
            stg.push_back("a");
            if (com3 == "R")
            {
                cin >> com1;
                if(com1>32 or com1<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                if (cin.fail())
              {
                comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com1=0;
                 uncoms++;
             }
                nums1.push_back(com1);
                nums2.push_back(0);
                letter2.push_back("a");
            }
        }
        else if (com == "DIV")
        {
            cin >> com3;
            com5 = com3;
            letter1.push_back(com3);
            stg.push_back("a");
            if (com5 == "R")
            {
                cin >> com1;
                if(com1>32 or com1<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                if (cin.fail())
              {
                comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com1=0;
                 uncoms++;
             }
                nums1.push_back(com1);
                cin >> com3;
                letter2.push_back(com3);
                if (com3 == "R")
                {
                    cin >> com4;
                    if(com4>32 or com4<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                    if (cin.fail())
              {
                comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com4=0;
                 uncoms++;
             }
                    nums2.push_back(com4);
                }
                if (com3 == "N")
                {
                    cin >> com2;
                    if(com2==0)
                    {
                        comh1=comh1+1;
                        uncoms++;
                    }
                    if (cin.fail())
              {
                comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com2=0;
                 uncoms++;
             }
                    nums2.push_back(com2);
                }
            }
        }
        else if (com == "MUL")
        {
            cin >> com3;
            com5 = com3;
            letter1.push_back(com3);
            stg.push_back("a");
            if (com3 == "R")
            {
                cin >> com1;
                if(com1>32 or com1<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                if (cin.fail())
              {
                comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com1=0;
                 uncoms++;
             }
                nums1.push_back(com1);
                cin >> com3;
                letter2.push_back(com3);
                if (com3 == "R")
                {
                    cin >> com4;
                    if(com4>32 or com4<0)
                {
                    comh1=comh1+1;
                    uncoms++;
                }
                    if (cin.fail())
              {
                comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com4=0;
                 uncoms++;
             }
                    nums2.push_back(com4);
                }
                if (com3 == "N")
                {
                    cin >> com2;
                    if (cin.fail())
              {
                comh1=comh1+1;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                com2=0;
                 uncoms++;
             }
                    nums2.push_back(com2);
                }
            }
        }
        else if (com == "END")
        {
            nums1.push_back(0);
            nums2.push_back(0);
            letter1.push_back("a");
            letter2.push_back("a");
            stg.push_back("a");
            comh = 1;
            comh1=comh1+1;
        }
        else
        {
            if(errorc==0)
            {
                uncoms++;
                comh1=comh1+1;
                unknowcoms.push_back(com);
                nums1.push_back(0);
                nums2.push_back(0);
                letter1.push_back("a");
                letter2.push_back("a");
                stg.push_back("a");
                jerror++;
            }
        }
    }
    for (string n1 : coms)
    {
        comh3 = comh3 + 1;
    }
    comh3 = comh3-comh4;
    comh4 = comh3;
    // copilot
    cout << endl;
    cout << "Enter advanced mode (yes/no)?" << endl;
    cin >> adv;
    if (adv == "yes")
    {
        cout << "copilot started" << endl;
        cout << "rindexc" << endl;
        cout << rindexc << endl;
        cout << "coms" << endl;
        for (string n1 : coms)
        {
            cout << n1;
            cout << " ";
        }
        cout << endl;
        cout << "letter 1" << endl;
        for (string n2 : letter1)
        {
            cout << n2;
            cout << " ";
        }
        cout << endl;
        cout << "letter 2" << endl;
        for (string n3 : letter2)
        {
            cout << n3;
            cout << " ";
        }
        cout << endl;
        cout << "nums 1" << endl;
        for (int n4 : nums1)
        {
            cout << n4;
            cout << " ";
        }
        cout << endl;
        cout << "nums 2" << endl;
        for (int n5 : nums2)
        {
            cout << n5;
            cout << " ";
        }
        cout << endl;
        cout << "stg" << endl;
        for (string n6 : stg)
        {
            cout << n6;
            cout << " ";
        }
        cout << endl;
        if (uncoms > 0)
        {
            cout << "rindexc" << endl;
            cout << rindexc << endl;
            cout << "Error found" << endl;
            cout << "Aborted" << endl;
            comh=0;
            cout << "comh1" << endl;
            cout << comh1 << endl;
            rindexc=rindexc+comh1+comh1h;
            cout << comh1h << endl;
            cout << "rindexc" << endl;
            cout << rindexc << endl;
        }
        else
        {
            cout << "No errors" << endl;
            cout << "rindexc" << endl;
            cout << rindexc << endl;
        }
        cout << endl;
    }
    if (adv == "no")
    {
        if (uncoms > 0)
        {
            cout << "Error found" << endl;
            cout << "Aborted" << endl;
            comh=0;
            rindexc=rindexc+comh1;
        }
        else
        {
            cout << "No errors" << endl;
        }
        cout << endl;
    }
    // compiler
    fcom1=0;
    fcomindexc=0;
    inf = 0;
    while (uncoms == 0)
    {
        inf++;
        if(inf>100000)
        {
            cout << "inf error" << endl;
            rindexc=rindexc+2;
        }
        auto it2 = coms.begin();
        advance(it2, rindexc);
        resultc = *it2;
        if(fcom1==0)
        {
            fcomindexc=rindexc;
            prg.push_back(fcomindexc);
        }
        fcom1++;
        if (resultc == "END")
        {
            cout << "Prgm finished" << endl;
            comh = 0;
            uncoms=0;
            cout << endl;
            rindexc++;
            comh1=0;
            break;
        }
        if (resultc == "MOV")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, rindexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                auto it5 = letter2.begin();
                advance(it5, rindexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "N")
                {
                    auto it6 = nums2.begin();
                    advance(it6, rindexc);
                    resultc4 = *it6;
                    reg[resultc2] = resultc4;
                }
                if (resultc3 == "R")
                {
                    auto it6 = nums2.begin();
                    advance(it6, rindexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc4];
                }
            }
        }
        if (resultc == "STORE")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, rindexc);
            resultc1 = *it3;
            if (resultc1 == "M")
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                auto it5 = letter2.begin();
                advance(it5, rindexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "M")
                {
                    auto it6 = nums2.begin();
                    advance(it6, rindexc);
                    resultc4 = *it6;
                    memp[resultc2] = memp[resultc4];
                }
                if (resultc3 == "S")
                {
                    auto it10 = stg.begin();
                    advance(it10, rindexc);
                    resultc10 = *it10;
                    memp[resultc2] = resultc10;
                }
            }
        }
        if (resultc == "SUB")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, rindexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                auto it5 = letter2.begin();
                advance(it5, rindexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "N")
                {
                    auto it6 = nums2.begin();
                    advance(it6, rindexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] - resultc4;
                }
                if (resultc3 == "R")
                {
                    auto it6 = nums2.begin();
                    advance(it6, rindexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] - reg[resultc4];
                }
            }
        }
        if (resultc == "ADD")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, rindexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                auto it5 = letter2.begin();
                advance(it5, rindexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "N")
                {
                    auto it6 = nums2.begin();
                    advance(it6, rindexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] + resultc4;
                }
                if (resultc3 == "R")
                {
                    auto it6 = nums2.begin();
                    advance(it6, rindexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] + reg[resultc4];
                }
            }
        }
        if (resultc == "MUL")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, rindexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                auto it5 = letter2.begin();
                advance(it5, rindexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "N")
                {
                    auto it6 = nums2.begin();
                    advance(it6, rindexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] * resultc4;
                }
                if (resultc3 == "R")
                {
                    auto it6 = nums2.begin();
                    advance(it6, rindexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] * reg[resultc4];
                }
            }
        }
        if (resultc == "DIV")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, rindexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                auto it5 = letter2.begin();
                advance(it5, rindexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "N")
                {
                    auto it6 = nums2.begin();
                    advance(it6, rindexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] / resultc4;
                }
                if (resultc3 == "R")
                {
                    auto it6 = nums2.begin();
                    advance(it6, rindexc);
                    resultc4 = *it6;
                    reg[resultc2] = reg[resultc2] / reg[resultc4];
                }
            }
        }
        if (resultc == "INC")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, rindexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                resultc2 = *it4;
                reg[resultc2] = reg[resultc2] + 1;
            }
        }
        if (resultc == "DEC")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it3 = letter1.begin();
            advance(it3, rindexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                resultc2 = *it4;
                reg[resultc2] = reg[resultc2] - 1;
            }
        }
        if (resultc == "OUT")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it4 = nums1.begin();
            advance(it4, rindexc);
            auto it3 = letter1.begin();
            advance(it3, rindexc);
            auto it10 = stg.begin();
            advance(it10, rindexc);
            resultc1 = *it3;
            resultc2 = *it4;
            resultc10 = *it10;
            cout << "output" << endl;
            if (resultc1 == "R")
            {
                cout << reg[resultc2] << endl;
            }
            if (resultc1 == "M")
            {
                cout << memp[resultc2] << endl;
            }
            if (resultc1 == "N")
            {
                cout << resultc2 << endl;
            }
            if (resultc1 == "S")
            {
                cout << resultc10 << endl;
            }
        }
        if (resultc == "IN")
        {
            cmp1 = 0;
            cmp2 = 0;
            cmp3 = 0;
            cmp4 = 0;
            cmp5 = 0;
            cmp6 = 0;
            auto it4 = nums1.begin();
            advance(it4, rindexc);
            auto it3 = letter1.begin();
            advance(it3, rindexc);
            resultc1 = *it3;
            resultc2 = *it4;
            cout << "input" << endl;
            if (resultc1 == "R")
            {
                cin >> reg[resultc2];
                if(reg[resultc2]==4320)
                {
                    cout << "system code actived" << endl;
                    cout << "inf finished" << endl;
                    rindexc=comh3-2;
                    cout << endl;
                }
                if (cin.fail())
              {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Wrong format" << endl;
                reg[resultc2]= 0;
             }                  if(reg[resultc2]>99999999999999999)
                {
                    cout << "Bigger then limits error" << endl;
                    reg[resultc2]= 0;
                }
            }
            if (resultc1 == "M")
            {
                cin >> memp[resultc2];
                if(memp[resultc2]=="4320")
                {
                    cout << "system code actived" << endl;
                    cout << "inf finished" << endl;
                    rindexc=comh3-2;
                    cout << endl;
                }
            }
        }
        // cmp and j...
        if (resultc == "JMP")
        {
            auto it4 = nums1.begin();
            advance(it4, rindexc);
            resultc2 = *it4;
            if(resultc2>comh3)
            {
                cout << "Bad alloc" << endl;
                cout << endl;
            }
            if(resultc2<=comh3)
           {
                    rindexc = (resultc2+fcomindexc)- 1;
            }
        }
        if (resultc == "JEQ") // =
        {
            if (cmp1 == 1)
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                resultc2 = *it4;
                if(resultc2>comh3)
            {
                cout << "Bad alloc" << endl;
                cout << endl;
            }
                if(resultc2<=comh3)
                {
                    rindexc = (resultc2+fcomindexc)- 1;
                }
            }
        }
        if (resultc == "JNE") // !=
        {
            if (cmp2 == 1)
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                resultc2 = *it4;
                if(resultc2>comh3)
            {
                cout << "Bad alloc" << endl;
                cout << endl;
            }
                if(resultc2<=comh3)
                {
                    rindexc = (resultc2+fcomindexc)- 1;
                }
            }
        }
        if (resultc == "JLT") // <
        {
            if (cmp3 == 1)
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                resultc2 = *it4;
                if(resultc2>comh3)
            {
                cout << "Bad alloc" << endl;
                cout << endl;
            }
                if(resultc2<=comh3)
                {
                    rindexc = (resultc2+fcomindexc)- 1;
                }
            }
        }
        if (resultc == "JGT") // >
        {
            if (cmp4 == 1)
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                resultc2 = *it4;
                if(resultc2>comh3)
            {
                cout << "Bad alloc" << endl;
                cout << endl;
            }
                if(resultc2<=comh3)
                {
                    rindexc = (resultc2+fcomindexc)- 1;
                }
            }
        }
        if (resultc == "JLE") // <=
        {
            if (cmp5 == 1)
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                resultc2 = *it4;
                if(resultc2>comh3)
            {
                cout << "Bad alloc" << endl;
                cout << endl;
            }
                if(resultc2<=comh3)
                {
                    rindexc = (resultc2+fcomindexc)- 1;
                }
            }
        }
        if (resultc == "JGE") // =>
        {
            if (cmp6 == 1)
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                resultc2 = *it4;
                if(resultc2>comh3)
            {
                cout << "Bad alloc" << endl;
                cout << endl;
            }
                if(resultc2<=comh3)
                {
                    rindexc = (resultc2+fcomindexc)- 1;
                }
            }
        }
        if (resultc == "CMP")
        {
            auto it3 = letter1.begin();
            advance(it3, rindexc);
            resultc1 = *it3;
            if (resultc1 == "R")
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                auto it5 = letter2.begin();
                advance(it5, rindexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "N")
                {
                    auto it6 = nums2.begin();
                    advance(it6, rindexc);
                    resultc4 = *it6;
                    if (reg[resultc2] == resultc4)
                    {
                        cmp1 = cmp1 + 1;
                    }
                    if (reg[resultc2] != resultc4)
                    {
                        cmp2 = cmp2 + 1;
                    }
                    if (reg[resultc2] < resultc4)
                    {
                        cmp3 = cmp3 + 1;
                    }
                    if (reg[resultc2] > resultc4)
                    {
                        cmp4 = cmp4 + 1;
                    }
                    if (reg[resultc2] <= resultc4)
                    {
                        cmp5 = cmp5 + 1;
                    }
                    if (reg[resultc2] >= resultc4)
                    {
                        cmp6 = cmp6 + 1;
                    }
                }
                if (resultc3 == "R")
                {
                    auto it6 = nums2.begin();
                    advance(it6, rindexc);
                    resultc4 = *it6;
                    if (reg[resultc2] == reg[resultc4])
                    {
                        cmp1 = cmp1 + 1;
                    }
                    if (reg[resultc2] != reg[resultc4])
                    {
                        cmp2 = cmp2 + 1;
                    }
                    if (reg[resultc2] < reg[resultc4])
                    {
                        cmp3 = cmp3 + 1;
                    }
                    if (reg[resultc2] > reg[resultc4])
                    {
                        cmp4 = cmp4 + 1;
                    }
                    if (reg[resultc2] <= reg[resultc4])
                    {
                        cmp5 = cmp5 + 1;
                    }
                    if (reg[resultc2] >= reg[resultc4])
                    {
                        cmp6 = cmp6 + 1;
                    }
                }
            }
            if (resultc1 == "M")
            {
                auto it4 = nums1.begin();
                advance(it4, rindexc);
                auto it5 = letter2.begin();
                advance(it5, rindexc);
                resultc3 = *it5;
                resultc2 = *it4;
                if (resultc3 == "S")
                {
                    auto it10 = stg.begin();
                    advance(it10, rindexc);
                    resultc10 = *it10;
                    if (memp[resultc2] == resultc10)
                    {
                        cmp1 = cmp1 + 1;
                    }
                    if (memp[resultc2] != resultc10)
                    {
                        cmp2 = cmp2 + 1;
                    }
                }
                if (resultc3 == "M")
                {
                    auto it6 = nums2.begin();
                    advance(it6, rindexc);
                    resultc4 = *it6;
                    if (memp[resultc2] == memp[resultc4])
                    {
                        cmp1 = cmp1 + 1;
                    }
                    if (memp[resultc2] != memp[resultc4])
                    {
                        cmp2 = cmp2 + 1;
                    }
                }
            }
        }
        rindexc = rindexc + 1;
    }
        }
}
    return 0;
}
