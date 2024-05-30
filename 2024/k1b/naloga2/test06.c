
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

void izdelaj(char** nizi, int indeks, const char* niz) {
    nizi[indeks] = malloc((strlen(niz) + 1) * sizeof(char));
    strcpy(nizi[indeks], niz);
}

int main() {
    int n = 268;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "cb8TjmZDehB7C7jp0vPRjuD5NHfnGrMSSa");
    nizi[1] = nizi[0];
    nizi[2] = nizi[1];
    nizi[3] = nizi[1];
    nizi[4] = nizi[3];
    izdelaj(nizi, 5, "XfkrwFMvBA6xf5PRqx39_u4kKEsQDFMnTE0IgUvjpLgZFGInFkI7lRiukA4MeW_sBKzd0HxMtDkRs4YausrrcyncqQXr3g8khZF");
    nizi[6] = nizi[4];
    nizi[7] = nizi[3];
    nizi[8] = nizi[3];
    nizi[9] = nizi[1];
    nizi[10] = nizi[4];
    nizi[11] = nizi[0];
    nizi[12] = nizi[5];
    nizi[13] = nizi[3];
    izdelaj(nizi, 14, "J0ZIXSbPBFb16cUkhJsze5VSSegy7WSNDb0RlXga6iG6eS1OpBu7GpMl2");
    izdelaj(nizi, 15, "cJZTgNoj7fz_sIkiP8rsShCJEXDQfk7otS8d60ZDbDKaLpNLPZOhfJWnEdRyXubahIZJ8R3eqZR84bo0plj9vgMdX2edN8");
    nizi[16] = nizi[12];
    izdelaj(nizi, 17, "X9qB");
    nizi[18] = nizi[14];
    nizi[19] = nizi[3];
    nizi[20] = nizi[3];
    nizi[21] = nizi[3];
    nizi[22] = nizi[4];
    nizi[23] = nizi[13];
    nizi[24] = nizi[17];
    nizi[25] = nizi[1];
    izdelaj(nizi, 26, "SeekFme72S4dctJ8bwGGhovDmK942L9FL6j9");
    nizi[27] = nizi[11];
    izdelaj(nizi, 28, "Vl_ozOugSn10meuSk6M1cCljq3");
    nizi[29] = nizi[24];
    izdelaj(nizi, 30, "grvx2zYLI_RcabOuxRTgWFYsQip");
    nizi[31] = nizi[11];
    nizi[32] = nizi[3];
    nizi[33] = nizi[4];
    nizi[34] = nizi[8];
    nizi[35] = nizi[0];
    nizi[36] = nizi[25];
    nizi[37] = nizi[7];
    nizi[38] = nizi[24];
    nizi[39] = nizi[36];
    izdelaj(nizi, 40, "p4JAvXml9aZf4KI7P6k8cu_fT1bYijpVxJBEKwpO");
    nizi[41] = nizi[38];
    nizi[42] = nizi[3];
    nizi[43] = nizi[39];
    nizi[44] = nizi[34];
    nizi[45] = nizi[28];
    izdelaj(nizi, 46, "Mo3UzOB4Tf2FlUqiyQfnFqDA7K62bwGxcAeRwGgVXlEjfDXO1AWZi314K5Bv807yHFB3xJoETj7_KBqT3q");
    izdelaj(nizi, 47, "q8eygJUTZ2FzD8");
    nizi[48] = nizi[21];
    nizi[49] = nizi[15];
    nizi[50] = nizi[25];
    nizi[51] = nizi[23];
    nizi[52] = nizi[24];
    nizi[53] = nizi[32];
    nizi[54] = nizi[23];
    nizi[55] = nizi[22];
    izdelaj(nizi, 56, "EKEBAvQk7_wWbaiiW_YqFp0NFkL8yk2WYXR8r");
    nizi[57] = nizi[4];
    nizi[58] = nizi[2];
    izdelaj(nizi, 59, "elNgFXUAd_8sUrJpml2gZcgIK41OHh0bY_7yONzrENzPKDR5zUeLlVftBOgSB4yf");
    nizi[60] = nizi[28];
    nizi[61] = nizi[13];
    izdelaj(nizi, 62, "HkUREx6hu7i5xPtvMuMVGPGb7KkydBQYZRiXejUCABLFSOJJ5imjDjV");
    izdelaj(nizi, 63, "5s2fZ8Dl2cW5lmha7QGvxcmqi5iwlIAgZ8AM84wVeGsp3jGhSlLMqVcJP9DX6QQ0");
    nizi[64] = nizi[7];
    nizi[65] = nizi[6];
    nizi[66] = nizi[2];
    nizi[67] = nizi[44];
    nizi[68] = nizi[57];
    nizi[69] = nizi[5];
    nizi[70] = nizi[40];
    nizi[71] = nizi[69];
    nizi[72] = nizi[68];
    nizi[73] = nizi[42];
    nizi[74] = nizi[21];
    nizi[75] = nizi[23];
    izdelaj(nizi, 76, "Tuy5bxkvBX5OfMrgXN7Hbu_N1W0SeBvuleQkKAIt6268tcyuwwWScdYtttZtk0DT8OAoogX");
    nizi[77] = nizi[45];
    nizi[78] = nizi[33];
    nizi[79] = nizi[56];
    izdelaj(nizi, 80, "2c5bKHOThgck7tqqzpIW5_39V0DGqS7gAyu7D");
    nizi[81] = nizi[64];
    nizi[82] = nizi[78];
    izdelaj(nizi, 83, "NY76ffigkaS7lMjtObyaymyDZaGu85X1VTaC6sW7TRFQV_7d8We6Eh");
    izdelaj(nizi, 84, "Nrtns_fDiRm");
    izdelaj(nizi, 85, "bsabG8hrLhJsCvmDzmsrzQIdgcXTPsVG6ydBh7H0JOnjiVc5QVb7n");
    nizi[86] = nizi[62];
    nizi[87] = nizi[14];
    nizi[88] = nizi[47];
    izdelaj(nizi, 89, "DOJoqo3d5xQkEWWeTPyMG74V0aVA8MtotSAyAeZXjFpGrpf_QGHsoRu");
    nizi[90] = nizi[61];
    nizi[91] = nizi[88];
    nizi[92] = nizi[30];
    nizi[93] = nizi[6];
    nizi[94] = nizi[0];
    nizi[95] = nizi[48];
    nizi[96] = nizi[34];
    izdelaj(nizi, 97, "F1xVo8smZZqyHIituY2tTYmnl4scaUEmQA4mEXKFMAi30U9fPtnBOZZOr2YHoyWKMrER0p6Z1iF0eQLw2ogmUid4");
    izdelaj(nizi, 98, "1NXyawL_BlRlP9q9FQqQp7uw4iFpkKi9WJ9_4Dtvq2tqDSWWxPGcWxFBQHNqWsK712ZRAek6KeOA9i4j");
    izdelaj(nizi, 99, "sU42m2Tqcx6nHYE7FjaGoldkFxbHhSRnWpTzJG8QBAyUKGQ5GMkD");
    nizi[100] = nizi[4];
    nizi[101] = nizi[60];
    nizi[102] = nizi[71];
    izdelaj(nizi, 103, "MJ2PtU6msBF4YUpsgVPMecXubP8BKKTanV");
    nizi[104] = nizi[47];
    nizi[105] = nizi[51];
    nizi[106] = nizi[58];
    izdelaj(nizi, 107, "u4kYNYPqwQGlDtvU4UJKtqQccVzY6rXoMupITaxAsJL7QZYtwMn6oRSyHWaL2Bfp2ym5uFiDWzxYnBarj148g8KJZl");
    nizi[108] = nizi[36];
    nizi[109] = nizi[47];
    nizi[110] = nizi[92];
    nizi[111] = nizi[69];
    nizi[112] = nizi[20];
    izdelaj(nizi, 113, "vPupRPOHIJetLx");
    nizi[114] = nizi[102];
    nizi[115] = nizi[111];
    nizi[116] = nizi[5];
    nizi[117] = nizi[2];
    nizi[118] = nizi[4];
    izdelaj(nizi, 119, "2VtC");
    nizi[120] = nizi[33];
    nizi[121] = nizi[6];
    nizi[122] = nizi[46];
    nizi[123] = nizi[82];
    nizi[124] = nizi[10];
    nizi[125] = nizi[67];
    nizi[126] = nizi[85];
    izdelaj(nizi, 127, "YEkfcB25YhPOp43Weasgurr3kG");
    nizi[128] = nizi[46];
    nizi[129] = nizi[0];
    nizi[130] = nizi[102];
    nizi[131] = nizi[84];
    izdelaj(nizi, 132, "oqgavvP6UEtKAetjMrcFldqc9cdvggKVbHHvjMBHHNhTGwjRxoIKyr6C_aV5rjOtDohDYaLPH7cDzKSmHCJ7TimkKhPtHSo_2pPU");
    nizi[133] = nizi[27];
    nizi[134] = nizi[91];
    nizi[135] = nizi[73];
    izdelaj(nizi, 136, "nsA5ToaCeCgD6AxQj9geXDpkzLzH3TjhCt6GBgZEiuFxWcnvuHjQ_vFZVSzcsLaCCXwaK709ky5QMlYk8hu");
    nizi[137] = nizi[111];
    nizi[138] = nizi[27];
    nizi[139] = nizi[60];
    izdelaj(nizi, 140, "dh5KaHxPlvQh4AgyfecMnnV8GXbVjXkfz30Lxl2RyvLJm1zwwgboXfjYqz_EID2Yl9ZmpWYk");
    izdelaj(nizi, 141, "7yQapFYsmuvIReU");
    nizi[142] = nizi[33];
    izdelaj(nizi, 143, "j6qBlIwSUBRim1fsfQGoR3_vKOxDAHihsnxGxTTVJT7h4JiZXK1xt3d6ohxUbgmolkhQDCHpIdvUVKjw7bd");
    nizi[144] = nizi[98];
    nizi[145] = nizi[128];
    nizi[146] = nizi[2];
    nizi[147] = nizi[27];
    nizi[148] = nizi[123];
    nizi[149] = nizi[133];
    nizi[150] = nizi[91];
    nizi[151] = nizi[3];
    izdelaj(nizi, 152, "e93uAT9JBWOMueKJUL24wAn8RDgOQ1Zt6I1qfIiTzOx8av7fcGroEv3XEXf0xFNeGSmCMHHiOyPQrhRl851wM1IbqqDMDC");
    nizi[153] = nizi[119];
    nizi[154] = nizi[105];
    nizi[155] = nizi[4];
    nizi[156] = nizi[97];
    nizi[157] = nizi[106];
    nizi[158] = nizi[51];
    nizi[159] = nizi[37];
    nizi[160] = nizi[29];
    nizi[161] = nizi[111];
    nizi[162] = nizi[36];
    nizi[163] = nizi[41];
    nizi[164] = nizi[125];
    nizi[165] = nizi[37];
    nizi[166] = nizi[37];
    nizi[167] = nizi[7];
    nizi[168] = nizi[8];
    nizi[169] = nizi[24];
    nizi[170] = nizi[164];
    izdelaj(nizi, 171, "LDMZSiSuwguZZ8Nk1utJgH_zGCsg");
    nizi[172] = nizi[78];
    izdelaj(nizi, 173, "UTipTtxYiHYuDHWzWeTmG");
    izdelaj(nizi, 174, "fRMhJCJPYBhzbUGXyofHAdtXJiLvRcEvBC9pqBln0qyGS");
    nizi[175] = nizi[49];
    nizi[176] = nizi[34];
    nizi[177] = nizi[174];
    nizi[178] = nizi[176];
    nizi[179] = nizi[122];
    nizi[180] = nizi[52];
    izdelaj(nizi, 181, "SfRkbbytGFb1Snu2Lufx7yJ6epELcg4qgWE");
    nizi[182] = nizi[67];
    nizi[183] = nizi[168];
    izdelaj(nizi, 184, "rlKu5ssNF6uQsKQ13R2thfhQvB_OClzlgqKrh09EmbVByRMNRlsZMSoVXZa");
    nizi[185] = nizi[136];
    nizi[186] = nizi[142];
    nizi[187] = nizi[92];
    nizi[188] = nizi[164];
    izdelaj(nizi, 189, "Xa6ZORikO7IZtdTNXwOeY2SGF1lBafxOJPuWZGe8zzsSJc3TwMvHOtXqQDTxj9VUbiY7XaOEABlicO");
    nizi[190] = nizi[130];
    nizi[191] = nizi[176];
    nizi[192] = nizi[92];
    nizi[193] = nizi[74];
    izdelaj(nizi, 194, "qj_U6Z4OKAgqgG8Wr6q6SasQuye1YLIRp3gGcFFMklW81bCQQiA87dpce1JQgoxensk");
    nizi[195] = nizi[22];
    nizi[196] = nizi[102];
    nizi[197] = nizi[33];
    nizi[198] = nizi[44];
    nizi[199] = nizi[10];
    nizi[200] = nizi[170];
    nizi[201] = nizi[83];
    izdelaj(nizi, 202, "POrf7cgJq9KKVk91OtYHdsDWsdtPiMZknxk3rghFTrpUxzn6Me0oeau59NheV6RgIuHNnd9Ztih");
    nizi[203] = nizi[175];
    nizi[204] = nizi[40];
    izdelaj(nizi, 205, "uhAN");
    nizi[206] = nizi[56];
    nizi[207] = nizi[114];
    izdelaj(nizi, 208, "k5XPgNkzi6RcqsDW1LUpLF9e48ZnN98hoibtIMgJ");
    nizi[209] = nizi[204];
    nizi[210] = nizi[207];
    izdelaj(nizi, 211, "gbGRURaXTUcjYv_rtmqvZeizlLOHOmsy_Ep5l2TpIQDZe7Su_c0DZ1reYh04gOjQa1eu0hxzFQ_T8Fuz4lNiQsBlSrRzMm7K");
    nizi[212] = nizi[93];
    izdelaj(nizi, 213, "b6WNarPmMvi0EzGwOve_T2J0WLnMgjQqQXyiNqIl_eDX_poG92Ibi89GsJIMN2nP");
    izdelaj(nizi, 214, "e8FML5sVySl_Wk1kx2nvSDdNPwYoAapCzdKr3dfi0WscqBm1smJ0bqJShWn");
    nizi[215] = nizi[143];
    izdelaj(nizi, 216, "FtK7wvT654J6h3GSjzPJhguZNO2rRnPS0zpzNyz0mg91MMdZVwOUNMNUQg7AlFqo");
    nizi[217] = nizi[43];
    nizi[218] = nizi[15];
    nizi[219] = nizi[196];
    nizi[220] = nizi[193];
    nizi[221] = nizi[65];
    nizi[222] = nizi[130];
    nizi[223] = nizi[24];
    nizi[224] = nizi[101];
    nizi[225] = nizi[160];
    nizi[226] = nizi[117];
    izdelaj(nizi, 227, "lFKjjVG01OJ8o1ps4QyryIUhYp6IXriN5ft7bnNpBP8TwLeHkQY2kDX7HemaV0IZ4P2");
    nizi[228] = nizi[118];
    nizi[229] = nizi[193];
    nizi[230] = nizi[58];
    nizi[231] = nizi[145];
    nizi[232] = nizi[142];
    nizi[233] = nizi[171];
    izdelaj(nizi, 234, "e0q4jGm7OTklfawM227tRc9LFkVI3M4SViGUn4QAc5DlHVaZghH5YoJdL8bvhknO8Y5QTz9wgTcZCxz501UJRoXA_n3qo");
    nizi[235] = nizi[186];
    izdelaj(nizi, 236, "F20O8hMuGKCvPLF9q2pc8EBRivIGWcPsgXsQaDZi104p6hujkfIHg6cwFDInQFGSDzKVYA79LIjFmuaRA7nOqQoGM5");
    nizi[237] = nizi[225];
    nizi[238] = nizi[45];
    nizi[239] = nizi[7];
    nizi[240] = nizi[159];
    izdelaj(nizi, 241, "VwpaGXqyrFOtW_U8yPGOje9zuU5SiXFMCL3WlY5XFSmydPcRq1ynreGx4mdFDLjiiStHTZc7LEgtoc");
    nizi[242] = nizi[197];
    izdelaj(nizi, 243, "v5RisH2xFEyt1oVPRiqZpsiXXP9UJsipkWq0IsmlDaPGd33RtaGNTwyZMKwMY9hNAd7yJBCG4qniU_Vs10EPNAsxb1");
    nizi[244] = nizi[194];
    nizi[245] = nizi[125];
    nizi[246] = nizi[195];
    izdelaj(nizi, 247, "n2tCxaYt4WMyY0Vebf0gvBfzSDflHzIoWVkmMW1pp49eq47vuM_oXGVMWn2t7Eei8tVrvS86u8t");
    nizi[248] = nizi[166];
    nizi[249] = nizi[69];
    nizi[250] = nizi[69];
    nizi[251] = nizi[131];
    nizi[252] = nizi[22];
    nizi[253] = nizi[142];
    nizi[254] = nizi[125];
    nizi[255] = nizi[33];
    nizi[256] = nizi[142];
    nizi[257] = nizi[157];
    nizi[258] = nizi[135];
    nizi[259] = nizi[228];
    nizi[260] = nizi[251];
    nizi[261] = nizi[134];
    nizi[262] = nizi[251];
    nizi[263] = nizi[214];
    nizi[264] = nizi[130];
    nizi[265] = nizi[137];
    nizi[266] = nizi[230];
    nizi[267] = nizi[80];

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    razbohoti(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
        free(nizi[i]);
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}
