
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
    int n = 428;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "GK_UtyMbP1YlYRE6vJOOfTT9bBpEmaZV23YslDvn5WAlYGCGyNLUfxn54NtvlMVg1Wi1YfbriOMwfr");
    nizi[1] = nizi[0];
    nizi[2] = nizi[1];
    nizi[3] = nizi[2];
    nizi[4] = nizi[2];
    nizi[5] = nizi[3];
    izdelaj(nizi, 6, "OumHM3BKLf3LPggvq5DwLpbDwhQuJ7YGwT253k8N8bfucBgLyqwJmh3ZtwFNKTtepL");
    nizi[7] = nizi[1];
    nizi[8] = nizi[2];
    izdelaj(nizi, 9, "Gw7f6sSOefdAIh_SnN_YJsSZVcdBptMBvIdnVFtvlkOmpnwjawcmnq5yHr930_DBaeg_t6Jue2VW4MKdkbDd5TP");
    izdelaj(nizi, 10, "jQX0UjTrEh641T");
    izdelaj(nizi, 11, "S4K7BLuSfuK_RQbcOuXFwhZQ6kPOvuaa9YXklsLwsBvKI71u1MjCQsj_y");
    nizi[12] = nizi[10];
    nizi[13] = nizi[4];
    nizi[14] = nizi[3];
    nizi[15] = nizi[5];
    nizi[16] = nizi[8];
    izdelaj(nizi, 17, "yaLFFTBhjyF5_pKFwGjiCm46HGG4aT5B0tNx3T");
    nizi[18] = nizi[2];
    nizi[19] = nizi[5];
    izdelaj(nizi, 20, "HWlg7qsrqobH_X1xznhawGx3H5Oy3Ny7t_c0F9dOYHdgWquJUwXPI");
    izdelaj(nizi, 21, "IkKLgDvF5A0Dpirkxh7dG6PKVWho9SY4T2Z6D0VBS0jJDThCZl6MmvQH3gy2MzZyitNkqXY0k_cV8K");
    izdelaj(nizi, 22, "KOKwgj68sUyW4nzti3XuhfI0Dmc4lsy649fZ2iGKL2Z2Oq");
    nizi[23] = nizi[19];
    izdelaj(nizi, 24, "ufIbXvfsMaVUA2p1E7ETAUQ");
    izdelaj(nizi, 25, "vntEglgdg_knfiXFPzU4f61hlVQqhQmq62PEBnw7U3RwDKaxsRegHBJGKWcsZOM0Xli8DkF1fw9IHYdMPAeVr");
    nizi[26] = nizi[19];
    nizi[27] = nizi[14];
    nizi[28] = nizi[8];
    nizi[29] = nizi[23];
    nizi[30] = nizi[10];
    izdelaj(nizi, 31, "XmXEdOKq9L3j90eQ1qXOPXgCCBP3WbKhi6r6CuSm");
    nizi[32] = nizi[6];
    nizi[33] = nizi[19];
    izdelaj(nizi, 34, "WEwU8JNa");
    izdelaj(nizi, 35, "VbgmiitwYXwtbAQqq9Og4JoJ_ou_");
    nizi[36] = nizi[5];
    nizi[37] = nizi[13];
    izdelaj(nizi, 38, "ujf1s1ulVQ4CEl8yAEHLNphwlUxRbjAatAIk5_2CL4OApDNYK6MexaZcZhtgzVoviKKnlCFtkr1eOHuOdj3Luwote5JkLF2ID11");
    izdelaj(nizi, 39, "qnw0hnNiB0UbuKHh3fOhePQoBrN3H6csavjkBptuVnTUcsu_X1aUBjh6Bt5KSBxqcMzda0E7rXgSquWV3CMCXiC5");
    nizi[40] = nizi[38];
    nizi[41] = nizi[0];
    nizi[42] = nizi[26];
    izdelaj(nizi, 43, "EB29YxtiTLIrNZTrxwwLCj0NxqdnLhh3GJvxT4CTH");
    nizi[44] = nizi[43];
    nizi[45] = nizi[10];
    nizi[46] = nizi[19];
    nizi[47] = nizi[4];
    nizi[48] = nizi[31];
    nizi[49] = nizi[1];
    izdelaj(nizi, 50, "_xlKRgO0J6trYA4qfNMrW4s61A8eyjnKtUITyMp");
    nizi[51] = nizi[14];
    nizi[52] = nizi[26];
    nizi[53] = nizi[28];
    nizi[54] = nizi[3];
    nizi[55] = nizi[24];
    izdelaj(nizi, 56, "zZJELGrB6eMpbLm0TDXQ3RjYyt4pr5F1HfJTgtuHpu2AQdSLe0U44CMmrFoo");
    nizi[57] = nizi[29];
    nizi[58] = nizi[13];
    nizi[59] = nizi[38];
    izdelaj(nizi, 60, "GnhX3gYqPaO3voVI7nyl32gLjgMxv4l77m");
    nizi[61] = nizi[7];
    izdelaj(nizi, 62, "0yK4utVhYxPJULnEIeU9rkSRxG6lh4hdNJ_MjLCI038lroKIRtbdYhx4nXllNBvVtakU");
    nizi[63] = nizi[50];
    nizi[64] = nizi[47];
    nizi[65] = nizi[28];
    nizi[66] = nizi[61];
    izdelaj(nizi, 67, "f0U5xCY7ESU9ARiSkN4CGtJfMaB76myKTh3U6TZQijURvRwzhGHunZcaYVrURkB31BzGl2b6KDikELoAZNkuIEdm55dbAls8VhT");
    nizi[68] = nizi[47];
    nizi[69] = nizi[64];
    izdelaj(nizi, 70, "UOdB7Jl6BXgV46bYaZn");
    nizi[71] = nizi[24];
    nizi[72] = nizi[66];
    nizi[73] = nizi[70];
    nizi[74] = nizi[6];
    nizi[75] = nizi[43];
    nizi[76] = nizi[58];
    izdelaj(nizi, 77, "CXjDm2xU9dSQUzYOd_Qtt9f1lapK9z17u6T");
    izdelaj(nizi, 78, "QrLu3e31FE");
    nizi[79] = nizi[24];
    izdelaj(nizi, 80, "Zl9GZcBdcb5Ixptri0Jn3IKj_Fgpvll7i6fkIypmYhiDcL5BH6OWQ9Kk_QRldL74GiPX");
    nizi[81] = nizi[54];
    izdelaj(nizi, 82, "jUqlZabKGeVTzlazgi__w7ZOKlDfHafMHH08sr98hGqzjjRK1HF6w");
    nizi[83] = nizi[47];
    nizi[84] = nizi[46];
    izdelaj(nizi, 85, "q8F0UnWAZCsRY2RvNvA_h98ydW7N6wDy2FKe6vNr6");
    izdelaj(nizi, 86, "m3hYytCTlaNfO3dBxiNXxpCm9tjQj6NYSf3ghzFToR8y2QPmWsPgnz3yG7E7OM1tmGog4u3ZBROUJyN_N9lp");
    nizi[87] = nizi[72];
    nizi[88] = nizi[42];
    izdelaj(nizi, 89, "BgAE07Ph");
    nizi[90] = nizi[45];
    izdelaj(nizi, 91, "IBzikSYDgVMVh6w8pr");
    nizi[92] = nizi[4];
    nizi[93] = nizi[52];
    nizi[94] = nizi[47];
    nizi[95] = nizi[42];
    nizi[96] = nizi[6];
    izdelaj(nizi, 97, "pUagoqfNXHwt8rPT7y2jWAcZUvhHcppT88TGJtOznug8JeOkomfb2vlRahX4Y4EvFKr8pckIVKqRuflnGnrPK1akw0");
    izdelaj(nizi, 98, "i66gSsmYGAqmxC16L5AJf7Dwxqb91w7bxPWaHukfxrCODjVP5keyrUjyrnkG76V_7NZzivLPzsc");
    nizi[99] = nizi[84];
    nizi[100] = nizi[7];
    izdelaj(nizi, 101, "XRCYb0Bc");
    nizi[102] = nizi[74];
    izdelaj(nizi, 103, "iswUJH4u2UuRWH0wacFcZMhmsMuuhpnRcUeqr1pyt_YJJMNbn7mwp_wjLTjRl_fF_2PoeXaUU8p3fAoUdQsRIjBSmsBB9");
    nizi[104] = nizi[49];
    nizi[105] = nizi[38];
    izdelaj(nizi, 106, "Hwse36SKKtKIgNiIofz13iGZoWyzqYyXbj6");
    nizi[107] = nizi[49];
    nizi[108] = nizi[99];
    izdelaj(nizi, 109, "VeBCmfegMlWPjVqNwbDYilqFpiBPtjZWZSb");
    nizi[110] = nizi[45];
    nizi[111] = nizi[56];
    nizi[112] = nizi[64];
    nizi[113] = nizi[111];
    nizi[114] = nizi[81];
    nizi[115] = nizi[60];
    izdelaj(nizi, 116, "HkUREx6hu7i5xPtvMuMVGPGb7KkydBQYZRiXejUCABLFSOJJ5imjDjV");
    izdelaj(nizi, 117, "9cKmTxUjtS_I9GqkkFb");
    nizi[118] = nizi[0];
    nizi[119] = nizi[64];
    nizi[120] = nizi[102];
    nizi[121] = nizi[51];
    nizi[122] = nizi[120];
    nizi[123] = nizi[99];
    izdelaj(nizi, 124, "HXcoDFrn0KAvlKwNeb5VATVJq6DK3Usipb_Dc10e4Dr6I0aJJ6LwqiPqAqDOgTnPbf5gvhQ5a2aXUK_CnY3zB8RVbYJ9Y_wx7");
    izdelaj(nizi, 125, "VqyH4qzvLvb65qgV4T6Zr_pM62dERaTMCq5B");
    izdelaj(nizi, 126, "ChnuFg2n3AgXdlTzga66DLolpqMz6ugbwmRx1_LefxlwXFZKXjMrBa");
    nizi[127] = nizi[58];
    nizi[128] = nizi[117];
    nizi[129] = nizi[99];
    nizi[130] = nizi[23];
    izdelaj(nizi, 131, "VHQEgZCTzPYqsTKNyrUgkVqkk4UdzW2hFwClAx_lFV1j65lSUZb3JFEHajSJKZ1KQZs3qWP22Z4Uwix6xMLx_MIcWz");
    izdelaj(nizi, 132, "6S9bUe5XpF1to0DPpYvRCY0qpKpr3MtSkUKp");
    nizi[133] = nizi[81];
    izdelaj(nizi, 134, "pwTJxwXYcJjxPz1zMtMlL_T");
    nizi[135] = nizi[50];
    izdelaj(nizi, 136, "TYPKnlZeJHtgCrd7uMq4p4YorUD0UIzX1UO_gKw");
    izdelaj(nizi, 137, "mW0pwi3cwx7XsxNGmpn3OO65BMHJMoALPRsPlPEDlU6aXEy5RVDcWntaMt0fHre");
    nizi[138] = nizi[63];
    nizi[139] = nizi[93];
    nizi[140] = nizi[55];
    nizi[141] = nizi[118];
    izdelaj(nizi, 142, "TxggJXirgW8Mhz");
    izdelaj(nizi, 143, "ac9xJcLhLrrek75QmcpB3FY0YK9RzqXCg");
    izdelaj(nizi, 144, "M4Ab2pcLbn6y2UjObpnFOj39XU_0hhngP6G2WOrtNcF6vFURhbAGUJ5RwbNFYmVE4UTrcUwhlkEsWdQuwNXKj");
    nizi[145] = nizi[0];
    izdelaj(nizi, 146, "3_e1j0eyev6RZfITrw0FFBVmd3KlW16GijJXiFzKQBQD_lWwM8QYrqJ6OXC6AuCEYFkaZ4r83avbOOG7ppB5vK0jc2BGozAV");
    nizi[147] = nizi[20];
    izdelaj(nizi, 148, "_0Cq9YJFHq_8NIFe7xUf0AxmAxrN7kqIMQClSoerAOKR");
    nizi[149] = nizi[143];
    izdelaj(nizi, 150, "quoJfWx_5bL69gHYbkf1enFyYZ7mhglrwNETPKSWEFGyNCeOZhrkIuztHK_5wyZkTYdNxOz9urlj80x");
    nizi[151] = nizi[81];
    nizi[152] = nizi[22];
    nizi[153] = nizi[141];
    izdelaj(nizi, 154, "0fk7eemVUh0tbsz6ctPk_pmwS56Df5Oj3osXXegz8BUocbvgvUslOjk0fp9gCvu1mUd1");
    nizi[155] = nizi[3];
    izdelaj(nizi, 156, "S81t_bOQ862MtA2g1Cea7pIHIhOvmR6w78cHyr6qG2h7ReULG2_vKRYgZMFgxOJ93lv2I57DY1CxnoRc5p1sFRaYg2HditGhMcoL");
    nizi[157] = nizi[72];
    izdelaj(nizi, 158, "RMQESK3r");
    izdelaj(nizi, 159, "4fDLlT_aKYDOoFVNTUizry_VxQCfonia526rBISR1");
    izdelaj(nizi, 160, "d6VL7DcN5uCl7KSwhWV");
    nizi[161] = nizi[43];
    nizi[162] = nizi[116];
    nizi[163] = nizi[138];
    izdelaj(nizi, 164, "9snnEGPBHDgQK0I939IykrLSR3MyBZnpkbx_a_HbQVKPBzAEUnS90xioXRb4fJQPl_IboHKWqr1LEk4");
    nizi[165] = nizi[28];
    nizi[166] = nizi[21];
    nizi[167] = nizi[25];
    nizi[168] = nizi[19];
    izdelaj(nizi, 169, "pv6fE58qJ8GS3io5CaYGNnTP2vBep8uZBXFVvx_x1lqNUbUvKWCD4HOHpXiaVqyenDlE1");
    nizi[170] = nizi[154];
    nizi[171] = nizi[11];
    nizi[172] = nizi[33];
    izdelaj(nizi, 173, "sa4fSffInoOoYIYMyNECoQvWS0bmxvFawNqRvBYUnIqF7ggcmFysAl6qNCnMo8xo61zTo_HDSF4uLnRHbH4vnilGCrnEnrD3");
    nizi[174] = nizi[9];
    izdelaj(nizi, 175, "tm7btshBKUTCEzepRi8fqYHDgciZEp6mEZ6PAz6TmL99ILmksbntr2kQyyYyQ7GxEuUer8c5scvxIdA8tMy3LosXk");
    nizi[176] = nizi[86];
    nizi[177] = nizi[6];
    nizi[178] = nizi[153];
    izdelaj(nizi, 179, "F2Il85zEk3N295LC8q81p6IIgEHYIC8Jp_FzzzdM9cvlPE03eh6m2GxLnKlhsIwtb");
    nizi[180] = nizi[53];
    izdelaj(nizi, 181, "fPdjHF7Ljkv6_hau6Nt1zTyy5pyxguuWj");
    nizi[182] = nizi[91];
    izdelaj(nizi, 183, "bYhvvY7MyJsesR_xiJUP4saTB0_KG_1vLBJ4AAJJxcLaeMO5Ek_zZT6og4u4VWQDnkLQPTl8ZnCeV75anpgtwT5KdKbJOatFvX");
    nizi[184] = nizi[94];
    izdelaj(nizi, 185, "w1pItatH9xgHHAA7wXViNjkZW3A0vve");
    izdelaj(nizi, 186, "7fThdJ6nYhBsbLryHiKR0TCFwuvb_GSbQxwARqKkjjrC9md8hUCTwD7igy93Hb5vzyTwDzwwqz");
    nizi[187] = nizi[122];
    nizi[188] = nizi[131];
    nizi[189] = nizi[37];
    izdelaj(nizi, 190, "o98h0XmT6M6UGSNNIg_mzT7CIWhwXE_vBMvoeViok_CVeN56_V4cbh");
    nizi[191] = nizi[32];
    nizi[192] = nizi[181];
    nizi[193] = nizi[38];
    nizi[194] = nizi[85];
    izdelaj(nizi, 195, "HqhuxJYACxgs8UHMzhnP2qTKY7YpCb1O5JW0xa6hgdMxU1Z3jA7Vjm");
    nizi[196] = nizi[195];
    nizi[197] = nizi[176];
    nizi[198] = nizi[154];
    izdelaj(nizi, 199, "vM_fERsfPogZJ7OuZjdkfhsqgVD2VZqD7fZ");
    nizi[200] = nizi[187];
    nizi[201] = nizi[157];
    izdelaj(nizi, 202, "ao8Us");
    nizi[203] = nizi[58];
    nizi[204] = nizi[103];
    nizi[205] = nizi[127];
    izdelaj(nizi, 206, "7uGNv");
    izdelaj(nizi, 207, "0tSi03jCojva0mL9rv8Z1_jf0PSpHMuvUdJz3f9KiQQoi28RJOuBwkOg3YbnzgDIP");
    nizi[208] = nizi[3];
    izdelaj(nizi, 209, "lPqXlwYUXCDC0Nz_YcePNJ4z2UGMdjjBZo1PJoFIdiwrlKaYJOPxZJy_IV9");
    nizi[210] = nizi[99];
    nizi[211] = nizi[78];
    nizi[212] = nizi[134];
    nizi[213] = nizi[117];
    izdelaj(nizi, 214, "dsMztbY3EJDIUN9G");
    nizi[215] = nizi[45];
    izdelaj(nizi, 216, "I4sfmLpdkFyFjgHbHKpQQhVFw4EkjTVnG6P4NqS4MZF75EYcgsG0CmYkMflfpe1OGiJxWKd9YSc_oUu4Eo_wL9");
    nizi[217] = nizi[12];
    nizi[218] = nizi[79];
    nizi[219] = nizi[118];
    izdelaj(nizi, 220, "7sGZaXe9BFqoS068k");
    nizi[221] = nizi[107];
    nizi[222] = nizi[62];
    nizi[223] = nizi[59];
    nizi[224] = nizi[164];
    nizi[225] = nizi[192];
    nizi[226] = nizi[38];
    nizi[227] = nizi[82];
    izdelaj(nizi, 228, "yQU_2n_1JH_HWy69VKFC0j1GTgeXrf3zAwqAaGeTJVUx5apNnMeRWRPFDhURJ");
    izdelaj(nizi, 229, "tDWj6_J4gU");
    nizi[230] = nizi[150];
    nizi[231] = nizi[167];
    izdelaj(nizi, 232, "3SgL3E");
    nizi[233] = nizi[19];
    izdelaj(nizi, 234, "eTurQ8B1BEa8F5wgxko9VJ6XuGnab5swyqaUQnmLvXBhIikto");
    izdelaj(nizi, 235, "xof");
    izdelaj(nizi, 236, "fWHmYJxsvWU_5XTKThq6V24qMfNlWFP2");
    izdelaj(nizi, 237, "zyU9B7g24l6xPkrbctpp9DG6t0hmjsBadGbthNnUJT");
    nizi[238] = nizi[130];
    nizi[239] = nizi[184];
    nizi[240] = nizi[10];
    nizi[241] = nizi[86];
    nizi[242] = nizi[72];
    nizi[243] = nizi[79];
    nizi[244] = nizi[67];
    nizi[245] = nizi[172];
    nizi[246] = nizi[74];
    nizi[247] = nizi[124];
    izdelaj(nizi, 248, "FbCNYpctFKzi0P81Ssl_EW2_8l0jSZpiz1Ep4UlAIYKwGsrAM5PAvrT2iOd");
    izdelaj(nizi, 249, "UmTznL4VYvOmUNFfdcyGfIrKkV5GNeO3iS_y5LT4dv1LWrIsRkbD65c5yPMvKVjJ31loXvsfXBa4KcfzcUTWEjgZPTplyxtKHr");
    nizi[250] = nizi[68];
    nizi[251] = nizi[110];
    nizi[252] = nizi[162];
    nizi[253] = nizi[109];
    nizi[254] = nizi[120];
    izdelaj(nizi, 255, "L5E0kYhstW5g3_USqkQ6D3Kq7jKQHvGhX__Yuuwif8PW0JVpLIQAUr0s1JAmF8S95XIqGw");
    izdelaj(nizi, 256, "i8cu9vTHVby7rVzOelz2GxzZzK_aVI5JM5l9dJofL8ASS6TwjlyVZgiLq3tYBmCTwnVPnBz8hABbhITREEXTyd");
    nizi[257] = nizi[136];
    nizi[258] = nizi[109];
    izdelaj(nizi, 259, "5IyUnPUM8DYqsXyAgtHXmrGVyLMrto8IweSL2cy24_dfI2rIljpcIFMvnj");
    nizi[260] = nizi[201];
    nizi[261] = nizi[240];
    nizi[262] = nizi[171];
    nizi[263] = nizi[32];
    nizi[264] = nizi[51];
    nizi[265] = nizi[29];
    nizi[266] = nizi[166];
    nizi[267] = nizi[233];
    nizi[268] = nizi[21];
    izdelaj(nizi, 269, "o380Wf7ujq0Gd4xRb");
    izdelaj(nizi, 270, "pcSP6x6CaVjqmtb_uBPAuSFKE_1ZZFkEBy_Gj");
    nizi[271] = nizi[50];
    nizi[272] = nizi[261];
    izdelaj(nizi, 273, "Mqgm0BPteh1TjW1XQ8VOse5RR5eF4LBkLmrVi9zNFM2O9hlLT");
    nizi[274] = nizi[229];
    nizi[275] = nizi[64];
    nizi[276] = nizi[54];
    nizi[277] = nizi[210];
    izdelaj(nizi, 278, "xt2tYXL1EUkTrziMCCGKH");
    nizi[279] = nizi[191];
    nizi[280] = nizi[202];
    nizi[281] = nizi[152];
    izdelaj(nizi, 282, "rmEXXrnCrmw9tjODDVREnuuN7upqUEfpN6Li0f5Zr4kEG6tkC7slLbYjTrmJ9pljHevasf2c2LpEU10KdwXHSWQT_siCB4Vz");
    nizi[283] = nizi[45];
    izdelaj(nizi, 284, "Lenvki3b0L6");
    nizi[285] = nizi[43];
    nizi[286] = nizi[224];
    nizi[287] = nizi[198];
    nizi[288] = nizi[122];
    nizi[289] = nizi[146];
    nizi[290] = nizi[82];
    nizi[291] = nizi[23];
    izdelaj(nizi, 292, "tEh4W5IZwtVFuslGz20byNVHv2lN1KMsWRp5IW6SyBEEGPmTkHUknRDCUssVfL1gHjl");
    nizi[293] = nizi[209];
    nizi[294] = nizi[206];
    izdelaj(nizi, 295, "3Vktad7xT4GyKCt5");
    izdelaj(nizi, 296, "nRpnWrLo5jr6SDGwfH9TzFZFlh4vDYXWjy970ucK5");
    nizi[297] = nizi[201];
    nizi[298] = nizi[256];
    nizi[299] = nizi[160];
    izdelaj(nizi, 300, "hF1XGgO9FlAjcRrYhLqVZqokKplNLbPKDOrpgipGooosYP9e35VpudR0JE3G2ZhwDoutmF_");
    izdelaj(nizi, 301, "DSkJbiNC8M8MGIa8VItCfLdg_5NXvEZ5_koGVvEt2A7e5htoiZ2EjPWLuFXRa2rJN5");
    nizi[302] = nizi[214];
    nizi[303] = nizi[8];
    nizi[304] = nizi[0];
    izdelaj(nizi, 305, "JrIhmBQTHSpjsVX5_7aAMrVcO");
    nizi[306] = nizi[279];
    nizi[307] = nizi[207];
    nizi[308] = nizi[131];
    nizi[309] = nizi[1];
    nizi[310] = nizi[136];
    nizi[311] = nizi[274];
    nizi[312] = nizi[307];
    nizi[313] = nizi[234];
    nizi[314] = nizi[156];
    nizi[315] = nizi[24];
    nizi[316] = nizi[226];
    nizi[317] = nizi[126];
    nizi[318] = nizi[18];
    nizi[319] = nizi[63];
    nizi[320] = nizi[166];
    izdelaj(nizi, 321, "BRX3hRLo0bWnxotLNdr0e7_6aDAM8pA4EHdnKfYxXDRbtIUUZb0ui3kO2Db2a8wCTLz3LLmOeGjC2LnE5FQTQsvHviMadYKo");
    nizi[322] = nizi[223];
    izdelaj(nizi, 323, "im52P3KXG17lwsdBJTkULPGmm02JGtPu5EHY0hrpL0ur6hAcrGmnzsULf_Qx9HMGr1vLO97TIfVP");
    nizi[324] = nizi[281];
    izdelaj(nizi, 325, "a6YdRV9eFnAbovs_XjSN5c05N8qnuLhSu9uo9");
    izdelaj(nizi, 326, "3E__8ddkph2JKR9t87su9rc");
    izdelaj(nizi, 327, "vJWhoAmqSngiPUriDTMOmwQOwnRqkW3e6SxjMmLgacqGdsk");
    izdelaj(nizi, 328, "TX4es6FlzT22GwPhCnZtTGmXFHbAjIkCnDTyVkK_D0WteyZGzYm93eUgVKX4");
    nizi[329] = nizi[119];
    nizi[330] = nizi[121];
    nizi[331] = nizi[239];
    nizi[332] = nizi[81];
    nizi[333] = nizi[245];
    nizi[334] = nizi[234];
    nizi[335] = nizi[65];
    izdelaj(nizi, 336, "I2N6upGQsKWXGYc_vmMo5d_");
    nizi[337] = nizi[86];
    nizi[338] = nizi[26];
    izdelaj(nizi, 339, "Ivwu47fZ7BzKhTb5Y98FzvAui0nA0ptUbjNZP5e_tQAZRV_JyrlVQVVVuTcRIXCa8C5fft2G5x9Pp2VajAYI93b4qblzU1iHA_");
    nizi[340] = nizi[303];
    nizi[341] = nizi[222];
    nizi[342] = nizi[216];
    nizi[343] = nizi[267];
    nizi[344] = nizi[75];
    nizi[345] = nizi[61];
    nizi[346] = nizi[13];
    nizi[347] = nizi[97];
    izdelaj(nizi, 348, "p60epaSrhA2r6iRtKGHxiLcZeObEoYrz3oldZkoZsg");
    izdelaj(nizi, 349, "lvpw8WpuhgEl9kTIknAtFJapPiF");
    izdelaj(nizi, 350, "loO6HKTk62712zf1dvSnDnPZisipxGMXovp06lt2gZJrcnx4_4d5an37pGlmRyxNP57dKwBs44");
    nizi[351] = nizi[199];
    nizi[352] = nizi[28];
    izdelaj(nizi, 353, "8QgjQSJ8pd6kbf3ZndbQ4vmL0AlPT7kbGBnVj6iVTfPHIwrd1jMw4b89uF6ukk2lKEna7M04cR");
    nizi[354] = nizi[140];
    nizi[355] = nizi[297];
    nizi[356] = nizi[281];
    nizi[357] = nizi[81];
    nizi[358] = nizi[10];
    nizi[359] = nizi[143];
    nizi[360] = nizi[127];
    nizi[361] = nizi[207];
    nizi[362] = nizi[16];
    nizi[363] = nizi[19];
    nizi[364] = nizi[191];
    nizi[365] = nizi[146];
    nizi[366] = nizi[50];
    nizi[367] = nizi[279];
    nizi[368] = nizi[255];
    nizi[369] = nizi[326];
    nizi[370] = nizi[231];
    nizi[371] = nizi[367];
    nizi[372] = nizi[91];
    nizi[373] = nizi[316];
    izdelaj(nizi, 374, "zgcNoAoFZTtfdp3ZGq3BUNcwUIs8BJCmOHR8zmJbXxVEK732QvndYRbZEsg07V");
    izdelaj(nizi, 375, "dEGlKJ7TpC");
    nizi[376] = nizi[211];
    nizi[377] = nizi[46];
    nizi[378] = nizi[86];
    nizi[379] = nizi[46];
    izdelaj(nizi, 380, "Wg9rX4RRL55yVAl14BvjaTIcx5rAKIgggR2v2vFu");
    izdelaj(nizi, 381, "TypHY0T0r5fBsrz1LPQ5zywlOwh05VhxTvBwbtiuPw_WBhXAKUH09dIlpeX1khSj92jYI21925lUs_1z");
    izdelaj(nizi, 382, "YI4lSiCcHjS9GOb46OI");
    nizi[383] = nizi[227];
    izdelaj(nizi, 384, "mxfTVBO149zLTPW6VnK1y");
    nizi[385] = nizi[334];
    izdelaj(nizi, 386, "QpyHnzh5za8FfZffx_0GE1ogA7KzomTFZ_Sg");
    nizi[387] = nizi[148];
    nizi[388] = nizi[9];
    nizi[389] = nizi[237];
    nizi[390] = nizi[218];
    nizi[391] = nizi[5];
    nizi[392] = nizi[176];
    nizi[393] = nizi[131];
    izdelaj(nizi, 394, "i2d1_Qc5o_7onE3zotrC");
    nizi[395] = nizi[270];
    nizi[396] = nizi[375];
    izdelaj(nizi, 397, "_k9V5mW4KjPrlUg22C8ZKB8hCjmxPlgtSQkuGhwsL_8ovyEHITQqM8GJrIJjUo3lKRcLfTxS4wBTXVO_qqSzou");
    nizi[398] = nizi[194];
    nizi[399] = nizi[157];
    nizi[400] = nizi[221];
    nizi[401] = nizi[210];
    nizi[402] = nizi[112];
    nizi[403] = nizi[48];
    nizi[404] = nizi[92];
    izdelaj(nizi, 405, "yE1_Beb2WWO39");
    nizi[406] = nizi[208];
    nizi[407] = nizi[57];
    nizi[408] = nizi[140];
    izdelaj(nizi, 409, "DQZVemTWtPPyJgb4jtokV8KYs9abcdz38EhtDTKr_l1hDTHIC4T3YV8VMKNbtmBDYMte3odAjeaIP");
    izdelaj(nizi, 410, "25T");
    nizi[411] = nizi[39];
    izdelaj(nizi, 412, "LvgKoUQa_itXr3JjhTxJLn8ospIbhQE6x35Qw93eyZzPbPjAoHlO45b15boowEuvwL2R2jdcRSMc4z7ckySceXbiIWdGIa");
    nizi[413] = nizi[373];
    nizi[414] = nizi[36];
    izdelaj(nizi, 415, "zblgfn0LOFs7tDDUNISqczeeL_6MfU0");
    izdelaj(nizi, 416, "JaN9zBiTVk_5cNdYqHQac1U4RgFw0Z93i2DZ1YGrm9dO8Cnx4wxewAAHb4WVc0J3sWYqfkVNNcPxO7TeowEsoQ2m8A");
    nizi[417] = nizi[267];
    nizi[418] = nizi[357];
    nizi[419] = nizi[144];
    izdelaj(nizi, 420, "074g5sWmyqVsuURhs_F227sndUkcIGLQw0i2DPAK95eAQUhd6zIBG2ZA6aXq1ZrQQVpCaKJxsArb8s81goqjxOdQOMcCh");
    izdelaj(nizi, 421, "uZE4ZaGXpYjui4W6wOvh3wvMl7ZdbTsd0utze0ZomFkNJwP5gJe4c");
    nizi[422] = nizi[109];
    nizi[423] = nizi[149];
    nizi[424] = nizi[120];
    izdelaj(nizi, 425, "s8IWVc389");
    nizi[426] = nizi[413];
    nizi[427] = nizi[401];

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
