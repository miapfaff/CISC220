#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "debug.hpp"
using namespace std;

// MY PARTNER: Emma Judd (emmajudd@udel.edu)

int main() {
    string alpha= "abcdefghijklmnopqrstuvwxyz";
    cout << "Hello World!" << endl;
/*****************************************************/
/* for func1 */
    string str0 = "beetlejuice ";
    int x = 3;
    func1(str0,x);
/*****************************************************/
/* for func2 */
    string string1 = "kceacruanmpedle sluastethev"; // 28 characters total
    func2(string1,28);
/*****************************************************/
/* for func3 */
    string string2 = "speliknuweorrubs tergudeunfe cestmanlbowctoshac";
    func3(string2,47);
/*****************************************************/
/* for func4 */
    int f4arr1[6] = {17, 10, 5, 20, 18, 2};
    int f4arr2[8] = {7, 21, 9, 6, 2, 39, 3, 25};
    int f4arr3[4] = {-2,1,7,2};
    int f4arr4[5] = {5, 8, 2, 13, 7};
    int f4arr5[7] = {12, -4, -2, 3, -7, -5, -3};
    cout <<
    alpha[func4(f4arr1,6)]<<alpha[func4(f4arr2,8)]<<alpha[func4(f4arr3,4)]<<alpha[func4(f4arr4,5)]<<alpha[func4(f4arr5,7)]<<endl;
/*****************************************************/
/* for func5 */
    string string5 = "vapkfslifbhnoueweoihsakbix";
    int f5arr1[14] = {57,16, 46, 41,75,31,64,21,18,13,66,68,81,10};
    int f5arr2[20] = {22,66,67,85,90,92,70,81,42,79,32,27,99,25,49,74,68,12,55,94};
/* when copying, put the above two lines on one long line*/
    int f5arr3[17] = {96,64,10,73,4,14,71,37,77,52,54,93,19,26,89,84,47};
    int f5arr4[13] = {28,49,44,19,37,42,26,78,12,88,67,51,66};
    int f5arr5[29] = {11,32,82,90,97,84,30,77,46,6,69,41,79,48,17,65,25,53,33,16,5,7,21,94,38,27,95,100,92};

/* when copying, put the above 3 lines on one long line*/
    int f5arr6[15] = {84,30,77,46,6,69,1,79,48,17,65,25,53,33,16};
    cout << string5[func5(f5arr1,48,14)] << string5[ func5(f5arr2,24,20)
]<<string5[func5(f5arr3,80,17) ] << string5 [func5(f5arr4,39,13) ] << string5
[func5(f5arr5,36,29) ] << string5 [func5(f5arr6,27,15) ]<< endl;
/*****************************************************/
/* for func6 */
    string string6= "leztiwrqekrktfmwrbfhyljmuekpvonitapsxp";
    int f6arr1[10] = {17,4,32,12,8,6,14,24,21,11};
    int f6arr2[7] = {21,33,13,18,5,8,35};
    int f6arr3[4] = {15,19,32,4};
    int f6arr4[5] ={35,20,27,24,6};
/**/
    func6(f6arr1,7,10);
    for (int i = 0; i < 10; i++) {
    cout << string6[f6arr1[i]];
    }
    cout << " ";
    func6(f6arr2,0,7);
    for (int i = 0; i < 7; i++) {
    cout << string6[f6arr2[i]];
    }
    cout << " ";
    func6(f6arr3,1,4);
    for (int i = 0; i < 4; i++) {
    cout << string6[f6arr3[i]];
    }
    cout << " ";
    func6(f6arr4,2,5);
    for (int i = 0; i < 5; i++) {
    cout << string6[f6arr4[i]];
    }
    cout << endl;
/*****************************************************/
/* for func7 */
    string s7 = "skldhbeoieldoodwac hkq cocu iaoe crhpogusyiahhifcet";
    int f7arr[27] =
{25,45,48,12,10,16,50,9,32,17,19,36,27,33,30,24,20,28,7,6,18,14,37,39,38,42,44};
    func7(s7, f7arr, 27, 18,2,false); /* won't decode */
    func7(s7,f7arr,27,12,25,true); /* will decode */
    /*****************************************************/
    /* for func8 */
    string s6 = "xezuhnbl_uiplypdhqlb";
    int len = 20;
    int f8arr[] = {2351,92837,482,65,1039,233,23095,1,2037,693842,283};
    int len2 = 11;
    func8(s6,len,f8arr,len2);

/*****************************************************/
/* for func9 */
    string s9 = "slckfoiold,eryt coteidkfzlvkaljwoeihy dnivgphweugaltzsdxls,gfxnbcm wakrm qblanuaksdhzlkjets, anuakd shojqhwtis uzcdoalbicsoiabasboihs";
    int f9arr1[30] = {2,7,9,10,15,24,36,37,42, 44,51,57,66,68,70,74,76,80,88,
    89,92,94,98,101,102,113, 115, 120, 122, 124};
    int f9len1 = 30;
    int f9arr2[17] = {8,16,17,39,40,58,67,71,72,75,77,90,91,93, 99,107,110};
    int f9len2 = 17;
    func9(s9,f9arr1,f9arr2,f9len1,f9len2);
    /*****************************************************/
    /* for func10 */
    string str10 = "alettioe twhaaabosi hkcxl";
    int f10arr[23] = {22,11,13,22,5,13,8,3,3,11,7,14,3,19,11,5,1,3,12,9,4,2,22};
    func10(str10,f10arr,23);
    /*****************************************************/
    /* for func11 */
    string s11 = "mboehdkuxkwpmnfzicosyfmeuqlaitcvwdgn";
    len = 36;
    func11(s11,len,6);
    /*****************************************************/
    /* for func12 */
    string str12 = "gboehdpixkwpangzicjsygmeaqlaltmvwdgeabndckswoshbk";
    len = 49;
    func12(str12,len,7);
    /*****************************************************/
    /* for func13 */
    string s13
    ="w_orp_eshmueryasaa_nootetkdtbueteei_ars!vsfib_t!e_fslg_!rye_yra_";
    len = 64;
    func13(s13,len,8);
    return 0;
}
    /*******************************END MAIN *****************************************/