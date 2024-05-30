
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
    int n = 449;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "dwMFJkVneQs_LAqQ8nvKkJDpLA0JrMhUYGzEl77Qi9bueBt4tC2OSbhHurWejv8UEnFciho");
    nizi[1] = nizi[0];
    nizi[2] = nizi[1];
    nizi[3] = nizi[0];
    izdelaj(nizi, 4, "dwMFJkVneQs_LAqQ8nvKkJDpLA0JrMhUYGzEl77Qi9bueBt4tC2OSbhHurWejv8UEnFciho");
    izdelaj(nizi, 5, "Nrtns_fDiRm");
    izdelaj(nizi, 6, "Nrtns_fDiRm");
    nizi[7] = nizi[3];
    nizi[8] = nizi[0];
    izdelaj(nizi, 9, "KSeqEO97txltpjoPOASPcGUC4HfxNRv0HcpUImY9j2y210q7sdbWHp");
    nizi[10] = nizi[5];
    izdelaj(nizi, 11, "KSeqEO97txltpjoPOASPcGUC4HfxNRv0HcpUImY9j2y210q7sdbWHp");
    nizi[12] = nizi[7];
    izdelaj(nizi, 13, "1UwsemB9");
    izdelaj(nizi, 14, "KSeqEO97txltpjoPOASPcGUC4HfxNRv0HcpUImY9j2y210q7sdbWHp");
    izdelaj(nizi, 15, "dwMFJkVneQs_LAqQ8nvKkJDpLA0JrMhUYGzEl77Qi9bueBt4tC2OSbhHurWejv8UEnFciho");
    nizi[16] = nizi[5];
    nizi[17] = nizi[0];
    izdelaj(nizi, 18, "6wLzwfVu4AZLYLl3k3aoXnKPRiMLkh7eVqa8LXQrpb9WJIkjJcepm4m5aFaLhi7a_RoaGE_IN0LK");
    nizi[19] = nizi[7];
    nizi[20] = nizi[12];
    izdelaj(nizi, 21, "dwMFJkVneQs_LAqQ8nvKkJDpLA0JrMhUYGzEl77Qi9bueBt4tC2OSbhHurWejv8UEnFciho");
    nizi[22] = nizi[8];
    nizi[23] = nizi[7];
    izdelaj(nizi, 24, "Nrtns_fDiRm");
    nizi[25] = nizi[5];
    izdelaj(nizi, 26, "Oxrt509F6mDaYWG9GW");
    nizi[27] = nizi[10];
    nizi[28] = nizi[23];
    nizi[29] = nizi[26];
    nizi[30] = nizi[17];
    nizi[31] = nizi[6];
    izdelaj(nizi, 32, "MJloIDr65N9fvt0G5wY92S1YLggMEUIwDJoqf8p9cKq4R2bxUTD8TIS");
    nizi[33] = nizi[29];
    izdelaj(nizi, 34, "72CR93N3bX6UyndcRUPoPQfy3VZvoFQBIbrkQP4ZzXuKJE_lhddgGNzsm88MviPCwldz_BQcIpCOfi7oAd89_JGUepOxQ6rj2zg");
    izdelaj(nizi, 35, "KSeqEO97txltpjoPOASPcGUC4HfxNRv0HcpUImY9j2y210q7sdbWHp");
    nizi[36] = nizi[26];
    nizi[37] = nizi[29];
    izdelaj(nizi, 38, "lVLorIg99vr0I_Dl2Vc5jbO8THwTCCZ");
    izdelaj(nizi, 39, "MJloIDr65N9fvt0G5wY92S1YLggMEUIwDJoqf8p9cKq4R2bxUTD8TIS");
    nizi[40] = nizi[22];
    izdelaj(nizi, 41, "25GItO8Sqqm4w1kYZIybEGtkDIe05fUOCfMz6mBvkjcCJjxNzoTcY6LE1LBQOIZpZnX8aTRK6iaOSmDQAHnfE3b4IcPJ3RBgEeP9");
    nizi[42] = nizi[29];
    nizi[43] = nizi[40];
    izdelaj(nizi, 44, "zlH86F1UKhyYZw4zxsnaq7");
    nizi[45] = nizi[19];
    izdelaj(nizi, 46, "t7oq9VyG9Gk");
    izdelaj(nizi, 47, "zlH86F1UKhyYZw4zxsnaq7");
    izdelaj(nizi, 48, "25GItO8Sqqm4w1kYZIybEGtkDIe05fUOCfMz6mBvkjcCJjxNzoTcY6LE1LBQOIZpZnX8aTRK6iaOSmDQAHnfE3b4IcPJ3RBgEeP9");
    izdelaj(nizi, 49, "dwMFJkVneQs_LAqQ8nvKkJDpLA0JrMhUYGzEl77Qi9bueBt4tC2OSbhHurWejv8UEnFciho");
    izdelaj(nizi, 50, "GEJJgtsu6BMJEmArHk5MNWPtG3Rds94WMZogxjIOE3");
    izdelaj(nizi, 51, "t7oq9VyG9Gk");
    izdelaj(nizi, 52, "FUTTZP6Jw5bDUIpzznV53dBmVs1IeXUETsR8i7E2cISybBsXJhpSL7k");
    izdelaj(nizi, 53, "Nrtns_fDiRm");
    nizi[54] = nizi[24];
    nizi[55] = nizi[38];
    izdelaj(nizi, 56, "fNW6aJyFUxwwnWVbKeD8XIQ1JRXanm7YhdNfIm8RsKestYu0sUDqtl6ua1KRXycFfwuvhvyklys1rY91yjYwi");
    izdelaj(nizi, 57, "Oxrt509F6mDaYWG9GW");
    nizi[58] = nizi[47];
    izdelaj(nizi, 59, "c9i9px0uiTA74eYxWuHTpfsgJYiMsZVUeif19UGxk97KdmjClbCLuNEHtONkArHeI8nC2NT7cL3");
    izdelaj(nizi, 60, "9fj6ZWgiLvwGDp5Rrf19Mht1wxJD4UyF04L6EQ4SVRCEoyyO2TtfTcoTTgsA");
    izdelaj(nizi, 61, "Nrtns_fDiRm");
    nizi[62] = nizi[39];
    izdelaj(nizi, 63, "eyvJgSIOZ5Zxtr1OOgfwkTks");
    nizi[64] = nizi[53];
    izdelaj(nizi, 65, "c9i9px0uiTA74eYxWuHTpfsgJYiMsZVUeif19UGxk97KdmjClbCLuNEHtONkArHeI8nC2NT7cL3");
    nizi[66] = nizi[40];
    izdelaj(nizi, 67, "1UwsemB9");
    izdelaj(nizi, 68, "I8YlvVQZy0ZtJ2ve2mb4ZDAZzY8BEHK65rZEImdV42SVXqgTLkgi6hxwSuuAhoqSai_cjtzjf9SKbmXDD1dBSkE");
    izdelaj(nizi, 69, "k7QNQHZpLGmsf9TACxmuWvJ4QNX6YXdNmMoSlhiTuTDmHMCoB6rWMoGsQcHJpbGkR75OZpsIWl36jUUihp7Y");
    nizi[70] = nizi[49];
    izdelaj(nizi, 71, "k7QNQHZpLGmsf9TACxmuWvJ4QNX6YXdNmMoSlhiTuTDmHMCoB6rWMoGsQcHJpbGkR75OZpsIWl36jUUihp7Y");
    izdelaj(nizi, 72, "fNW6aJyFUxwwnWVbKeD8XIQ1JRXanm7YhdNfIm8RsKestYu0sUDqtl6ua1KRXycFfwuvhvyklys1rY91yjYwi");
    izdelaj(nizi, 73, "z4E4tKcdwBSyoZQFYp9U2d6Q2CfzGKJIqMNZG3N_V86CDViVvVjEemtEY9q6Q");
    izdelaj(nizi, 74, "6wLzwfVu4AZLYLl3k3aoXnKPRiMLkh7eVqa8LXQrpb9WJIkjJcepm4m5aFaLhi7a_RoaGE_IN0LK");
    nizi[75] = nizi[55];
    izdelaj(nizi, 76, "yqQ8AUYnIw52ohrvrRz5dLtkyDyT9G7ynrCuzhuP0yKN2bs4QEBVIL9ACGVy");
    nizi[77] = nizi[41];
    nizi[78] = nizi[27];
    izdelaj(nizi, 79, "FUTTZP6Jw5bDUIpzznV53dBmVs1IeXUETsR8i7E2cISybBsXJhpSL7k");
    nizi[80] = nizi[20];
    nizi[81] = nizi[46];
    nizi[82] = nizi[53];
    izdelaj(nizi, 83, "1OTw229ezmkM7tgbl1GHG30F7iBM6G_GY0rm5oOO48o7mysCoGXBnXkUzsb2ZpepoJm");
    izdelaj(nizi, 84, "Yl90WntCyKLBZT_q01tRUxyonyJt61szaVuMcno");
    nizi[85] = nizi[79];
    izdelaj(nizi, 86, "Oxrt509F6mDaYWG9GW");
    nizi[87] = nizi[79];
    nizi[88] = nizi[27];
    nizi[89] = nizi[40];
    nizi[90] = nizi[20];
    nizi[91] = nizi[35];
    nizi[92] = nizi[78];
    nizi[93] = nizi[20];
    izdelaj(nizi, 94, "Nrtns_fDiRm");
    nizi[95] = nizi[69];
    nizi[96] = nizi[84];
    nizi[97] = nizi[79];
    izdelaj(nizi, 98, "1UwsemB9");
    nizi[99] = nizi[82];
    nizi[100] = nizi[90];
    nizi[101] = nizi[20];
    nizi[102] = nizi[54];
    izdelaj(nizi, 103, "MJloIDr65N9fvt0G5wY92S1YLggMEUIwDJoqf8p9cKq4R2bxUTD8TIS");
    nizi[104] = nizi[76];
    nizi[105] = nizi[50];
    izdelaj(nizi, 106, "kSMgcvK66cJx");
    izdelaj(nizi, 107, "6VDm96jVbHPCb25F3rsG1V6JwEIoC1r7DzFlYQzyffynWt9O97ucBVy9ypAR2EWbI3XZeFKyY");
    nizi[108] = nizi[106];
    nizi[109] = nizi[39];
    nizi[110] = nizi[107];
    izdelaj(nizi, 111, "EG8XLt02ZqBefLoEibLEbg");
    izdelaj(nizi, 112, "FUTTZP6Jw5bDUIpzznV53dBmVs1IeXUETsR8i7E2cISybBsXJhpSL7k");
    izdelaj(nizi, 113, "Nrtns_fDiRm");
    nizi[114] = nizi[74];
    izdelaj(nizi, 115, "hrAeejocoPnCAqvL5t3H75U_CDW0EtTOeGCbzpixMJbxaYep1zxS0fhzGAQQukdHz0");
    nizi[116] = nizi[39];
    nizi[117] = nizi[59];
    nizi[118] = nizi[114];
    izdelaj(nizi, 119, "9fj6ZWgiLvwGDp5Rrf19Mht1wxJD4UyF04L6EQ4SVRCEoyyO2TtfTcoTTgsA");
    nizi[120] = nizi[64];
    nizi[121] = nizi[95];
    nizi[122] = nizi[63];
    izdelaj(nizi, 123, "dwMFJkVneQs_LAqQ8nvKkJDpLA0JrMhUYGzEl77Qi9bueBt4tC2OSbhHurWejv8UEnFciho");
    izdelaj(nizi, 124, "zlH86F1UKhyYZw4zxsnaq7");
    nizi[125] = nizi[85];
    nizi[126] = nizi[64];
    nizi[127] = nizi[42];
    nizi[128] = nizi[108];
    izdelaj(nizi, 129, "MJloIDr65N9fvt0G5wY92S1YLggMEUIwDJoqf8p9cKq4R2bxUTD8TIS");
    nizi[130] = nizi[105];
    izdelaj(nizi, 131, "25GItO8Sqqm4w1kYZIybEGtkDIe05fUOCfMz6mBvkjcCJjxNzoTcY6LE1LBQOIZpZnX8aTRK6iaOSmDQAHnfE3b4IcPJ3RBgEeP9");
    nizi[132] = nizi[32];
    izdelaj(nizi, 133, "Yl90WntCyKLBZT_q01tRUxyonyJt61szaVuMcno");
    izdelaj(nizi, 134, "_x45IMxNBMVIuVuHYzWJgcruM4v");
    nizi[135] = nizi[84];
    izdelaj(nizi, 136, "f34iB5MekAOrCrEPCZrgxEPYP1vc7lIDW_d1ocJBkiP21BH5JA6xDx9MNbE7PA6_p2VnZv8dxGkMjYpNaYiX");
    izdelaj(nizi, 137, "P1twD0Li6GyqswxhQZ7ovwZB1DieynJDPd5mUOIUzU");
    izdelaj(nizi, 138, "z4E4tKcdwBSyoZQFYp9U2d6Q2CfzGKJIqMNZG3N_V86CDViVvVjEemtEY9q6Q");
    izdelaj(nizi, 139, "6VDm96jVbHPCb25F3rsG1V6JwEIoC1r7DzFlYQzyffynWt9O97ucBVy9ypAR2EWbI3XZeFKyY");
    izdelaj(nizi, 140, "l50nqg2zeQTSHZxPTOSslMKA_3n1bcAwGtiNUvjrl4hI3Qq_o4x_zWkkp");
    nizi[141] = nizi[27];
    izdelaj(nizi, 142, "oEmNmNoNeklmBUuLxPnqWAV5SzKJ9CRaR9h0W");
    nizi[143] = nizi[113];
    nizi[144] = nizi[11];
    nizi[145] = nizi[15];
    nizi[146] = nizi[96];
    nizi[147] = nizi[113];
    nizi[148] = nizi[45];
    izdelaj(nizi, 149, "rZuu_db3Ns5sPziAgPhusiAQTZx0eIv8tqIZAwPOmsnrF6KKpAsstD4ZRf86w1k");
    izdelaj(nizi, 150, "6wLzwfVu4AZLYLl3k3aoXnKPRiMLkh7eVqa8LXQrpb9WJIkjJcepm4m5aFaLhi7a_RoaGE_IN0LK");
    izdelaj(nizi, 151, "rZuu_db3Ns5sPziAgPhusiAQTZx0eIv8tqIZAwPOmsnrF6KKpAsstD4ZRf86w1k");
    izdelaj(nizi, 152, "i7Ld5LEnSTjmHxA570K0bL5k_4HZteMoFZzu9kotr");
    nizi[153] = nizi[10];
    nizi[154] = nizi[118];
    nizi[155] = nizi[56];
    nizi[156] = nizi[10];
    izdelaj(nizi, 157, "FUTTZP6Jw5bDUIpzznV53dBmVs1IeXUETsR8i7E2cISybBsXJhpSL7k");
    nizi[158] = nizi[8];
    nizi[159] = nizi[94];
    izdelaj(nizi, 160, "EG8XLt02ZqBefLoEibLEbg");
    nizi[161] = nizi[134];
    nizi[162] = nizi[34];
    izdelaj(nizi, 163, "l50nqg2zeQTSHZxPTOSslMKA_3n1bcAwGtiNUvjrl4hI3Qq_o4x_zWkkp");
    izdelaj(nizi, 164, "GEJJgtsu6BMJEmArHk5MNWPtG3Rds94WMZogxjIOE3");
    nizi[165] = nizi[113];
    izdelaj(nizi, 166, "i7Ld5LEnSTjmHxA570K0bL5k_4HZteMoFZzu9kotr");
    izdelaj(nizi, 167, "i7Ld5LEnSTjmHxA570K0bL5k_4HZteMoFZzu9kotr");
    nizi[168] = nizi[139];
    nizi[169] = nizi[27];
    izdelaj(nizi, 170, "I8YlvVQZy0ZtJ2ve2mb4ZDAZzY8BEHK65rZEImdV42SVXqgTLkgi6hxwSuuAhoqSai_cjtzjf9SKbmXDD1dBSkE");
    nizi[171] = nizi[136];
    nizi[172] = nizi[80];
    nizi[173] = nizi[72];
    nizi[174] = nizi[52];
    nizi[175] = nizi[143];
    nizi[176] = nizi[27];
    izdelaj(nizi, 177, "1OTw229ezmkM7tgbl1GHG30F7iBM6G_GY0rm5oOO48o7mysCoGXBnXkUzsb2ZpepoJm");
    nizi[178] = nizi[108];
    izdelaj(nizi, 179, "fl");
    izdelaj(nizi, 180, "FUTTZP6Jw5bDUIpzznV53dBmVs1IeXUETsR8i7E2cISybBsXJhpSL7k");
    nizi[181] = nizi[139];
    nizi[182] = nizi[160];
    nizi[183] = nizi[74];
    izdelaj(nizi, 184, "Ob8YIu_zDZsGS4");
    izdelaj(nizi, 185, "dc1lj_BCDvLBa");
    izdelaj(nizi, 186, "jSJjkGZPPAuzNMdGoBzUhYehg6t2TuAFrx0");
    nizi[187] = nizi[109];
    nizi[188] = nizi[32];
    nizi[189] = nizi[59];
    nizi[190] = nizi[112];
    nizi[191] = nizi[104];
    nizi[192] = nizi[177];
    nizi[193] = nizi[3];
    nizi[194] = nizi[7];
    nizi[195] = nizi[140];
    izdelaj(nizi, 196, "z4E4tKcdwBSyoZQFYp9U2d6Q2CfzGKJIqMNZG3N_V86CDViVvVjEemtEY9q6Q");
    izdelaj(nizi, 197, "TefuBZmAX28oZFM7NrA08Pt40FjzeMZOYO0wsBQ6Zjkr9fGeN7EVybuddkcWjNRGNenUfOI63XE0lgpDc");
    izdelaj(nizi, 198, "lv1bVd2suP193Ga_gz_I97ofTwO1");
    izdelaj(nizi, 199, "g1rJdxuepwMa3VDjNWLZzFf8ShtMojg5AZq2o_bI3iRocS8i_LUYDQC9eVaUMAmarLAz141GUam7GR7MhEP_Nzl6Dv_xeA");
    izdelaj(nizi, 200, "Js5h5ivFf7EEmdJIaNbK");
    nizi[201] = nizi[52];
    izdelaj(nizi, 202, "5TdUYUto3zex5aOcoGaUf4rhSH19PmTFpk0z9uZHOEN3U9oeyVJP1rG0OS5eWwF3EIhMJp1BkYv");
    izdelaj(nizi, 203, "Ii12uYycsrl94ClwLdDhigpeErOciF62wwLLeZ2FTABlY4GoWMVWBywzcOEwBHD4JOmck5s");
    nizi[204] = nizi[88];
    izdelaj(nizi, 205, "Js5h5ivFf7EEmdJIaNbK");
    izdelaj(nizi, 206, "yqQ8AUYnIw52ohrvrRz5dLtkyDyT9G7ynrCuzhuP0yKN2bs4QEBVIL9ACGVy");
    izdelaj(nizi, 207, "kvGiGQzp7VJeSFCx4CXqNjTrgVXsTJzpNAJcXbDpTG_yU6VYbU2sUhK6Fob9J7SwYQ");
    nizi[208] = nizi[124];
    nizi[209] = nizi[186];
    izdelaj(nizi, 210, "kSMgcvK66cJx");
    nizi[211] = nizi[43];
    nizi[212] = nizi[94];
    izdelaj(nizi, 213, "t7oq9VyG9Gk");
    izdelaj(nizi, 214, "72CR93N3bX6UyndcRUPoPQfy3VZvoFQBIbrkQP4ZzXuKJE_lhddgGNzsm88MviPCwldz_BQcIpCOfi7oAd89_JGUepOxQ6rj2zg");
    nizi[215] = nizi[38];
    izdelaj(nizi, 216, "7zl_KhLayTafnC");
    nizi[217] = nizi[203];
    izdelaj(nizi, 218, "c9i9px0uiTA74eYxWuHTpfsgJYiMsZVUeif19UGxk97KdmjClbCLuNEHtONkArHeI8nC2NT7cL3");
    izdelaj(nizi, 219, "z2A8wCtHbVZXGEtFlMsOh1kTNurzqzJbWLU8u98fBCXtG");
    nizi[220] = nizi[31];
    nizi[221] = nizi[156];
    nizi[222] = nizi[18];
    nizi[223] = nizi[181];
    izdelaj(nizi, 224, "GEJJgtsu6BMJEmArHk5MNWPtG3Rds94WMZogxjIOE3");
    nizi[225] = nizi[25];
    nizi[226] = nizi[93];
    nizi[227] = nizi[95];
    izdelaj(nizi, 228, "kvGiGQzp7VJeSFCx4CXqNjTrgVXsTJzpNAJcXbDpTG_yU6VYbU2sUhK6Fob9J7SwYQ");
    nizi[229] = nizi[139];
    izdelaj(nizi, 230, "72CR93N3bX6UyndcRUPoPQfy3VZvoFQBIbrkQP4ZzXuKJE_lhddgGNzsm88MviPCwldz_BQcIpCOfi7oAd89_JGUepOxQ6rj2zg");
    nizi[231] = nizi[37];
    izdelaj(nizi, 232, "G2Pe82slY_8490JiM2QiVjA2RUW0qIh8LnMj3880SygGi");
    nizi[233] = nizi[221];
    izdelaj(nizi, 234, "C4pfcJcEmtDXeX507GOH9ltPAhtTmuqBXW529DjM5Ky2y91HxJQjF6yXYlLVQ9uX");
    nizi[235] = nizi[1];
    izdelaj(nizi, 236, "P1twD0Li6GyqswxhQZ7ovwZB1DieynJDPd5mUOIUzU");
    izdelaj(nizi, 237, "YdsSWcHFe8KeNvRFuX2zAYHklWTY0CpSGYuT");
    nizi[238] = nizi[210];
    izdelaj(nizi, 239, "jSJjkGZPPAuzNMdGoBzUhYehg6t2TuAFrx0");
    nizi[240] = nizi[210];
    nizi[241] = nizi[18];
    nizi[242] = nizi[235];
    nizi[243] = nizi[166];
    nizi[244] = nizi[82];
    izdelaj(nizi, 245, "MCMsqtAWAIh6wSQXa_Y2pTtMfaiDtRGmCTLWO8l67ePx1tUVfxUjWBPKc4nINz1sqQIHE1ZF_rXeZORxDl");
    nizi[246] = nizi[1];
    izdelaj(nizi, 247, "lnbQTfWtMsqxGHP51I4D");
    nizi[248] = nizi[205];
    nizi[249] = nizi[24];
    nizi[250] = nizi[87];
    izdelaj(nizi, 251, "HVSnRuDAtfArrAmYPYJgmLUvlx1Yj2KuvO7e5oaU_8z6hDGEGHeUKmoF");
    izdelaj(nizi, 252, "6wLzwfVu4AZLYLl3k3aoXnKPRiMLkh7eVqa8LXQrpb9WJIkjJcepm4m5aFaLhi7a_RoaGE_IN0LK");
    izdelaj(nizi, 253, "z4E4tKcdwBSyoZQFYp9U2d6Q2CfzGKJIqMNZG3N_V86CDViVvVjEemtEY9q6Q");
    nizi[254] = nizi[54];
    izdelaj(nizi, 255, "TefuBZmAX28oZFM7NrA08Pt40FjzeMZOYO0wsBQ6Zjkr9fGeN7EVybuddkcWjNRGNenUfOI63XE0lgpDc");
    nizi[256] = nizi[10];
    nizi[257] = nizi[145];
    nizi[258] = nizi[45];
    izdelaj(nizi, 259, "l50nqg2zeQTSHZxPTOSslMKA_3n1bcAwGtiNUvjrl4hI3Qq_o4x_zWkkp");
    izdelaj(nizi, 260, "6VDm96jVbHPCb25F3rsG1V6JwEIoC1r7DzFlYQzyffynWt9O97ucBVy9ypAR2EWbI3XZeFKyY");
    nizi[261] = nizi[235];
    izdelaj(nizi, 262, "z4E4tKcdwBSyoZQFYp9U2d6Q2CfzGKJIqMNZG3N_V86CDViVvVjEemtEY9q6Q");
    izdelaj(nizi, 263, "P1twD0Li6GyqswxhQZ7ovwZB1DieynJDPd5mUOIUzU");
    izdelaj(nizi, 264, "G2Pe82slY_8490JiM2QiVjA2RUW0qIh8LnMj3880SygGi");
    nizi[265] = nizi[155];
    nizi[266] = nizi[263];
    nizi[267] = nizi[162];
    nizi[268] = nizi[20];
    nizi[269] = nizi[202];
    nizi[270] = nizi[67];
    nizi[271] = nizi[172];
    nizi[272] = nizi[42];
    nizi[273] = nizi[54];
    nizi[274] = nizi[130];
    nizi[275] = nizi[161];
    nizi[276] = nizi[222];
    izdelaj(nizi, 277, "tIjIpqvaqyhjFOGiw82y3CZl1maoRXQ5N6XF4EiXsI2uhHjfgeysfiKICFnIsOKdJeRd");
    izdelaj(nizi, 278, "peQTKPn7hwVun");
    nizi[279] = nizi[119];
    izdelaj(nizi, 280, "E6nwHGEwErlznfUcRxE8vyzY");
    nizi[281] = nizi[140];
    izdelaj(nizi, 282, "_x45IMxNBMVIuVuHYzWJgcruM4v");
    nizi[283] = nizi[139];
    izdelaj(nizi, 284, "g1rJdxuepwMa3VDjNWLZzFf8ShtMojg5AZq2o_bI3iRocS8i_LUYDQC9eVaUMAmarLAz141GUam7GR7MhEP_Nzl6Dv_xeA");
    izdelaj(nizi, 285, "E6nwHGEwErlznfUcRxE8vyzY");
    nizi[286] = nizi[285];
    izdelaj(nizi, 287, "1OTw229ezmkM7tgbl1GHG30F7iBM6G_GY0rm5oOO48o7mysCoGXBnXkUzsb2ZpepoJm");
    izdelaj(nizi, 288, "1UwsemB9");
    nizi[289] = nizi[43];
    nizi[290] = nizi[37];
    izdelaj(nizi, 291, "cyoBgFCuqaAAuikBkL");
    nizi[292] = nizi[17];
    izdelaj(nizi, 293, "25GItO8Sqqm4w1kYZIybEGtkDIe05fUOCfMz6mBvkjcCJjxNzoTcY6LE1LBQOIZpZnX8aTRK6iaOSmDQAHnfE3b4IcPJ3RBgEeP9");
    izdelaj(nizi, 294, "iEDF38hijhgXGUTS2dapzT8_ArZACKudrmj2ZBp_Er9Q75PdJVms2BMRYkATNUKOBKCizRC4Y49O61YCo6agVoX8Sx8bWn8A");
    izdelaj(nizi, 295, "zlH86F1UKhyYZw4zxsnaq7");
    izdelaj(nizi, 296, "U15cvtsQ20YVyIqFPsuKzQAqDXRHE0itsxfpkWHbmftbBd2EJ8bgRB8E2XImDXfqAtqKzW3g5CdH5Mt");
    nizi[297] = nizi[81];
    nizi[298] = nizi[252];
    izdelaj(nizi, 299, "snw7qdhMjPL9M2TS1vrKrqRtD7rQpQqUxDRuNv");
    nizi[300] = nizi[13];
    izdelaj(nizi, 301, "1UwsemB9");
    izdelaj(nizi, 302, "jSJjkGZPPAuzNMdGoBzUhYehg6t2TuAFrx0");
    nizi[303] = nizi[222];
    izdelaj(nizi, 304, "eyvJgSIOZ5Zxtr1OOgfwkTks");
    izdelaj(nizi, 305, "MJloIDr65N9fvt0G5wY92S1YLggMEUIwDJoqf8p9cKq4R2bxUTD8TIS");
    izdelaj(nizi, 306, "7TAuHyZbdLrIUvWrd02ikVKQ1PLdCaEGrYNopGam8");
    nizi[307] = nizi[110];
    izdelaj(nizi, 308, "hrAeejocoPnCAqvL5t3H75U_CDW0EtTOeGCbzpixMJbxaYep1zxS0fhzGAQQukdHz0");
    izdelaj(nizi, 309, "EG8XLt02ZqBefLoEibLEbg");
    izdelaj(nizi, 310, "TZdCblSviQcpYH80V1qQ6TaEEHR9BNLf3");
    nizi[311] = nizi[134];
    izdelaj(nizi, 312, "hum9VyckOxyKzgf9GOBQSUeSKukkghBj5Oh1dJt_UILHUMGe0J");
    izdelaj(nizi, 313, "dc1lj_BCDvLBa");
    nizi[314] = nizi[287];
    nizi[315] = nizi[71];
    izdelaj(nizi, 316, "Kl1CkOpKb1s8xWXmsGdYrb2k3xPNPNxFrwRbhXw7kC7");
    izdelaj(nizi, 317, "yPW5");
    izdelaj(nizi, 318, "kvGiGQzp7VJeSFCx4CXqNjTrgVXsTJzpNAJcXbDpTG_yU6VYbU2sUhK6Fob9J7SwYQ");
    izdelaj(nizi, 319, "t7oq9VyG9Gk");
    izdelaj(nizi, 320, "KSeqEO97txltpjoPOASPcGUC4HfxNRv0HcpUImY9j2y210q7sdbWHp");
    izdelaj(nizi, 321, "t0yBTf_W_6JMKLFj_1dbDwV409flSodLU_SUFBbiT5NiNkYGkU04GkHVG4Kv5MPtGy7vaH5nizxaiJXMmKwuML8bydaB78Ed6");
    izdelaj(nizi, 322, "tIjIpqvaqyhjFOGiw82y3CZl1maoRXQ5N6XF4EiXsI2uhHjfgeysfiKICFnIsOKdJeRd");
    nizi[323] = nizi[12];
    izdelaj(nizi, 324, "oEmNmNoNeklmBUuLxPnqWAV5SzKJ9CRaR9h0W");
    izdelaj(nizi, 325, "BRX3hRLo0bWnxotLNdr0e7_6aDAM8pA4EHdnKfYxXDRbtIUUZb0ui3kO2Db2a8wCTLz3LLmOeGjC2LnE5FQTQsvHviMadYKo");
    izdelaj(nizi, 326, "e2nRLe1de2mKfL1nm8dYCD5ZDT64Jd3FB5HqQaB1gex");
    izdelaj(nizi, 327, "rZuu_db3Ns5sPziAgPhusiAQTZx0eIv8tqIZAwPOmsnrF6KKpAsstD4ZRf86w1k");
    izdelaj(nizi, 328, "zp3LE_nQ7Tk73UaxwB0GTOcG_eerUbyGDU75SmyVhC1UbvQ9ZkoV_tzTd");
    nizi[329] = nizi[203];
    nizi[330] = nizi[326];
    izdelaj(nizi, 331, "TZdCblSviQcpYH80V1qQ6TaEEHR9BNLf3");
    izdelaj(nizi, 332, "t0yBTf_W_6JMKLFj_1dbDwV409flSodLU_SUFBbiT5NiNkYGkU04GkHVG4Kv5MPtGy7vaH5nizxaiJXMmKwuML8bydaB78Ed6");
    nizi[333] = nizi[150];
    nizi[334] = nizi[327];
    izdelaj(nizi, 335, "03kUgsNZk3WGlAXPBWaTVhOXCPE5zwstk1o9JLR0Kb");
    nizi[336] = nizi[143];
    izdelaj(nizi, 337, "fl");
    nizi[338] = nizi[27];
    izdelaj(nizi, 339, "e2nRLe1de2mKfL1nm8dYCD5ZDT64Jd3FB5HqQaB1gex");
    nizi[340] = nizi[14];
    izdelaj(nizi, 341, "eBFKQw9hGmilVI1sd7U6m");
    izdelaj(nizi, 342, "ZwiwefHa6LO30ECxW91H7NoRq1MaEpTW9KK2qlt7NhOV9n5HLq_6XkkR1qbRwGu2lxVOC404NS6HKnCot9xp4jUh0aw_z9IFEQGb");
    nizi[343] = nizi[304];
    nizi[344] = nizi[61];
    nizi[345] = nizi[183];
    nizi[346] = nizi[97];
    nizi[347] = nizi[314];
    nizi[348] = nizi[255];
    nizi[349] = nizi[35];
    izdelaj(nizi, 350, "7zl_KhLayTafnC");
    nizi[351] = nizi[181];
    nizi[352] = nizi[301];
    nizi[353] = nizi[96];
    izdelaj(nizi, 354, "S9wO");
    izdelaj(nizi, 355, "NgUZemw_ESymc");
    nizi[356] = nizi[171];
    nizi[357] = nizi[22];
    izdelaj(nizi, 358, "P1twD0Li6GyqswxhQZ7ovwZB1DieynJDPd5mUOIUzU");
    nizi[359] = nizi[329];
    nizi[360] = nizi[44];
    nizi[361] = nizi[135];
    nizi[362] = nizi[287];
    izdelaj(nizi, 363, "0");
    izdelaj(nizi, 364, "qj_U6Z4OKAgqgG8Wr6q6SasQuye1YLIRp3gGcFFMklW81bCQQiA87dpce1JQgoxensk");
    izdelaj(nizi, 365, "C4pfcJcEmtDXeX507GOH9ltPAhtTmuqBXW529DjM5Ky2y91HxJQjF6yXYlLVQ9uX");
    izdelaj(nizi, 366, "yPW5");
    nizi[367] = nizi[224];
    nizi[368] = nizi[86];
    nizi[369] = nizi[146];
    nizi[370] = nizi[168];
    nizi[371] = nizi[327];
    nizi[372] = nizi[100];
    izdelaj(nizi, 373, "GFjrpepNK1nTDPZqn1OQ");
    nizi[374] = nizi[140];
    nizi[375] = nizi[38];
    nizi[376] = nizi[236];
    izdelaj(nizi, 377, "rx_wHv0c");
    izdelaj(nizi, 378, "iCtFH9GfZucVxaPsUDkUEb68ywv1D73Y7XJICNQ1FyoptwOxJw57NoVetDmx23");
    izdelaj(nizi, 379, "YWfBKky0XEMjxumCI8WP6fEUZM62SMRZEeDApcjgEvjjOupigYagRrsK1qjsCBfmW7aCES9u0");
    izdelaj(nizi, 380, "ZP9srEBi_aGjcfDoNhxtAzwKZsj3TVmCoRoQ0lfjtqRaYVtDRmWYqFDpQIK8YajiJXKqsVrT78x2LnswT9yZGgrJnNhd");
    nizi[381] = nizi[354];
    nizi[382] = nizi[331];
    nizi[383] = nizi[114];
    nizi[384] = nizi[9];
    nizi[385] = nizi[272];
    nizi[386] = nizi[79];
    nizi[387] = nizi[76];
    nizi[388] = nizi[342];
    izdelaj(nizi, 389, "kSMgcvK66cJx");
    nizi[390] = nizi[246];
    izdelaj(nizi, 391, "6wLzwfVu4AZLYLl3k3aoXnKPRiMLkh7eVqa8LXQrpb9WJIkjJcepm4m5aFaLhi7a_RoaGE_IN0LK");
    nizi[392] = nizi[7];
    nizi[393] = nizi[375];
    izdelaj(nizi, 394, "MJloIDr65N9fvt0G5wY92S1YLggMEUIwDJoqf8p9cKq4R2bxUTD8TIS");
    izdelaj(nizi, 395, "yLMkbILsO9cBQJ2YQggMWu_a2kEgZzV6McJlRm8uq4jDvlIzwLM4Gst__");
    izdelaj(nizi, 396, "kgVs1RVvq9Uvvhx3twnivTWrhr1wh2W30CtPrT2MJGsL3CJn8SNU2Ki0Y8wiUcfblGPt86aBWxxRFnBrZcMtiGly8U");
    nizi[397] = nizi[393];
    nizi[398] = nizi[35];
    nizi[399] = nizi[20];
    izdelaj(nizi, 400, "ZwiwefHa6LO30ECxW91H7NoRq1MaEpTW9KK2qlt7NhOV9n5HLq_6XkkR1qbRwGu2lxVOC404NS6HKnCot9xp4jUh0aw_z9IFEQGb");
    nizi[401] = nizi[52];
    izdelaj(nizi, 402, "rZuu_db3Ns5sPziAgPhusiAQTZx0eIv8tqIZAwPOmsnrF6KKpAsstD4ZRf86w1k");
    nizi[403] = nizi[289];
    nizi[404] = nizi[57];
    izdelaj(nizi, 405, "jSJjkGZPPAuzNMdGoBzUhYehg6t2TuAFrx0");
    nizi[406] = nizi[248];
    nizi[407] = nizi[382];
    nizi[408] = nizi[401];
    nizi[409] = nizi[399];
    izdelaj(nizi, 410, "7zl_KhLayTafnC");
    nizi[411] = nizi[118];
    izdelaj(nizi, 412, "Ahx1");
    nizi[413] = nizi[296];
    nizi[414] = nizi[267];
    nizi[415] = nizi[54];
    izdelaj(nizi, 416, "oCA2ZggVq6XeNWhXtkjBUtP7iuwcJoD1B7TSEk0HNEfg8W3zS1O0Y");
    nizi[417] = nizi[51];
    izdelaj(nizi, 418, "Kk38GIccMDxbJlyPM1BIBp0FS3gY_sPMwYkQ2GgtLT");
    nizi[419] = nizi[361];
    nizi[420] = nizi[339];
    nizi[421] = nizi[193];
    nizi[422] = nizi[173];
    nizi[423] = nizi[306];
    nizi[424] = nizi[270];
    izdelaj(nizi, 425, "qj_U6Z4OKAgqgG8Wr6q6SasQuye1YLIRp3gGcFFMklW81bCQQiA87dpce1JQgoxensk");
    nizi[426] = nizi[107];
    nizi[427] = nizi[29];
    nizi[428] = nizi[290];
    izdelaj(nizi, 429, "XzxBkyc3R9sh4Gld0_kmPHiOeXvv_N6JoUe1dWkgK57wIFT");
    nizi[430] = nizi[93];
    nizi[431] = nizi[68];
    nizi[432] = nizi[345];
    nizi[433] = nizi[405];
    nizi[434] = nizi[93];
    nizi[435] = nizi[4];
    izdelaj(nizi, 436, "U");
    izdelaj(nizi, 437, "icfEQyhtFues9HH3yEA_5pMwKuCCwXjLmyQHlfjOSqoGhllfI0aA0jGiGvNwIvPS5CR8iofifd3BRsG");
    nizi[438] = nizi[214];
    izdelaj(nizi, 439, "t0gsd");
    nizi[440] = nizi[129];
    izdelaj(nizi, 441, "Vldf2IBTsGO8ZrMi9Z3UDvWKaIePVWptRElKFUTlnTj6isift");
    nizi[442] = nizi[236];
    izdelaj(nizi, 443, "Vldf2IBTsGO8ZrMi9Z3UDvWKaIePVWptRElKFUTlnTj6isift");
    izdelaj(nizi, 444, "G2Pe82slY_8490JiM2QiVjA2RUW0qIh8LnMj3880SygGi");
    nizi[445] = nizi[170];
    nizi[446] = nizi[307];
    izdelaj(nizi, 447, "7hhPIUumkCWw8YsWYNsnB2IXU");
    izdelaj(nizi, 448, "ttj7knzoxkD9QR9UYxW9ksiDywgXupYUae9aKLYONmkfZXII9f2aglM_ctVS8NXlf");

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
