
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
    int n = 378;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 1, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 2, "kxsloeRdX");
    izdelaj(nizi, 3, "VclIPMaTkkYWnhEcxQqYuSmIV7X7DNN_MgWBZ6bR6P6QGAMer1AYBnYiu8GjB8QrEQX2btj48AeZIZZGm9xK3QZn");
    izdelaj(nizi, 4, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 5, "Nprib7stOde6wwBFMJ");
    izdelaj(nizi, 6, "kxsloeRdX");
    izdelaj(nizi, 7, "bMmzeg7OBU_g0y94O26oFINZPXAbJSx4gKPGHwZZFftJC3cXjb7Ozr8st8KN6TeQQzVwgJwl");
    izdelaj(nizi, 8, "jS8lkjzlBB0JfmuH5be2nN8SuhuY");
    izdelaj(nizi, 9, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 10, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 11, "kxsloeRdX");
    izdelaj(nizi, 12, "Om7zJAbL3Rm4CPyVsvc16GcHi6tgieA5idYoj6xfZPXLtpa2Oeq04jYLry0HFkt1EKW");
    izdelaj(nizi, 13, "QTGwLEyofzAMpB78Z7i1XbVCBckLkdxxZsTJlyJJmrthSi7Rx_Z");
    izdelaj(nizi, 14, "bGrlPfh52YBTQt3OX89GnBBHr8Rp6ANRbzQYaaU3Y77ATpQHgzwvncgKr60StTQ8Y2pE8bDBhUOaKUJN17Y6U");
    izdelaj(nizi, 15, "qbowO62jhJFqhmPT7Robd_oeasCJAZSW8bW6cZHtvsa7Oon19KsMEN083GaDlX3QeFJi7faCBayJafg_ja4C");
    izdelaj(nizi, 16, "bvKLfzM0ZRPt7ajDqyoXndecnLjzhErsnfriJJRXu");
    izdelaj(nizi, 17, "qbowO62jhJFqhmPT7Robd_oeasCJAZSW8bW6cZHtvsa7Oon19KsMEN083GaDlX3QeFJi7faCBayJafg_ja4C");
    izdelaj(nizi, 18, "Eq7Qc_ZcmQ4vJkwm0CUOWFXW8q56S8RAP9ciXK2JAeeVggTN0ys6B8F_AqRE95IWvOhYR");
    izdelaj(nizi, 19, "qbowO62jhJFqhmPT7Robd_oeasCJAZSW8bW6cZHtvsa7Oon19KsMEN083GaDlX3QeFJi7faCBayJafg_ja4C");
    izdelaj(nizi, 20, "bMmzeg7OBU_g0y94O26oFINZPXAbJSx4gKPGHwZZFftJC3cXjb7Ozr8st8KN6TeQQzVwgJwl");
    izdelaj(nizi, 21, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 22, "b");
    izdelaj(nizi, 23, "b");
    izdelaj(nizi, 24, "WdaVEsP8oTIbkk2I3FO");
    izdelaj(nizi, 25, "snm9n9k_5hUQKugnFqK3Ua5h4He5ZqdoidBum_CUV");
    izdelaj(nizi, 26, "7x1kakAvTexhjzuNOiQ_DLkhoNCwZcpO");
    izdelaj(nizi, 27, "QGt0fJwkZSQqcAgVCDOZVJodeTLG5_to0pkaf96t6s9qK44ItVQ5foCPBNYki7dx9BKbqh2MTK3wW1cFll49hReXp");
    izdelaj(nizi, 28, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 29, "iFKFLVVW4MHDjgTnflq5Bp1mPmtqu4n4i5XFUxaK4hV1QvJKzAz8gh");
    izdelaj(nizi, 30, "xAyB7PsH6egv4JiSWzAIepEE0oCo1Ik4kSbP4B7YFTyLJJ8Dm5PDg6F55B2chy5cKhnPX1ux9sb5b7YR");
    izdelaj(nizi, 31, "fiwLBqUDx2ric2cQgph0zuovGm91nxfJcuCLph0qr9fHAtU61h199hlDxBdApDj3B4Dw");
    izdelaj(nizi, 32, "70dA");
    izdelaj(nizi, 33, "aAFZomU2RR4Aynq2a3fzSY1zojlTTmhLW3bPLavweitsEz75iLOvQrWrX_Dgw2XO8USrKSzzfr1NmTFCVB");
    izdelaj(nizi, 34, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 35, "sFpo7rQz__rTzG_45DWN");
    izdelaj(nizi, 36, "UFfqHtHeAi79x7qqfpkt");
    izdelaj(nizi, 37, "Mazzxkt660ieQARqh1j2wSrLt7wVsd7E9gPYC40yXg4TvMMAwsNcpxIIiuy4l892niE1aXH9qRdIp6G989gHJAsXQX");
    izdelaj(nizi, 38, "kJFilpt3UllzE5p_qxU17SNvaUOA5aO3F_oFk4iBfgbnrWfNeRzryEZGWA");
    izdelaj(nizi, 39, "7lZbled9p7eMqVU_ixpkAHNmB8ZbFdoWa0zFxkY1PLWdw");
    izdelaj(nizi, 40, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 41, "BuPiluO8t2lI3DxEgyeLXL4hSBc8T_9rp5HYOh7sP6r0D1AKciz_4LwiHc5t6noWNIjdxcK8_sSs702E");
    izdelaj(nizi, 42, "b");
    izdelaj(nizi, 43, "UXRMp4PrZyCZ78cSzn_Rs7mkzzi2gAn1dTK2q2Ker8tbs3v2DptVS3QhOvjH5hsG");
    izdelaj(nizi, 44, "gOz6ZsO3G1jf_P5RIEsmFCTJm3Qvj03XDZ2MRn7bNs1KnczmR15i9q0RMMJnjcySRbBN1NJB");
    izdelaj(nizi, 45, "0PSvdTxA5eO1xXXvusb7PDgPQwQ8U2yzSpnpmYgkhZU6tgePjpFbf1WvAWAt");
    izdelaj(nizi, 46, "Rz8tuZSEYuPmOWWxZaa9BHPYfq8cp2ldXHiYZg8mlS7Dd7KdljgyMc19inAwqTqEJmMrjh9yMGg2x8y");
    izdelaj(nizi, 47, "7lZbled9p7eMqVU_ixpkAHNmB8ZbFdoWa0zFxkY1PLWdw");
    izdelaj(nizi, 48, "z3n8k2dLa8ao16k6FTt84");
    izdelaj(nizi, 49, "70dA");
    izdelaj(nizi, 50, "g8Fb");
    izdelaj(nizi, 51, "6lA5jnNJD_Eu1MTBnuApLhDJRKKyKde");
    izdelaj(nizi, 52, "JHXfZ");
    izdelaj(nizi, 53, "xJIEYXrvP54CoeHM7xBP3GSTGkUdozi2wvO3sjvkGgL6DIl");
    izdelaj(nizi, 54, "b");
    izdelaj(nizi, 55, "bMmzeg7OBU_g0y94O26oFINZPXAbJSx4gKPGHwZZFftJC3cXjb7Ozr8st8KN6TeQQzVwgJwl");
    izdelaj(nizi, 56, "r_z2LRfg9oApNI_39MLb");
    izdelaj(nizi, 57, "lEnuOjrooKunYkI3f3VKTLVxdKXGikV0Mlk7S5tbYd3AbtZ9LnqklOMo7kIFeCIHBfQRpa4IF4r");
    izdelaj(nizi, 58, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 59, "D7cpuj2C8ZaVn8nxsjq7k7OUQt48mU9NaF738wirJcBpv0xtHpOY1iqThVtU620lsgMQwoKneQikadfOqH");
    izdelaj(nizi, 60, "WbnVdSa4Lz9CaoVlRhYLBZx4vf8RkVd4ulWfMMxDFBXnVkGSENjU3TjvCSiQSDlR9E_Gs2KO5WwZt4xOpABeYarXJToUcd8dA");
    izdelaj(nizi, 61, "r32djhWemW287jipaztNZs3Ewpp0RwajsG1Jw5SgrvZ9ihgKOq7e2KT2ttQqmQDAKL36vMPC_CBNVSjwaMGwdljJIsZ0BzHBbElg");
    izdelaj(nizi, 62, "NRHH7wiVdr8PUpOR5u6nqBGLxkzEDflDzC5nPWnyos3OXmqZkPuo5FIKK");
    izdelaj(nizi, 63, "C929whh7fM8Ib0T_km1kMXu7");
    izdelaj(nizi, 64, "7lZbled9p7eMqVU_ixpkAHNmB8ZbFdoWa0zFxkY1PLWdw");
    izdelaj(nizi, 65, "Vg0tgJkFm");
    izdelaj(nizi, 66, "bh6lt_v6t");
    izdelaj(nizi, 67, "ibw5Dh_UN1dY8Z_QEnrxPRah6Z72LkQ_OmzEYY9XvtDny2fnBwsYWgIOt1HKRgqNuD58y90B9iTWHa1YBXj_I6DeYyVn");
    izdelaj(nizi, 68, "ieQLcFspVj");
    izdelaj(nizi, 69, "gou16_eadBmpdByOU");
    izdelaj(nizi, 70, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 71, "AEld4QoPsEWilN5PPkZF_84TDxQdqK9QuyO_tbn9hV4YPRs");
    izdelaj(nizi, 72, "r1qToL6kazH_nwyR_gwlSIIpMuzFa");
    izdelaj(nizi, 73, "ibw5Dh_UN1dY8Z_QEnrxPRah6Z72LkQ_OmzEYY9XvtDny2fnBwsYWgIOt1HKRgqNuD58y90B9iTWHa1YBXj_I6DeYyVn");
    izdelaj(nizi, 74, "PvD2BaTRaeb6u1bpjk29A3NNpAByWJ7nHu8aLkoX3oT2X5JRj_jM2v2WGOEt");
    izdelaj(nizi, 75, "aAFZomU2RR4Aynq2a3fzSY1zojlTTmhLW3bPLavweitsEz75iLOvQrWrX_Dgw2XO8USrKSzzfr1NmTFCVB");
    izdelaj(nizi, 76, "s0WWNwCaPShl4uXTzuyTMs1CcoIL9FnxEfCUKt8WisTy_pU6TdhsgtdAxaZVnkr");
    izdelaj(nizi, 77, "r32djhWemW287jipaztNZs3Ewpp0RwajsG1Jw5SgrvZ9ihgKOq7e2KT2ttQqmQDAKL36vMPC_CBNVSjwaMGwdljJIsZ0BzHBbElg");
    izdelaj(nizi, 78, "aEX3Asd8cqJ9Er2MMvowW7EEuy63KRW7V6aann3AVc3T");
    izdelaj(nizi, 79, "R1vG0GZ");
    izdelaj(nizi, 80, "iome22wHMhxEj3ftSIZcVXt9lqMaq3f3Y7QRw8BZzXVuls_5R5krytjgstByZvrCjFtUfixCky");
    izdelaj(nizi, 81, "aIM4qvH9Yo7fp1fDfmpNfIcGT0kPMh1gDq1FiubH_qNbS5uW");
    izdelaj(nizi, 82, "AgQ2t4to9XNvLpUYsPqiDYhd67eQaAhTXVSit1Lc8rdjamItTOFdvByqDi");
    izdelaj(nizi, 83, "V91PWN6UKnHnR9zHabu5VnwXnrAWdBWENNrD0NW0TCrmZ7QrWzRs7HS5PTRSENjossd");
    izdelaj(nizi, 84, "6K4FxVZ_L5_zQx5wHDA7epcaZGz3klal0IZmviAIN2O4PRPv8beAKZDK3ZDkAvZsSBneoZ_FLtTDey1Wx");
    izdelaj(nizi, 85, "g8Fb");
    izdelaj(nizi, 86, "Ocf8XpBjtmzfUGoWVwg8NGn0x7KmkKfo3Xw623a_qVYQWdlaz0XZhet1ZJp3XyeCEjqz0VdqgZEw8UbAeEhpc13e");
    izdelaj(nizi, 87, "3Bb");
    izdelaj(nizi, 88, "qVewZVJNbFaxDme2ji22NvOPwWGR1OK2VAbPVKoKbK8_NuVA8pNbUHYJ09tmAIEpdIleTvliInOoLT6nZhOrlFhArULZ6uSx");
    izdelaj(nizi, 89, "7lZbled9p7eMqVU_ixpkAHNmB8ZbFdoWa0zFxkY1PLWdw");
    izdelaj(nizi, 90, "uNAW751S8vXXDil0hh1al0cAltPiiKbE3oh1fQlnqBW_8BwvdKX");
    izdelaj(nizi, 91, "CwJdgjOilV2GpsUitWKB");
    izdelaj(nizi, 92, "Ocf8XpBjtmzfUGoWVwg8NGn0x7KmkKfo3Xw623a_qVYQWdlaz0XZhet1ZJp3XyeCEjqz0VdqgZEw8UbAeEhpc13e");
    izdelaj(nizi, 93, "SBj2N34YjTHnF3uZMkQ9rNIM");
    izdelaj(nizi, 94, "kxsloeRdX");
    izdelaj(nizi, 95, "5TtB2UEkVXhJ4weQQ8WY0");
    izdelaj(nizi, 96, "Mazzxkt660ieQARqh1j2wSrLt7wVsd7E9gPYC40yXg4TvMMAwsNcpxIIiuy4l892niE1aXH9qRdIp6G989gHJAsXQX");
    izdelaj(nizi, 97, "xAyB7PsH6egv4JiSWzAIepEE0oCo1Ik4kSbP4B7YFTyLJJ8Dm5PDg6F55B2chy5cKhnPX1ux9sb5b7YR");
    izdelaj(nizi, 98, "ft104Q7eR0nLJt2sQCZxrMygdCGR5LWTrd3ZSoY_JOesu8I8qi1O081D2P3EFB");
    izdelaj(nizi, 99, "wYl_TehW24TGPSDT2oBaidp7yg2Rv1iRTdd9ost8xDfGas1V31X2eyt");
    izdelaj(nizi, 100, "Z6I_8");
    izdelaj(nizi, 101, "iome22wHMhxEj3ftSIZcVXt9lqMaq3f3Y7QRw8BZzXVuls_5R5krytjgstByZvrCjFtUfixCky");
    izdelaj(nizi, 102, "WGumtsm9ga3b");
    izdelaj(nizi, 103, "AVEVkIOSZdjv7ueGn74KKiqOLEArsQzEzTriC68Dn03gXEU");
    izdelaj(nizi, 104, "r32djhWemW287jipaztNZs3Ewpp0RwajsG1Jw5SgrvZ9ihgKOq7e2KT2ttQqmQDAKL36vMPC_CBNVSjwaMGwdljJIsZ0BzHBbElg");
    izdelaj(nizi, 105, "UFfqHtHeAi79x7qqfpkt");
    izdelaj(nizi, 106, "uUldbrRrX8bDqZ1yBRZs5EEv7rbAJsutrP1te9LPG0HwH1jdiZ8EYBGJca2K");
    izdelaj(nizi, 107, "qbowO62jhJFqhmPT7Robd_oeasCJAZSW8bW6cZHtvsa7Oon19KsMEN083GaDlX3QeFJi7faCBayJafg_ja4C");
    izdelaj(nizi, 108, "fkOjKrJliRpK6VNGxS1Gu5dQBVW8TnkRc2suiTgEM8mkm");
    izdelaj(nizi, 109, "Amdbf9QwUYeqpkdNLOpMHIPZwD47_tXbvJ2v9QucBAsasTX6cvvS0GB0sZa0SJaa4ZQDA_GwqsWTr2YtWUN8");
    izdelaj(nizi, 110, "b");
    izdelaj(nizi, 111, "qbowO62jhJFqhmPT7Robd_oeasCJAZSW8bW6cZHtvsa7Oon19KsMEN083GaDlX3QeFJi7faCBayJafg_ja4C");
    izdelaj(nizi, 112, "gou16_eadBmpdByOU");
    izdelaj(nizi, 113, "qbowO62jhJFqhmPT7Robd_oeasCJAZSW8bW6cZHtvsa7Oon19KsMEN083GaDlX3QeFJi7faCBayJafg_ja4C");
    izdelaj(nizi, 114, "Ocf8XpBjtmzfUGoWVwg8NGn0x7KmkKfo3Xw623a_qVYQWdlaz0XZhet1ZJp3XyeCEjqz0VdqgZEw8UbAeEhpc13e");
    izdelaj(nizi, 115, "xsONZOkREBBfEpD6HFQ8IKnaqV8toyfM3cOND9No2cI3fs11syQW35yztIMD8KkFl9BOx3hXmxldj6r");
    izdelaj(nizi, 116, "1KSIypvuASLgoEdhpOXqe3CvUL7i_u21Xg9pHh0wHaJuEO8J7Ih89");
    izdelaj(nizi, 117, "GEiK6LnUwPyYOYMbZ8hlgTHb1uNG8FJa3tROhrPoPPWDLfjtofjsLyEp0yplzaGsSBTnLtQQDkFBO");
    izdelaj(nizi, 118, "h0XwdY8WBE1jOtTjGhllTzqOOJ4XHSzCsjl4EgfkHlaWArL5vzdHH7fZVfP_Dvhk69l7T2_RwuQXBBE7G");
    izdelaj(nizi, 119, "VYEe4fbq6W6e3itMB8uzSlwuxZ32vKXeqnLw7WQhubvlGHsajt92K5");
    izdelaj(nizi, 120, "1KSIypvuASLgoEdhpOXqe3CvUL7i_u21Xg9pHh0wHaJuEO8J7Ih89");
    izdelaj(nizi, 121, "Bxqv5UdYT9HzCDO");
    izdelaj(nizi, 122, "b");
    izdelaj(nizi, 123, "sXy3ty5Zcj1z0X45uey2Zrywf8isqq3P");
    izdelaj(nizi, 124, "iome22wHMhxEj3ftSIZcVXt9lqMaq3f3Y7QRw8BZzXVuls_5R5krytjgstByZvrCjFtUfixCky");
    izdelaj(nizi, 125, "5VFU6PC0fIhiOsr6vX4K1TV6dqdG5XqoEh0ZJAc_AuF8QlFgqzx6sKb6Mi4jKMWt4QyngLK9DV8IbPe_Vf7YA3MWb2uoE0NrM");
    izdelaj(nizi, 126, "0Mquj6NF3iZVM0GbDrmPidOg0FOY8XBb1_XJ1zs4yxHH6ckX1kmyhIKSYBAHSPlJfgeCRLidGchIDfl1zP6wF0");
    izdelaj(nizi, 127, "C7ocYeK9RGvGkkim_r1w");
    izdelaj(nizi, 128, "uNAW751S8vXXDil0hh1al0cAltPiiKbE3oh1fQlnqBW_8BwvdKX");
    izdelaj(nizi, 129, "O");
    izdelaj(nizi, 130, "NoRa6TrPyGWR6gPP07FDrj");
    izdelaj(nizi, 131, "ytnkr6ukFgQFzu2");
    izdelaj(nizi, 132, "N7dg6P9JKtadrmaEHLR4_HL8JnYF32JSD9EAHcWmwiuIONdSx7cRlPyDDTnIV6Jb3GJ15sbLUvb6bdK3ldPDxaItkkFbJ");
    izdelaj(nizi, 133, "4rYscU4V9oyFGcdLOehf_");
    izdelaj(nizi, 134, "T6l3XSoLW9p39QibysjGN_Xaz");
    izdelaj(nizi, 135, "2mZYkVXOh4JXiM_nj5tabNY_rf6URb8EmcHtkkIx8ObpYAdjJLxqaNttozQ05Ax8AHEhfDOB3VrFrbQzaP_yc1HWfEZ4BPk8yq");
    izdelaj(nizi, 136, "CwJdgjOilV2GpsUitWKB");
    izdelaj(nizi, 137, "vMd51XGS7v5AJpbnm8Bd5RKGCohPM1if988wdwcgUD1zsFJSW53fTLIGUltAjdGX7veSjO1Ewil_epUlI");
    izdelaj(nizi, 138, "4_fnK8lrpS0Byf28Vmr3m2W6JvQAmSorGVMlofprpuHngaiSl8Vv0tgIPQmWtU");
    izdelaj(nizi, 139, "t0_OTEhA_7NqMDehRr3cHP9DIUJe4phB7t_SqwsjluPU0JxmjdaJzSCLynhUMVXfuah2UiKUZfqDqSVlAYhGv5g4WWWiOg5c8");
    izdelaj(nizi, 140, "s8ENzNazu1jNCfq8C1DmGaqBf46RKoJgbXzKKCnXvsL_5PZQSPLHVJac5iXod");
    izdelaj(nizi, 141, "Gt9orkvTZf8KdRgbaRzQEjbpC9SwfnQmGX0B6_xNwZP6WDK_pfuiHMP3yoOJ3");
    izdelaj(nizi, 142, "QUullw9laV22Ai9ImLE");
    izdelaj(nizi, 143, "TuQuu3fjahaoH7ZDrkpxBIZrggadEa2HNrWWoaC4vfGHkDNhKZZIPWRDGfm0");
    izdelaj(nizi, 144, "1i_3V1Gf_6FGukuE7t_7ZX2Szk1RWIiVFVNt9F3sZ_qvAmF6VuqxlUqOti1dxczTMpHE0J5JlIXhB5kQ3XCU0JVWu");
    izdelaj(nizi, 145, "JCP0a4xhVJZFpccRR_GQYwvaVq2801xenJ3tM");
    izdelaj(nizi, 146, "rQXZCX6vaehJmuCz47sQBs4YOhL4rgPWqWuXa3dhqfT9S5jYBZMwGN7ek0KvYug1FGEztVRLIDVpxBNv3HhUT94Lc5tQrlb");
    izdelaj(nizi, 147, "Ip5ERVgnIt4b6Fi6kw3uCReR53trO92c56UQkWksDqU92ym6kMDE2EmEo1rGRVbvkQG96ENxzOUED0");
    izdelaj(nizi, 148, "KSeZ5bns4_XrFzisEm9");
    izdelaj(nizi, 149, "iEBx3105FMXo8MxO4YOA6px5wHceLMUUDDMoHD1oVuxMlEW8zbsG2bjH");
    izdelaj(nizi, 150, "b");
    izdelaj(nizi, 151, "wcOgIv2l3VsNgnG9XGRcesxCSz3CCh5KPgloLCAukcUYhrTxMDLvhF");
    izdelaj(nizi, 152, "CzDJvwQ4NRRas6utncmjcpNuL2hVus8VQbn76Lhz9X5OA8JkUBtqaPbiBRz9XpiVIhM5RLg57uF");
    izdelaj(nizi, 153, "Z6I_8");
    izdelaj(nizi, 154, "vD3KcqLSIHFlSgk6pKP3Ald7PDHEBmlGCSbNxVdRRqjDdP");
    izdelaj(nizi, 155, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 156, "WbGosLsi3bO8KRH2bbwoydIKQXZHqnA0NR5FgsnWHalZavhgTgvHFtfHlxPNaBGS9jYDjZWKS14U_pLTeP");
    izdelaj(nizi, 157, "BGcGQMroJV1Dz6HJjlpR0ABT2sHEuFmi0AcIiLTZOa7UG1zDlZ8R0mMID0_Z7i7i");
    izdelaj(nizi, 158, "EkKHDwzlWVFklUzU4GJyHWOMpNCVhvK0NrAfm15Xf");
    izdelaj(nizi, 159, "KveJUp4Accc6OKkApSFdJjsR2Qrfrvf4");
    izdelaj(nizi, 160, "pjNM13PqNACqnNBwVw7604svzlaXfX3WJL");
    izdelaj(nizi, 161, "AEld4QoPsEWilN5PPkZF_84TDxQdqK9QuyO_tbn9hV4YPRs");
    izdelaj(nizi, 162, "T6l3XSoLW9p39QibysjGN_Xaz");
    izdelaj(nizi, 163, "UFfqHtHeAi79x7qqfpkt");
    izdelaj(nizi, 164, "Tf2Sw7KbUAaoSdmzjrFRRcCEPMrr1FWLywP_NEe4QDGD");
    izdelaj(nizi, 165, "o9aG7dueF4ahQnoX1gtDmmgl7gJ7T2I8ZIGO7rH");
    izdelaj(nizi, 166, "xAyB7PsH6egv4JiSWzAIepEE0oCo1Ik4kSbP4B7YFTyLJJ8Dm5PDg6F55B2chy5cKhnPX1ux9sb5b7YR");
    izdelaj(nizi, 167, "qVewZVJNbFaxDme2ji22NvOPwWGR1OK2VAbPVKoKbK8_NuVA8pNbUHYJ09tmAIEpdIleTvliInOoLT6nZhOrlFhArULZ6uSx");
    izdelaj(nizi, 168, "RpsdiRRj4Ju2heAnKkPBMT697SkJIULydQ41VrCC8dVtJEH9mBTVREyXgKMw38WL29xZ2RaU5_7U");
    izdelaj(nizi, 169, "l5XP");
    izdelaj(nizi, 170, "Mazzxkt660ieQARqh1j2wSrLt7wVsd7E9gPYC40yXg4TvMMAwsNcpxIIiuy4l892niE1aXH9qRdIp6G989gHJAsXQX");
    izdelaj(nizi, 171, "ibw5Dh_UN1dY8Z_QEnrxPRah6Z72LkQ_OmzEYY9XvtDny2fnBwsYWgIOt1HKRgqNuD58y90B9iTWHa1YBXj_I6DeYyVn");
    izdelaj(nizi, 172, "Ee_AT3nRiGF0eZcfliWORjV");
    izdelaj(nizi, 173, "NmONfHVRM6Tr8zStR6WrH39bbD80dQIRYF0hOS5FhcTaqccw6r_NZO8lVMTAHtlFh5V");
    izdelaj(nizi, 174, "rZEGbuywEG1zqbuyz6sloOQVQzpOySa");
    izdelaj(nizi, 175, "P20kEmtDn");
    izdelaj(nizi, 176, "UX5tnUFzwT0DNWupec3BW_S6qIK9DzFva3Bej8R5barZnPK8SWdgOJ3IR24A");
    izdelaj(nizi, 177, "R");
    izdelaj(nizi, 178, "l5XP");
    izdelaj(nizi, 179, "J_GhxdV_77r");
    izdelaj(nizi, 180, "UcpSWHSK8mkQZyypbY2CCqw6iBbY8QdguIBgatQz3");
    izdelaj(nizi, 181, "0PSvdTxA5eO1xXXvusb7PDgPQwQ8U2yzSpnpmYgkhZU6tgePjpFbf1WvAWAt");
    izdelaj(nizi, 182, "BzRZp7zE9juaWlGlblQyx0AICcdeM86o5boxhJecgfR07NpenRFR0aMtlrHtnCZ3Sc");
    izdelaj(nizi, 183, "Bxqv5UdYT9HzCDO");
    izdelaj(nizi, 184, "Hh4WsGwaH9c6xTbJx0PE3XHQs4x1j_O42ApwUMp");
    izdelaj(nizi, 185, "1bcJ_llf_PphgT");
    izdelaj(nizi, 186, "Hh4WsGwaH9c6xTbJx0PE3XHQs4x1j_O42ApwUMp");
    izdelaj(nizi, 187, "r32djhWemW287jipaztNZs3Ewpp0RwajsG1Jw5SgrvZ9ihgKOq7e2KT2ttQqmQDAKL36vMPC_CBNVSjwaMGwdljJIsZ0BzHBbElg");
    izdelaj(nizi, 188, "BuPiluO8t2lI3DxEgyeLXL4hSBc8T_9rp5HYOh7sP6r0D1AKciz_4LwiHc5t6noWNIjdxcK8_sSs702E");
    izdelaj(nizi, 189, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 190, "x3p86");
    izdelaj(nizi, 191, "jnKFBFZIc");
    izdelaj(nizi, 192, "Va_vXTxtjvuAmpbSDWry2n3KUAo");
    izdelaj(nizi, 193, "eiePL6I4qdVnFrhohtLrhw5V7iJHYC9OwuoWb0");
    izdelaj(nizi, 194, "hJARg7nn");
    izdelaj(nizi, 195, "7IaHaluVTEqZD3nxaDXJ3FLjk0xTF7RIsF2uJif1RhKktgBBLkTGp7KWXv4eCR");
    izdelaj(nizi, 196, "jwTKpbHeM0VfRn6dQsx8iYrBAg3LVVRKgFkJhgSbNuTDLNEnq5W8AYkpztZV4ObPZ");
    izdelaj(nizi, 197, "FBv9DvaBlb59tz9GBOMd");
    izdelaj(nizi, 198, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 199, "iome22wHMhxEj3ftSIZcVXt9lqMaq3f3Y7QRw8BZzXVuls_5R5krytjgstByZvrCjFtUfixCky");
    izdelaj(nizi, 200, "BuPiluO8t2lI3DxEgyeLXL4hSBc8T_9rp5HYOh7sP6r0D1AKciz_4LwiHc5t6noWNIjdxcK8_sSs702E");
    izdelaj(nizi, 201, "KbIdyAJIAjb7");
    izdelaj(nizi, 202, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 203, "bMmzeg7OBU_g0y94O26oFINZPXAbJSx4gKPGHwZZFftJC3cXjb7Ozr8st8KN6TeQQzVwgJwl");
    izdelaj(nizi, 204, "D7cpuj2C8ZaVn8nxsjq7k7OUQt48mU9NaF738wirJcBpv0xtHpOY1iqThVtU620lsgMQwoKneQikadfOqH");
    izdelaj(nizi, 205, "UFfqHtHeAi79x7qqfpkt");
    izdelaj(nizi, 206, "xAyB7PsH6egv4JiSWzAIepEE0oCo1Ik4kSbP4B7YFTyLJJ8Dm5PDg6F55B2chy5cKhnPX1ux9sb5b7YR");
    izdelaj(nizi, 207, "Bxqv5UdYT9HzCDO");
    izdelaj(nizi, 208, "rNeMfyCWlVXYC5n7fLNEMGl7uERm0LsSUcZhTwBk9wHguq9OtJ_t1t");
    izdelaj(nizi, 209, "j_yDk48");
    izdelaj(nizi, 210, "VWMfcLeJrDbC7IvVScptavTTGzYKbRAoJu4tMyL7YymjgeFwOcgkHmTtHnu0j80Fc0PyoUaPeHs");
    izdelaj(nizi, 211, "QxD5J8OiF_9qN9KrSAmDSsU0Lf84WIpQHI0fO4N0tNvfn66DsHdBMHEW6S2H7yLcV810ta6Qkun_v2EcN1LE2qrN2Qhbl0yx0Exr");
    izdelaj(nizi, 212, "D3z8UUfeKN1GYxgCZxZjwY_1OcwXKi7CSAD");
    izdelaj(nizi, 213, "FlXZHIIpONQA2oltge1vHgiJ60Bl3BH9DtnelpzQWVj7kY_BwSsgjJXznF4Z1g5YgdNAdDsBOwETLAbur4Jelut2BAeaf");
    izdelaj(nizi, 214, "UXRMp4PrZyCZ78cSzn_Rs7mkzzi2gAn1dTK2q2Ker8tbs3v2DptVS3QhOvjH5hsG");
    izdelaj(nizi, 215, "29fl5tjaLWh41xK");
    izdelaj(nizi, 216, "fIJuOe0aai_eTtniESa29eXWGbC5IeSn3aPulSucZzrhqqAQUi3BFX3qFehFG_4qvWfgSXp767q_V07lq");
    izdelaj(nizi, 217, "D7cpuj2C8ZaVn8nxsjq7k7OUQt48mU9NaF738wirJcBpv0xtHpOY1iqThVtU620lsgMQwoKneQikadfOqH");
    izdelaj(nizi, 218, "CzpMu5F");
    izdelaj(nizi, 219, "xAyB7PsH6egv4JiSWzAIepEE0oCo1Ik4kSbP4B7YFTyLJJ8Dm5PDg6F55B2chy5cKhnPX1ux9sb5b7YR");
    izdelaj(nizi, 220, "PR8rYPZRs3ZMvue4kg0hUulIuNBPDB4Fvvk1poPN81");
    izdelaj(nizi, 221, "9Cc5gsb0qU3");
    izdelaj(nizi, 222, "QR6ZDE5zbExkULqbcknOvUS64qX_DDROWpZmt2pQyV");
    izdelaj(nizi, 223, "WbnVdSa4Lz9CaoVlRhYLBZx4vf8RkVd4ulWfMMxDFBXnVkGSENjU3TjvCSiQSDlR9E_Gs2KO5WwZt4xOpABeYarXJToUcd8dA");
    izdelaj(nizi, 224, "_JBjbwijHkAZfVOWtgvCSvV7ybqA5EUSUJXs_pwQ1avvnY0nBsHAVWpeQA6oiqunNV");
    izdelaj(nizi, 225, "aZQLjLdheNGb3C");
    izdelaj(nizi, 226, "P20kEmtDn");
    izdelaj(nizi, 227, "gx2NxhaQ87EFHNbH3oFFgf");
    izdelaj(nizi, 228, "gOz6ZsO3G1jf_P5RIEsmFCTJm3Qvj03XDZ2MRn7bNs1KnczmR15i9q0RMMJnjcySRbBN1NJB");
    izdelaj(nizi, 229, "dxpMbpxRF_1aQq0easYwwBHg3zBwhIU");
    izdelaj(nizi, 230, "MyjcS2jEro8Fadx6AHgWaKJsuUOFw1Q435nMgrmG7Vy5oBmMo1ySGKwuDhCQwqbys1l");
    izdelaj(nizi, 231, "6yfhb6t7dLAluqDmYEeZKYT16oTUucPPUX09mRJbsboIYMDWTu236BjR7ai0SyKDx_M5q_9sMO");
    izdelaj(nizi, 232, "xYQ57YsYPs2GRcps_5sBC9CBbIIQh0zv5VxWOwYZp2LXCq4qggI3ovj8ihGy_9rdNJh7JapdpSHgiMkPl7iVyEHGr3x9OpF");
    izdelaj(nizi, 233, "FIfHYQ_FzcNn");
    izdelaj(nizi, 234, "vdO2In_r4MwuRySx5NVWV2j9UTp51vsbPANgTeD7ORwZLEPO8A1oF1rHXog1msX");
    izdelaj(nizi, 235, "tmIioWHmjUiV7Na8Jm09PN1aZe9LP3c7KWkcXi0f9qM96yDW0p");
    izdelaj(nizi, 236, "3X1lmh7P9h");
    izdelaj(nizi, 237, "9adn72UmHjSj5ZgdyVKOhkIGUX2X_bzdSOack2nfOXOMWc3r6y6LZModQiZQYRc9WrtwjYwlZTiHe56VUiCDVZBc7FGgiF9U");
    izdelaj(nizi, 238, "UZxZfEz7FdJA4HciSbJz8uDAgXomMz79PfZr_68kNIPxKc");
    izdelaj(nizi, 239, "0uMDPQqyL5JTI");
    izdelaj(nizi, 240, "BGcGQMroJV1Dz6HJjlpR0ABT2sHEuFmi0AcIiLTZOa7UG1zDlZ8R0mMID0_Z7i7i");
    izdelaj(nizi, 241, "cTVRC8sGlQaRGyF9Ei8SflKTI5IsPuva770NHY");
    izdelaj(nizi, 242, "Bxqv5UdYT9HzCDO");
    izdelaj(nizi, 243, "4lMdvbiS4IxYIvUpO8S0_ugihtAlgRuQBAKre9aH6OvTnK6_x8Fhe6G6jM6rr2dkLsohE5xd");
    izdelaj(nizi, 244, "ewCo4xKcz4cJZcrkybA_cvlxpU60nHdt");
    izdelaj(nizi, 245, "AEld4QoPsEWilN5PPkZF_84TDxQdqK9QuyO_tbn9hV4YPRs");
    izdelaj(nizi, 246, "beE6coWLy5VYMhIymYpr_T4SYac7pTeh6RDYFcfhRoeXC7ibJw9tfyOn4eQxXlUKSKHKjHp9iW");
    izdelaj(nizi, 247, "IZcPN_JaLOv6dosXL63JD_poCc_ftIE2WwSLiJsKvro");
    izdelaj(nizi, 248, "cHqkDZ17Bsc2c4FJVi3Dn6gyrcCsVIyDoJcjLQAhRheWTUeNvBZV87WSWQGQJN1segdxqqQdf2LeRzB51C7F9geO50DKSNVPynK");
    izdelaj(nizi, 249, "Y0tJUHY2cllTRKIf7PxmQPJQGd1tfowoFA43KuIihnuCtukEcCkoCDqyjr3yFr6avq8NpnGA5nk9gdsfezAaTa4dU0");
    izdelaj(nizi, 250, "4nuKS75r3IApkL");
    izdelaj(nizi, 251, "aEX3Asd8cqJ9Er2MMvowW7EEuy63KRW7V6aann3AVc3T");
    izdelaj(nizi, 252, "I6azOpdWMiqUoHPFOpMN874d6zJrMcz7rxu0xDwGzWKBJV3vrGq923boXM0Yi759CEL30CJihxeTnZB05gO9vHIpRJ0eZ9Ej");
    izdelaj(nizi, 253, "Ee_AT3nRiGF0eZcfliWORjV");
    izdelaj(nizi, 254, "gaK9rtwlnPtkHT_xlVyARnlkCiS2SSS_ZXv5cIsNgFLcCjiSLfHsZoe");
    izdelaj(nizi, 255, "iome22wHMhxEj3ftSIZcVXt9lqMaq3f3Y7QRw8BZzXVuls_5R5krytjgstByZvrCjFtUfixCky");
    izdelaj(nizi, 256, "VhNLEgWXAZXI5we2KJ5p3HaaSjGmrT5UbxNOLFymYqICl19a9S7n7NVcbicSyQpMnY");
    izdelaj(nizi, 257, "50wvN2NbkUylQgkTJJagreQWCInxsu9zEPKZf_I_KrqIXnGTL7");
    izdelaj(nizi, 258, "j0uWs2pSZind43BIPK5ppwADcG5Yz_RYdLq5k9y8w");
    izdelaj(nizi, 259, "aNZtTlvmVzny");
    izdelaj(nizi, 260, "uDNFCaNcDHPqcC");
    izdelaj(nizi, 261, "vmJqWBgZJxRySzGGLukbVaoRg2resG1NGqkyLff8e");
    izdelaj(nizi, 262, "Om7zJAbL3Rm4CPyVsvc16GcHi6tgieA5idYoj6xfZPXLtpa2Oeq04jYLry0HFkt1EKW");
    izdelaj(nizi, 263, "3it5k_MP12whYx0Rxqo1gZlgvPMqNm67LC0BiSAIJu2d05DEmcQo9BP8ZKZ2AjOFiBoD1GIqJ4D5lnkr_nu20iogPr5X");
    izdelaj(nizi, 264, "H78XMQkLuZ2_MxheWZ81gfD_hUJNIO0gSql7Z0iACDApIX7DeBxKAUk15JICba48E9PYQLs2iumJpC7OE9cLIsSMJIzhNN6");
    izdelaj(nizi, 265, "9adn72UmHjSj5ZgdyVKOhkIGUX2X_bzdSOack2nfOXOMWc3r6y6LZModQiZQYRc9WrtwjYwlZTiHe56VUiCDVZBc7FGgiF9U");
    izdelaj(nizi, 266, "GmzAEx9v");
    izdelaj(nizi, 267, "Z4FekgCCn2cvxwVGleBYVrgsY7SH69k1cHrHc92q2tuWxYNySOpegDfcPnBHfCk0cC48l1LJporzCKOKNtlW5MBAwucQ3gCa");
    izdelaj(nizi, 268, "3X1lmh7P9h");
    izdelaj(nizi, 269, "76V_QwXXtlx5vHQ8gy9FzJFw2NKafb0qj59CgaprQ7sAEB_lF0XyM7SijRG2OaoljLsmwZ8R_o0XASVFbBBXQ8254i1WEsadXf");
    izdelaj(nizi, 270, "fkVsx4pjvF4Gf5");
    izdelaj(nizi, 271, "u9XQ3qGDONkYFCoI4vfUMIMBETnWaZsmufRTCNzLl1VhsmOpiW_oZDDLJK2ePFoz0JwbZoPXXLVLafR8MDZu_m");
    izdelaj(nizi, 272, "PVCBn3lOG_xlvozQOePRVU24zw4GBpeLP4Uo9a8SnfVbG");
    izdelaj(nizi, 273, "STnBJ31Oo5KK8QCyO_91YtMdmm1CXV7EwmIrg5ElCu1aHaEMRvMc1Jc_o69RXJlKauNXzLQT8D1nhKQfG38B1UK6v60vbxGG");
    izdelaj(nizi, 274, "9Zp0LGm_cYd8aS25CFlqVh2IN3zpMrhszH9R7w1BNDkrpOew");
    izdelaj(nizi, 275, "PzqKbNDgCaiqmttBO143H0bnXEiNSdZU3Ar89ZNp5HfR9TXSqT6y3o7SKGwPz4KxlTYxoBra5UaOXiio_f_bp7zc56uogiSiuH");
    izdelaj(nizi, 276, "2CsPYi5HwHVC7uyQJeVOq05onPLB6ype736Oc4nR12_egZzYeb4YfeQc4Bxt8LzW4VzDQch4la30RwsgdIqTTxhMbIj9F");
    izdelaj(nizi, 277, "ewCo4xKcz4cJZcrkybA_cvlxpU60nHdt");
    izdelaj(nizi, 278, "6EhBquxODPDhavJBic1C_yEplXCEDxWSE48A1Gfjw5BgyifAiPz1fkYpj1APbc9C7paG0v0U");
    izdelaj(nizi, 279, "s46hPzW0");
    izdelaj(nizi, 280, "DOxMHaJKBSNfR6n1UE9pmg8q4o0RhIYXZC6ri");
    izdelaj(nizi, 281, "Ee_AT3nRiGF0eZcfliWORjV");
    izdelaj(nizi, 282, "d9zgdkgfbVnRDXVj2f16CXj9YQ7fQHovq6bovE2JDei6a1UyhnCBFLjl");
    izdelaj(nizi, 283, "A4gTSMpls8eNsRRB8x2nL_3Dq2GCltE8SEFB9GAKtDESCeDzbM8FhZ8icEHLh3h3yuBL2Sv2UcGaChr");
    izdelaj(nizi, 284, "OMmxfQGKdjtF7S0fIiLZNuvfBUoPCTbapveSIamofTFah");
    izdelaj(nizi, 285, "pZQMiFo3pjdUw7dij_EY0fPb3UkLmfyoJMMHBavHA8mSV9KG1c3Kj62631aqz_3QG9PYbtvf");
    izdelaj(nizi, 286, "QBJfB7atu6yEMArdc30ljQh");
    izdelaj(nizi, 287, "3g7pe6XpBa03B8628SQ38kTlab8T17QBJ4VcuqJxh");
    izdelaj(nizi, 288, "W3hFruGASq");
    izdelaj(nizi, 289, "FKpZ6Xj_oCmVchdgThwuIfzpyBbUK0FdzhajItOuUjrVMDx8WhhpK8dRpUJ3aIS1EDv2w7k7VcvwtTBPGXzTlC7git5ER6");
    izdelaj(nizi, 290, "rbOdXw7cEo8MVlEn4NmYsdmOBsq2h0XreGqLbenvpdeBhEWTyWc6YLOxcUIkfe5IHa7A1auMiRFQBhRAMldun2ZPdk5IqAUum");
    izdelaj(nizi, 291, "jwTKpbHeM0VfRn6dQsx8iYrBAg3LVVRKgFkJhgSbNuTDLNEnq5W8AYkpztZV4ObPZ");
    izdelaj(nizi, 292, "UZxZfEz7FdJA4HciSbJz8uDAgXomMz79PfZr_68kNIPxKc");
    izdelaj(nizi, 293, "SptxB4jNZHzR0");
    izdelaj(nizi, 294, "MyjcS2jEro8Fadx6AHgWaKJsuUOFw1Q435nMgrmG7Vy5oBmMo1ySGKwuDhCQwqbys1l");
    izdelaj(nizi, 295, "hfPxBXlsx5R6qJvnbe0zQPX9kq_0KhQTahqUdWCIA1tGvLkwRS3COQarmRKcc5jZ2cGGWNH5Om75HQM2zyyfZYw8gkRYIniitrl");
    izdelaj(nizi, 296, "_4KzY0GzJeeV90jGS4");
    izdelaj(nizi, 297, "d66bTsGR05OVFbOQ26Tyk7o_pVz3uHL6vQPYkJoS7tzBl_JtG0_AsbAOtyP3Zr5GYsJ7MWLprCdiyiGY78l_7TaCuMhdt1klKT7I");
    izdelaj(nizi, 298, "sXy3ty5Zcj1z0X45uey2Zrywf8isqq3P");
    izdelaj(nizi, 299, "yzNUPsp4wJzO8__VXUexH3Rna7lbCdUEzTgm5J0VVcCjdbTgB6WTOLUa2CLYWvaFueyjmJVOlPJct6f5XVSs");
    izdelaj(nizi, 300, "r32djhWemW287jipaztNZs3Ewpp0RwajsG1Jw5SgrvZ9ihgKOq7e2KT2ttQqmQDAKL36vMPC_CBNVSjwaMGwdljJIsZ0BzHBbElg");
    izdelaj(nizi, 301, "g8kt_bWQaKXD7kUdsXeFsIvL8No8yu7GaD9By");
    izdelaj(nizi, 302, "XwSccnyFlAGgZ0AW03fWzmCw7C2KAEu47g5ww8VaGsekxZFPSresQ");
    izdelaj(nizi, 303, "Gy6BQW5wpXjEORFkD91IxR71y");
    izdelaj(nizi, 304, "51Ri97ZsGNcitlwmYSeINxttLiIl528maUiJstPeXCClWZJVQC_Rw3Y5LJHhZshh");
    izdelaj(nizi, 305, "7lZbled9p7eMqVU_ixpkAHNmB8ZbFdoWa0zFxkY1PLWdw");
    izdelaj(nizi, 306, "WBtXGTqgxOmgJ5EbP0YWROgdu48ajAA6RgeGVVuD15_f3Rk3UEv_nbNe_nyR6sjQ0c64");
    izdelaj(nizi, 307, "9xYC6TD");
    izdelaj(nizi, 308, "kuBacWXKr2tdzBXNmL_7bYXMK9UvnPyeqRLfX_FzQt");
    izdelaj(nizi, 309, "hIs7NHw7ZkfqAX");
    izdelaj(nizi, 310, "uSxCFaNntElUZgmzlwDdj4pWNb8GAOhV6ev81rErKs2DzK");
    izdelaj(nizi, 311, "9EbHXVe_");
    izdelaj(nizi, 312, "b");
    izdelaj(nizi, 313, "ltnUI6wOTR5ZD9v");
    izdelaj(nizi, 314, "gx2NxhaQ87EFHNbH3oFFgf");
    izdelaj(nizi, 315, "Z75skAZUMIKsPdsztLdQLu7a5OGSSMEq5w6iMtCfV7HWI84wHRtmCZ2EIzEEgooBd4GOZeyg");
    izdelaj(nizi, 316, "7fPcjdvDxg8IHdnPTAgQwiZqNHInCoN87Jy");
    izdelaj(nizi, 317, "OJr2EkBMu1Y6P5");
    izdelaj(nizi, 318, "4XYQMqjtIxMtt5EXqq9WiKwomFOJ5OkkI1SaZHTtcy7fJwUESiczRa77ZMGMHT");
    izdelaj(nizi, 319, "CoKLJP");
    izdelaj(nizi, 320, "KdzUjz4dydl8BcajxQoFcNpgdYFkTdvuWTN1zSOJ9eYTechN");
    izdelaj(nizi, 321, "jwTKpbHeM0VfRn6dQsx8iYrBAg3LVVRKgFkJhgSbNuTDLNEnq5W8AYkpztZV4ObPZ");
    izdelaj(nizi, 322, "WGumtsm9ga3b");
    izdelaj(nizi, 323, "BTME6igu9PkDB0eGcPgdpqZpsBQYVC32PrdkQJI9QuE3QQXLwqttMozvGMbhai4");
    izdelaj(nizi, 324, "OKZVOWP9wPyWu0ir95XUi57iMKzI_2NcN58Ygqqlry2SQR18adFq");
    izdelaj(nizi, 325, "KSeZ5bns4_XrFzisEm9");
    izdelaj(nizi, 326, "CzpMu5F");
    izdelaj(nizi, 327, "cHqkDZ17Bsc2c4FJVi3Dn6gyrcCsVIyDoJcjLQAhRheWTUeNvBZV87WSWQGQJN1segdxqqQdf2LeRzB51C7F9geO50DKSNVPynK");
    izdelaj(nizi, 328, "OdU9jHL4NWqd23SCSrgeYpo2HSRXDyYbpQHTOXQlRcNgqR50x9IZKZ7XwoYMRYeX0Bm_Pb8GG");
    izdelaj(nizi, 329, "GyWbg6IhRvDMQ7CjFkaIcbIxPqM_4UAPPVD4wRGurqvHrLczrWxAaBtChHIH1M1CfBEDB7hlZ60klu7KrDY2aMFyEIWzEXQBx_ft");
    izdelaj(nizi, 330, "tMKXo0wrR1gakt2RkUE7lWZv22fUxv8ngbLJFhK5152aUqhR5kJkDRoRPCdRyswYe9mWfoajTtWjOmXvu");
    izdelaj(nizi, 331, "BTME6igu9PkDB0eGcPgdpqZpsBQYVC32PrdkQJI9QuE3QQXLwqttMozvGMbhai4");
    izdelaj(nizi, 332, "CJZkCt0YZLRmtLhCGllRrxjeDV4E");
    izdelaj(nizi, 333, "V91PWN6UKnHnR9zHabu5VnwXnrAWdBWENNrD0NW0TCrmZ7QrWzRs7HS5PTRSENjossd");
    izdelaj(nizi, 334, "xmPwffjAMmDcjr1EEG9eI3kd29BXuVBBU2iJSGnKPgBXQseJHtq6SMWZoAe");
    izdelaj(nizi, 335, "iome22wHMhxEj3ftSIZcVXt9lqMaq3f3Y7QRw8BZzXVuls_5R5krytjgstByZvrCjFtUfixCky");
    izdelaj(nizi, 336, "v7NgoWcNZ8RWbo6gghTogc8ZSzw_GCnDjRHZva_06dDk8A8HZvpRpuAPlkvgO2i5Kutf2eJr01lsE3nFhiejBlQ");
    izdelaj(nizi, 337, "BgWxBHI7x53KrP7gsDJfTyEilYur");
    izdelaj(nizi, 338, "Z9grOd54pzpAT_8jbnPzxFIvkRsprvdNc1C6XFnDgCBZsdtX680");
    izdelaj(nizi, 339, "5oEcAyms5O59jgRIKE6svKJlXunNns67Ixxc");
    izdelaj(nizi, 340, "Hh4WsGwaH9c6xTbJx0PE3XHQs4x1j_O42ApwUMp");
    izdelaj(nizi, 341, "N15pQf_2q8ixccC4L");
    izdelaj(nizi, 342, "qtpjiOlhOuBmIe82R0b4ZxdrGjxnQ7PM8SrHGI4eV5eJOuuzq5rxjSB3cEdXy62Kerow71rjdDAEOIRKRgGb");
    izdelaj(nizi, 343, "NknGog6NR6AEVAqEclK_MMcOHxHtD4xA96jM943VLpUYu7MqTsqf_TcWJG6OEeKeTArqMgXBBw4wVe2U5MCMYqIt");
    izdelaj(nizi, 344, "3BvwuMHLVGS18O6PhgBV6UvaNiWjccEFxE19z_g6_6S6q1zlvJ9sWR3MSA8LLGbtFxXOVolMyojEiKqTdb0sPHsnzKvrBXy");
    izdelaj(nizi, 345, "qffTB98psJmP56I9Q1lM7__HZ1Bt3rHQDnceZmJA_9MsnyLlp0TBTD9NnF_Ep3jfDApGLJzHj5tvOWASDmKDzli1PjZZ4StO9n");
    izdelaj(nizi, 346, "DfcwnqGqAwBXZrigBGBgZy9ZRnzDZLo4JfMgz2VmA01pGPPaE0s2F_");
    izdelaj(nizi, 347, "sNxjJBUHRZsRPdQ3lXpVGKTta1b2EtdkEiV8_AetUu0kfXI");
    izdelaj(nizi, 348, "ytnkr6ukFgQFzu2");
    izdelaj(nizi, 349, "nv1XccTXvmShIQqqhrpgBnWzbdcPUJfizFLwxNI1XQFIygATOgNcr0vJTXq961rZ2SNBaIRtvZh8T3MdUgp2OeRxffx0CZhq");
    izdelaj(nizi, 350, "c06ZOfx2TsOtwH5nqLLPJUGF4h4YqyzhRNSRzyV5KfItox7dYxWDq6wYhIAILKC1Jule");
    izdelaj(nizi, 351, "VYEe4fbq6W6e3itMB8uzSlwuxZ32vKXeqnLw7WQhubvlGHsajt92K5");
    izdelaj(nizi, 352, "mHkE5Rn9TM26O5ihqmfhR4KzjCZt9JNCy0_QevVKozEr");
    izdelaj(nizi, 353, "s9vkYSP6xT44nyvRhHW4Gvr5dW379AXkQwqRy7sC9v_BrpAReIPcRlx4v87fCtgk9TxEo8EQ9iAivwllNFIWMExFpbICDHhp");
    izdelaj(nizi, 354, "r_z2LRfg9oApNI_39MLb");
    izdelaj(nizi, 355, "bWAQ4yiNCoxjUwxXeWH4gm");
    izdelaj(nizi, 356, "xZocsNHunfjF9LtSpMq77iDSNhCjSit36vEIj5yOJLBT6tNAKRerg2qFCf5DHNl1E_U789uAjFZGZrqUeM8ob");
    izdelaj(nizi, 357, "Ee_AT3nRiGF0eZcfliWORjV");
    izdelaj(nizi, 358, "ucf35lAWAKiWj5FQyjt1EpWGAUeikootc");
    izdelaj(nizi, 359, "o9aG7dueF4ahQnoX1gtDmmgl7gJ7T2I8ZIGO7rH");
    izdelaj(nizi, 360, "cfjo0V_oxz39tpC7f8knPZ4lvkjdgZ");
    izdelaj(nizi, 361, "ieQLcFspVj");
    izdelaj(nizi, 362, "473yKMvV6qdYLgB6jgJSj7cme6HS6buczoAAWHmLlUwuuIRtk6SCm");
    izdelaj(nizi, 363, "jwbo_8smhg7ZhddhoInJ96kxg_Wa4gnNfMxi0ChZ3ESkNqjWgkMl4a1gWPlvy8ETLLTWvN0Vb_sEd8rZW7v1F9XiCddMTF4_qV5p");
    izdelaj(nizi, 364, "kYsJnaVTW_AYM6VAw_5Um2g3gBPV2WEPyzNhk4G7YZBYYK4hkTQmhHulz46cK7Whx5BjkAETI5sfeJiJ");
    izdelaj(nizi, 365, "VIbfEDrkgW8h2VZN3Fpe3vpEen6NYQGc3ZH5qN31SRXRlw8uEHO_kZsw");
    izdelaj(nizi, 366, "Z9eRzqvgWiX9q5OVvMCr_FfgdZmSKYLcf85KxbQCexLV1a5HyUUebDIs7w");
    izdelaj(nizi, 367, "DfcwnqGqAwBXZrigBGBgZy9ZRnzDZLo4JfMgz2VmA01pGPPaE0s2F_");
    izdelaj(nizi, 368, "O4myidHxs_52XUMKU3azx5w8pRP1zbte9n68fDQXwIME4YCIRd0cwO8pO6YkqOR");
    izdelaj(nizi, 369, "G8M4z9dcKpiybymQYA0SdOarpHXwgTD0KKtY7EpQvIfghoe_uRbIElxuKkFNxTb1v6");
    izdelaj(nizi, 370, "cvJC0N");
    izdelaj(nizi, 371, "DEr5MCNdy__DDuBEJbBNN1rr8hoSs_6xTUI20AfWeAqcAcDp_7FHzbsBJXnAtfMrSp3ogMFSnSZM0wY05642bmzY");
    izdelaj(nizi, 372, "50wvN2NbkUylQgkTJJagreQWCInxsu9zEPKZf_I_KrqIXnGTL7");
    izdelaj(nizi, 373, "FvL1RNP");
    izdelaj(nizi, 374, "OKZVOWP9wPyWu0ir95XUi57iMKzI_2NcN58Ygqqlry2SQR18adFq");
    izdelaj(nizi, 375, "PsuvT4ktff8AB0EuUAZDitN3ZVfJJG0WD7jly5pqo5fW3gEiiyFJ");
    izdelaj(nizi, 376, "bccESkyMAf7XEgDtr3jwj72jC2K_P4N7b0EGqPni0PtW1hAnpn");
    izdelaj(nizi, 377, "4DiKk1M5c2taNu9gq9FJfm_5lWdnzYRMyCQs8niWiwTWutZO");

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    racionaliziraj(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        if (nizi[i] == niziKopija[i]) {
            free(nizi[i]);
        }
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}
