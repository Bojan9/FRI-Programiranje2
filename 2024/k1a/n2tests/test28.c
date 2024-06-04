
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
    int n = 271;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 1, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 2, "qrIj4y3GA9RHwzZnU3_60sgk655ZkAZGjimaFszu1scpdr4ZSgUOJhlIAPr7icTG7foaVIgf03v_");
    izdelaj(nizi, 3, "fKiATJze6DuuIBN4TT5Q0eOJ2_COUo1Khi0yo0EOvBwByyxMnlrt3VEbUjaPRT_R2g1kWwIjvjX0Q_mrRa12yHN2KCJr");
    izdelaj(nizi, 4, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 5, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 6, "RRzqRGyPEA76P8tCk95ttOX_Rcun2fuvJ7LW5JPCew47f");
    izdelaj(nizi, 7, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 8, "moWNVLc622XTKkHyUMhb5DkhDSPXbHA8h2R8PLvdl9ItNUs1TzYmE2X8ywzGV");
    izdelaj(nizi, 9, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 10, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 11, "MqMVcv25Whv09oZwD5gzJG5OFwbwhkUKg6KcskdQhZkDOJwvBm6Rh0nAmmdcD");
    izdelaj(nizi, 12, "fXLqbYvo4KoXMheTJKxV");
    izdelaj(nizi, 13, "fKiATJze6DuuIBN4TT5Q0eOJ2_COUo1Khi0yo0EOvBwByyxMnlrt3VEbUjaPRT_R2g1kWwIjvjX0Q_mrRa12yHN2KCJr");
    izdelaj(nizi, 14, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 15, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 16, "3I");
    izdelaj(nizi, 17, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 18, "OINO");
    izdelaj(nizi, 19, "OINO");
    izdelaj(nizi, 20, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 21, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 22, "fKiATJze6DuuIBN4TT5Q0eOJ2_COUo1Khi0yo0EOvBwByyxMnlrt3VEbUjaPRT_R2g1kWwIjvjX0Q_mrRa12yHN2KCJr");
    izdelaj(nizi, 23, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 24, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 25, "lEq5HgJTOfPGFkImGSXRRxAmB70qp858BQpWEwk46JPVx");
    izdelaj(nizi, 26, "RRzqRGyPEA76P8tCk95ttOX_Rcun2fuvJ7LW5JPCew47f");
    izdelaj(nizi, 27, "OINO");
    izdelaj(nizi, 28, "fXLqbYvo4KoXMheTJKxV");
    izdelaj(nizi, 29, "ZGIupaU3BFSRhfGIA6icfiytcRNcapZ7w_t1cY2Pjncz7yR0CbF_HmLxZ");
    izdelaj(nizi, 30, "fXLqbYvo4KoXMheTJKxV");
    izdelaj(nizi, 31, "xwFT6EVpkfeDNnuovTFwVtJv2ASYNesU7VajQ1S8CrV6U3J_8DLbWeL2b38NHSsPtGW4g0VryqPxneEHdv4mEBfJNCEWpTEj");
    izdelaj(nizi, 32, "2CsPYi5HwHVC7uyQJeVOq05onPLB6ype736Oc4nR12_egZzYeb4YfeQc4Bxt8LzW4VzDQch4la30RwsgdIqTTxhMbIj9F");
    izdelaj(nizi, 33, "3I");
    izdelaj(nizi, 34, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 35, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 36, "lEq5HgJTOfPGFkImGSXRRxAmB70qp858BQpWEwk46JPVx");
    izdelaj(nizi, 37, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 38, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 39, "FnFW5ARqnhTGVo8FXj5WxEP2XSmdjQRh5yEw5UO_27q5vCiVsK9hSU3a7KoXGq8fYEbyJWhJ2b3wo4wXSBiMVi_urt6btZTO26N");
    izdelaj(nizi, 40, "RnAsY9VutxrbCJfikq18QysheLjnBAom");
    izdelaj(nizi, 41, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 42, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 43, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 44, "xwFT6EVpkfeDNnuovTFwVtJv2ASYNesU7VajQ1S8CrV6U3J_8DLbWeL2b38NHSsPtGW4g0VryqPxneEHdv4mEBfJNCEWpTEj");
    izdelaj(nizi, 45, "FnFW5ARqnhTGVo8FXj5WxEP2XSmdjQRh5yEw5UO_27q5vCiVsK9hSU3a7KoXGq8fYEbyJWhJ2b3wo4wXSBiMVi_urt6btZTO26N");
    izdelaj(nizi, 46, "2CsPYi5HwHVC7uyQJeVOq05onPLB6ype736Oc4nR12_egZzYeb4YfeQc4Bxt8LzW4VzDQch4la30RwsgdIqTTxhMbIj9F");
    izdelaj(nizi, 47, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 48, "48K6_Gd7xv_uzb_oMyFJ5BosVw_7Kk9Ic1gzqSHOVes");
    izdelaj(nizi, 49, "3I");
    izdelaj(nizi, 50, "3I");
    izdelaj(nizi, 51, "yKUam48rR9tTq9KjEM2Jb");
    izdelaj(nizi, 52, "fXLqbYvo4KoXMheTJKxV");
    izdelaj(nizi, 53, "yKUam48rR9tTq9KjEM2Jb");
    izdelaj(nizi, 54, "3I");
    izdelaj(nizi, 55, "2CsPYi5HwHVC7uyQJeVOq05onPLB6ype736Oc4nR12_egZzYeb4YfeQc4Bxt8LzW4VzDQch4la30RwsgdIqTTxhMbIj9F");
    izdelaj(nizi, 56, "jGEKJGmhtwBsG8_T0ln4fb4ZT0Txpz");
    izdelaj(nizi, 57, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 58, "kvECFfBMcs2y19UUlC7Ka4tMTTIlncKanjEThZiI6CXHiuoKgrD4C6K562RsBNm6jA1W2SuZm9Bn3og8kUecNbIQlYp");
    izdelaj(nizi, 59, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 60, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 61, "rJ3_77_ixqlyasSydlp7D4Mhn0D0eKgbzDaZuX1xb9vo6H5osSskgWoQdWh");
    izdelaj(nizi, 62, "_mJNUGwKtfLzI5pLVdEcqi5HPvjNyGKxQUZymQlZZpKz7bClaeNbYlTKeqiodSYm3sovLDqOYTgyCoDzLBQRWRbmaJWcQUnN8p");
    izdelaj(nizi, 63, "_mJNUGwKtfLzI5pLVdEcqi5HPvjNyGKxQUZymQlZZpKz7bClaeNbYlTKeqiodSYm3sovLDqOYTgyCoDzLBQRWRbmaJWcQUnN8p");
    izdelaj(nizi, 64, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 65, "DwG88MzkFVs8zcYf0Q9gJ1OjSiX027ZfPis0emMp");
    izdelaj(nizi, 66, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 67, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 68, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 69, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 70, "ZGIupaU3BFSRhfGIA6icfiytcRNcapZ7w_t1cY2Pjncz7yR0CbF_HmLxZ");
    izdelaj(nizi, 71, "ZGIupaU3BFSRhfGIA6icfiytcRNcapZ7w_t1cY2Pjncz7yR0CbF_HmLxZ");
    izdelaj(nizi, 72, "mQAKK6Lyavu8NkT77VN70b14FDXPLkpuzCRYrDX");
    izdelaj(nizi, 73, "OINO");
    izdelaj(nizi, 74, "RnAsY9VutxrbCJfikq18QysheLjnBAom");
    izdelaj(nizi, 75, "RRzqRGyPEA76P8tCk95ttOX_Rcun2fuvJ7LW5JPCew47f");
    izdelaj(nizi, 76, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 77, "xwFT6EVpkfeDNnuovTFwVtJv2ASYNesU7VajQ1S8CrV6U3J_8DLbWeL2b38NHSsPtGW4g0VryqPxneEHdv4mEBfJNCEWpTEj");
    izdelaj(nizi, 78, "sqZYRtEUMEmS1nxWGUqHjDoEUI85F8WRYHBbOsRXgTpdjGUqqUtHhmyPw");
    izdelaj(nizi, 79, "RnAsY9VutxrbCJfikq18QysheLjnBAom");
    izdelaj(nizi, 80, "VVwLRTdVUurjjv_LHta7rxJZihQFAjmDhAd9sCDkVTO47TECwqUf9cig0U8NdZmmfvEk4X6NzLI9SDTfVjWKXKH3");
    izdelaj(nizi, 81, "a2D4SZGr3kYZmKdT6goo5L_2oZszPUAocJhn2lV9cyKG");
    izdelaj(nizi, 82, "OINO");
    izdelaj(nizi, 83, "OINO");
    izdelaj(nizi, 84, "3T_n8S73MEJOLZuGdHNrcqRl8Fy_eDjHn9wt0ToQinMYNOctvxakcZ8SPsXsz3rxpAyGOGXDkIlhw4pIN3FGAUNz1AaubMm");
    izdelaj(nizi, 85, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 86, "8B8LqrD2qEca3si8UY6wOYR_ENzAII8ZiRyKUNRWANakctQWLP1");
    izdelaj(nizi, 87, "sqZYRtEUMEmS1nxWGUqHjDoEUI85F8WRYHBbOsRXgTpdjGUqqUtHhmyPw");
    izdelaj(nizi, 88, "3I");
    izdelaj(nizi, 89, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 90, "OINO");
    izdelaj(nizi, 91, "huDJPSBIa_YJ63io_VekS_j9uyFUu8hxECtkU");
    izdelaj(nizi, 92, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 93, "xwFT6EVpkfeDNnuovTFwVtJv2ASYNesU7VajQ1S8CrV6U3J_8DLbWeL2b38NHSsPtGW4g0VryqPxneEHdv4mEBfJNCEWpTEj");
    izdelaj(nizi, 94, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 95, "F2");
    izdelaj(nizi, 96, "OINO");
    izdelaj(nizi, 97, "g3zitwCKoCcMPVLEkkDt6yt8VihBs4jL2pvS3gv7EmxsK01rckBrZg5bQbiAJ6gtblVzYQvXpiN4");
    izdelaj(nizi, 98, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 99, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 100, "RkwtWkJQnnl4Jhg");
    izdelaj(nizi, 101, "ZGIupaU3BFSRhfGIA6icfiytcRNcapZ7w_t1cY2Pjncz7yR0CbF_HmLxZ");
    izdelaj(nizi, 102, "rJ3_77_ixqlyasSydlp7D4Mhn0D0eKgbzDaZuX1xb9vo6H5osSskgWoQdWh");
    izdelaj(nizi, 103, "RRzqRGyPEA76P8tCk95ttOX_Rcun2fuvJ7LW5JPCew47f");
    izdelaj(nizi, 104, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 105, "MqMVcv25Whv09oZwD5gzJG5OFwbwhkUKg6KcskdQhZkDOJwvBm6Rh0nAmmdcD");
    izdelaj(nizi, 106, "NskEKuUH3GhoKCPIsIB0cfdYYoQoVjRmwuqDd8RYlv0dnMTznc2");
    izdelaj(nizi, 107, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 108, "3I");
    izdelaj(nizi, 109, "ldGGgZ7ek9WRgX4O6N9dCuc4mRDwz_o1mwDTGLp73EASxxuNfLT7N38r1QmLiSzcUhpUwR2");
    izdelaj(nizi, 110, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 111, "kvECFfBMcs2y19UUlC7Ka4tMTTIlncKanjEThZiI6CXHiuoKgrD4C6K562RsBNm6jA1W2SuZm9Bn3og8kUecNbIQlYp");
    izdelaj(nizi, 112, "3I");
    izdelaj(nizi, 113, "48K6_Gd7xv_uzb_oMyFJ5BosVw_7Kk9Ic1gzqSHOVes");
    izdelaj(nizi, 114, "Ysm44R_");
    izdelaj(nizi, 115, "djLCR19M0dWiLAWKbKp2f7wUNTyoktarZM1emxDAGXRkhDXPziNPLFlFKjS9rA4V08G6YBtZR2hMkbDdfWX1Mj");
    izdelaj(nizi, 116, "RnAsY9VutxrbCJfikq18QysheLjnBAom");
    izdelaj(nizi, 117, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 118, "_mJNUGwKtfLzI5pLVdEcqi5HPvjNyGKxQUZymQlZZpKz7bClaeNbYlTKeqiodSYm3sovLDqOYTgyCoDzLBQRWRbmaJWcQUnN8p");
    izdelaj(nizi, 119, "_mJNUGwKtfLzI5pLVdEcqi5HPvjNyGKxQUZymQlZZpKz7bClaeNbYlTKeqiodSYm3sovLDqOYTgyCoDzLBQRWRbmaJWcQUnN8p");
    izdelaj(nizi, 120, "2CsPYi5HwHVC7uyQJeVOq05onPLB6ype736Oc4nR12_egZzYeb4YfeQc4Bxt8LzW4VzDQch4la30RwsgdIqTTxhMbIj9F");
    izdelaj(nizi, 121, "dWHQVWMgoctBbuprL3WBty8tltDHewfgZHmBFbpkIq_");
    izdelaj(nizi, 122, "FnFW5ARqnhTGVo8FXj5WxEP2XSmdjQRh5yEw5UO_27q5vCiVsK9hSU3a7KoXGq8fYEbyJWhJ2b3wo4wXSBiMVi_urt6btZTO26N");
    izdelaj(nizi, 123, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 124, "G6");
    izdelaj(nizi, 125, "_mJNUGwKtfLzI5pLVdEcqi5HPvjNyGKxQUZymQlZZpKz7bClaeNbYlTKeqiodSYm3sovLDqOYTgyCoDzLBQRWRbmaJWcQUnN8p");
    izdelaj(nizi, 126, "48K6_Gd7xv_uzb_oMyFJ5BosVw_7Kk9Ic1gzqSHOVes");
    izdelaj(nizi, 127, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 128, "FnFW5ARqnhTGVo8FXj5WxEP2XSmdjQRh5yEw5UO_27q5vCiVsK9hSU3a7KoXGq8fYEbyJWhJ2b3wo4wXSBiMVi_urt6btZTO26N");
    izdelaj(nizi, 129, "fKiATJze6DuuIBN4TT5Q0eOJ2_COUo1Khi0yo0EOvBwByyxMnlrt3VEbUjaPRT_R2g1kWwIjvjX0Q_mrRa12yHN2KCJr");
    izdelaj(nizi, 130, "qrIj4y3GA9RHwzZnU3_60sgk655ZkAZGjimaFszu1scpdr4ZSgUOJhlIAPr7icTG7foaVIgf03v_");
    izdelaj(nizi, 131, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 132, "L5S4brr_rzfV0wgO7yeALQGLLNY6STwAUNVCoYfsvav8a5smGN_iMro31JbISodojF_C6EOIY4FZuyMR");
    izdelaj(nizi, 133, "rJ3_77_ixqlyasSydlp7D4Mhn0D0eKgbzDaZuX1xb9vo6H5osSskgWoQdWh");
    izdelaj(nizi, 134, "fXLqbYvo4KoXMheTJKxV");
    izdelaj(nizi, 135, "RnAsY9VutxrbCJfikq18QysheLjnBAom");
    izdelaj(nizi, 136, "DY5x9bf6VW6wKA6mqFiF0B3UHosmPMyXW8KiSVOmL0jtlcrpPepB7UuMFDtynK50kz1Q");
    izdelaj(nizi, 137, "YbmWngK_LTJ5mgi7hu_RKiohuIorMRjgYE9UlMePxOOgJ0rqkeqqfY28ZgG15dCxi5");
    izdelaj(nizi, 138, "OINO");
    izdelaj(nizi, 139, "fKiATJze6DuuIBN4TT5Q0eOJ2_COUo1Khi0yo0EOvBwByyxMnlrt3VEbUjaPRT_R2g1kWwIjvjX0Q_mrRa12yHN2KCJr");
    izdelaj(nizi, 140, "CvRAc6Ukpt2XdwqOu5d");
    izdelaj(nizi, 141, "9hsyZJukIcLdJGpbdAj9FpL_5V0luHh7vPmBmmXOileDC6V2dAIsB0qF1mvPgiualGfRu");
    izdelaj(nizi, 142, "2CsPYi5HwHVC7uyQJeVOq05onPLB6ype736Oc4nR12_egZzYeb4YfeQc4Bxt8LzW4VzDQch4la30RwsgdIqTTxhMbIj9F");
    izdelaj(nizi, 143, "vxK7TwTbNaWQQYfmEWUmmm4c3Dhk9wdfa2");
    izdelaj(nizi, 144, "Ysm44R_");
    izdelaj(nizi, 145, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 146, "ldGGgZ7ek9WRgX4O6N9dCuc4mRDwz_o1mwDTGLp73EASxxuNfLT7N38r1QmLiSzcUhpUwR2");
    izdelaj(nizi, 147, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 148, "lEq5HgJTOfPGFkImGSXRRxAmB70qp858BQpWEwk46JPVx");
    izdelaj(nizi, 149, "fKiATJze6DuuIBN4TT5Q0eOJ2_COUo1Khi0yo0EOvBwByyxMnlrt3VEbUjaPRT_R2g1kWwIjvjX0Q_mrRa12yHN2KCJr");
    izdelaj(nizi, 150, "ZGIupaU3BFSRhfGIA6icfiytcRNcapZ7w_t1cY2Pjncz7yR0CbF_HmLxZ");
    izdelaj(nizi, 151, "xwFT6EVpkfeDNnuovTFwVtJv2ASYNesU7VajQ1S8CrV6U3J_8DLbWeL2b38NHSsPtGW4g0VryqPxneEHdv4mEBfJNCEWpTEj");
    izdelaj(nizi, 152, "h_fZqqOBvwo171ySDSGC3i_bEhqeYZ");
    izdelaj(nizi, 153, "DOpdn6X7aHEDySzndznVNkCo1ouZoYWW088JBK6KgsBkbNgUdkrtB5ZvVITSuh75fZ8VDTsEa2ZmFegK9QeSw");
    izdelaj(nizi, 154, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 155, "mQAKK6Lyavu8NkT77VN70b14FDXPLkpuzCRYrDX");
    izdelaj(nizi, 156, "MqMVcv25Whv09oZwD5gzJG5OFwbwhkUKg6KcskdQhZkDOJwvBm6Rh0nAmmdcD");
    izdelaj(nizi, 157, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 158, "RRzqRGyPEA76P8tCk95ttOX_Rcun2fuvJ7LW5JPCew47f");
    izdelaj(nizi, 159, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 160, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 161, "RnAsY9VutxrbCJfikq18QysheLjnBAom");
    izdelaj(nizi, 162, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 163, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 164, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 165, "2CsPYi5HwHVC7uyQJeVOq05onPLB6ype736Oc4nR12_egZzYeb4YfeQc4Bxt8LzW4VzDQch4la30RwsgdIqTTxhMbIj9F");
    izdelaj(nizi, 166, "ZGIupaU3BFSRhfGIA6icfiytcRNcapZ7w_t1cY2Pjncz7yR0CbF_HmLxZ");
    izdelaj(nizi, 167, "a5X3MUKeUd");
    izdelaj(nizi, 168, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 169, "ZGIupaU3BFSRhfGIA6icfiytcRNcapZ7w_t1cY2Pjncz7yR0CbF_HmLxZ");
    izdelaj(nizi, 170, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 171, "fKiATJze6DuuIBN4TT5Q0eOJ2_COUo1Khi0yo0EOvBwByyxMnlrt3VEbUjaPRT_R2g1kWwIjvjX0Q_mrRa12yHN2KCJr");
    izdelaj(nizi, 172, "a2D4SZGr3kYZmKdT6goo5L_2oZszPUAocJhn2lV9cyKG");
    izdelaj(nizi, 173, "fKiATJze6DuuIBN4TT5Q0eOJ2_COUo1Khi0yo0EOvBwByyxMnlrt3VEbUjaPRT_R2g1kWwIjvjX0Q_mrRa12yHN2KCJr");
    izdelaj(nizi, 174, "MqMVcv25Whv09oZwD5gzJG5OFwbwhkUKg6KcskdQhZkDOJwvBm6Rh0nAmmdcD");
    izdelaj(nizi, 175, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 176, "ZGIupaU3BFSRhfGIA6icfiytcRNcapZ7w_t1cY2Pjncz7yR0CbF_HmLxZ");
    izdelaj(nizi, 177, "_mJNUGwKtfLzI5pLVdEcqi5HPvjNyGKxQUZymQlZZpKz7bClaeNbYlTKeqiodSYm3sovLDqOYTgyCoDzLBQRWRbmaJWcQUnN8p");
    izdelaj(nizi, 178, "b2hGawvYYu710_6xted8MT");
    izdelaj(nizi, 179, "G6");
    izdelaj(nizi, 180, "X6Gr8zbQGXaxChUgatgjfOH2j_XZwg9ZnHMFZ1VUX0ebTkC1yVWMGK");
    izdelaj(nizi, 181, "_mJNUGwKtfLzI5pLVdEcqi5HPvjNyGKxQUZymQlZZpKz7bClaeNbYlTKeqiodSYm3sovLDqOYTgyCoDzLBQRWRbmaJWcQUnN8p");
    izdelaj(nizi, 182, "JKhEbZMi3I6qe5UB7IaGTFCeKMcq55KIkFoUCbIfvkxvyjrUQbFEW9iz2ZVSgR_Or_N");
    izdelaj(nizi, 183, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 184, "3I");
    izdelaj(nizi, 185, "ldGGgZ7ek9WRgX4O6N9dCuc4mRDwz_o1mwDTGLp73EASxxuNfLT7N38r1QmLiSzcUhpUwR2");
    izdelaj(nizi, 186, "wIDR599FNRMMJ");
    izdelaj(nizi, 187, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 188, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 189, "2CsPYi5HwHVC7uyQJeVOq05onPLB6ype736Oc4nR12_egZzYeb4YfeQc4Bxt8LzW4VzDQch4la30RwsgdIqTTxhMbIj9F");
    izdelaj(nizi, 190, "cmbF8CJrX7qTh8rVNfYto37Dn");
    izdelaj(nizi, 191, "9hsyZJukIcLdJGpbdAj9FpL_5V0luHh7vPmBmmXOileDC6V2dAIsB0qF1mvPgiualGfRu");
    izdelaj(nizi, 192, "3I");
    izdelaj(nizi, 193, "Y0");
    izdelaj(nizi, 194, "RRzqRGyPEA76P8tCk95ttOX_Rcun2fuvJ7LW5JPCew47f");
    izdelaj(nizi, 195, "kQnKiNAxB9SmyoKFGIyT_bgxRO5RuhYgi3z1xbe6ZS4Q9zY0HNxBrLoLNbGg_NzgdhWKf3B5GkLq5INaU896Mkjh");
    izdelaj(nizi, 196, "VVwLRTdVUurjjv_LHta7rxJZihQFAjmDhAd9sCDkVTO47TECwqUf9cig0U8NdZmmfvEk4X6NzLI9SDTfVjWKXKH3");
    izdelaj(nizi, 197, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 198, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 199, "Ysm44R_");
    izdelaj(nizi, 200, "uq2ZZXpuFU0Lk8iE3HkQIYS0_dEZkO5DzdbPgnx0WIAw6");
    izdelaj(nizi, 201, "3I");
    izdelaj(nizi, 202, "O4q1a");
    izdelaj(nizi, 203, "h_fZqqOBvwo171ySDSGC3i_bEhqeYZ");
    izdelaj(nizi, 204, "xwFT6EVpkfeDNnuovTFwVtJv2ASYNesU7VajQ1S8CrV6U3J_8DLbWeL2b38NHSsPtGW4g0VryqPxneEHdv4mEBfJNCEWpTEj");
    izdelaj(nizi, 205, "2CsPYi5HwHVC7uyQJeVOq05onPLB6ype736Oc4nR12_egZzYeb4YfeQc4Bxt8LzW4VzDQch4la30RwsgdIqTTxhMbIj9F");
    izdelaj(nizi, 206, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 207, "fXLqbYvo4KoXMheTJKxV");
    izdelaj(nizi, 208, "_mJNUGwKtfLzI5pLVdEcqi5HPvjNyGKxQUZymQlZZpKz7bClaeNbYlTKeqiodSYm3sovLDqOYTgyCoDzLBQRWRbmaJWcQUnN8p");
    izdelaj(nizi, 209, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 210, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 211, "DJ4lIWuYriRRRpazQcg199Mv6Yf9KfAPNKcTPVy4FG2TXeBwk5QqhR34miw_yvpLmigIDMfrw");
    izdelaj(nizi, 212, "xwFT6EVpkfeDNnuovTFwVtJv2ASYNesU7VajQ1S8CrV6U3J_8DLbWeL2b38NHSsPtGW4g0VryqPxneEHdv4mEBfJNCEWpTEj");
    izdelaj(nizi, 213, "fEcukFthi9f2hIxaMhGTLshgX1xF2doPFAi77oLszLUJE94Y1K1YcG3DpxojFjU8Qun4Ui5Yb");
    izdelaj(nizi, 214, "3T_n8S73MEJOLZuGdHNrcqRl8Fy_eDjHn9wt0ToQinMYNOctvxakcZ8SPsXsz3rxpAyGOGXDkIlhw4pIN3FGAUNz1AaubMm");
    izdelaj(nizi, 215, "h_fZqqOBvwo171ySDSGC3i_bEhqeYZ");
    izdelaj(nizi, 216, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 217, "JIvogOSq8pPj4rWP4T6D_eQVRKtlSQPTibU_Z5speMyYJr6JcXy0GbxPAR83Ws_3GhrafPaya5rqWRQv1IfE");
    izdelaj(nizi, 218, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 219, "OINO");
    izdelaj(nizi, 220, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 221, "4EoI2GZEluJ89zbawzivhb3NrdYjhON1S");
    izdelaj(nizi, 222, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 223, "KvMrWSPmdFzOypa01c3XcCGbcnJWYigeD5tgGkgQQYccmV3P9iPwgjOJ");
    izdelaj(nizi, 224, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 225, "_mJNUGwKtfLzI5pLVdEcqi5HPvjNyGKxQUZymQlZZpKz7bClaeNbYlTKeqiodSYm3sovLDqOYTgyCoDzLBQRWRbmaJWcQUnN8p");
    izdelaj(nizi, 226, "h_fZqqOBvwo171ySDSGC3i_bEhqeYZ");
    izdelaj(nizi, 227, "2CsPYi5HwHVC7uyQJeVOq05onPLB6ype736Oc4nR12_egZzYeb4YfeQc4Bxt8LzW4VzDQch4la30RwsgdIqTTxhMbIj9F");
    izdelaj(nizi, 228, "moWNVLc622XTKkHyUMhb5DkhDSPXbHA8h2R8PLvdl9ItNUs1TzYmE2X8ywzGV");
    izdelaj(nizi, 229, "E3WmN9ahVpr4jnanMqt3PvSlqShocJmC");
    izdelaj(nizi, 230, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 231, "sqZYRtEUMEmS1nxWGUqHjDoEUI85F8WRYHBbOsRXgTpdjGUqqUtHhmyPw");
    izdelaj(nizi, 232, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 233, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 234, "3ohuaLaLDAPo6OqTUNhfPcaG_NZGNKCz3zotnxTpsUisGkWmeLiysQi7v2mPwNOVW2PMVmrPHBtd");
    izdelaj(nizi, 235, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 236, "0j_PCpmm9c9Xw5ov1w9wMQAlBRFeSaJzAq8xuUAP0wiNdLWOIMKOxsFrSVdCkRcmZlLuh9UH");
    izdelaj(nizi, 237, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 238, "fKiATJze6DuuIBN4TT5Q0eOJ2_COUo1Khi0yo0EOvBwByyxMnlrt3VEbUjaPRT_R2g1kWwIjvjX0Q_mrRa12yHN2KCJr");
    izdelaj(nizi, 239, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 240, "ChxWALl4rRzQpAbYjju");
    izdelaj(nizi, 241, "NskEKuUH3GhoKCPIsIB0cfdYYoQoVjRmwuqDd8RYlv0dnMTznc2");
    izdelaj(nizi, 242, "fXLqbYvo4KoXMheTJKxV");
    izdelaj(nizi, 243, "9hsyZJukIcLdJGpbdAj9FpL_5V0luHh7vPmBmmXOileDC6V2dAIsB0qF1mvPgiualGfRu");
    izdelaj(nizi, 244, "OINO");
    izdelaj(nizi, 245, "7flDnO");
    izdelaj(nizi, 246, "_mJNUGwKtfLzI5pLVdEcqi5HPvjNyGKxQUZymQlZZpKz7bClaeNbYlTKeqiodSYm3sovLDqOYTgyCoDzLBQRWRbmaJWcQUnN8p");
    izdelaj(nizi, 247, "Y0");
    izdelaj(nizi, 248, "9hsyZJukIcLdJGpbdAj9FpL_5V0luHh7vPmBmmXOileDC6V2dAIsB0qF1mvPgiualGfRu");
    izdelaj(nizi, 249, "pmRDXLrYo6b40ZwjtG5l3OROe1NVfHuLMTv4VkYPW_UXPoe_4SWX5Z3a8");
    izdelaj(nizi, 250, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 251, "mQAKK6Lyavu8NkT77VN70b14FDXPLkpuzCRYrDX");
    izdelaj(nizi, 252, "xwFT6EVpkfeDNnuovTFwVtJv2ASYNesU7VajQ1S8CrV6U3J_8DLbWeL2b38NHSsPtGW4g0VryqPxneEHdv4mEBfJNCEWpTEj");
    izdelaj(nizi, 253, "Y0");
    izdelaj(nizi, 254, "JbVh7RgS");
    izdelaj(nizi, 255, "3I");
    izdelaj(nizi, 256, "rkJC_lN_ouE1LJt62VUH8bQt1dT6D4dETcwL3P48W5W02OHERPu_Or4PO0Ha79hbZ4qvy_pJRcBYYKIiGXiW");
    izdelaj(nizi, 257, "gFkfNv7y0xTXcPIwSKwliiORB8rmVLxuQrIKzP0m5DpiXMEs2jIzlL");
    izdelaj(nizi, 258, "_rBLKdt1HlpsOzavK3KhQHD0hKXpxzxVYWhdD");
    izdelaj(nizi, 259, "b2hGawvYYu710_6xted8MT");
    izdelaj(nizi, 260, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 261, "2CsPYi5HwHVC7uyQJeVOq05onPLB6ype736Oc4nR12_egZzYeb4YfeQc4Bxt8LzW4VzDQch4la30RwsgdIqTTxhMbIj9F");
    izdelaj(nizi, 262, "d0VmS");
    izdelaj(nizi, 263, "b2hGawvYYu710_6xted8MT");
    izdelaj(nizi, 264, "3I");
    izdelaj(nizi, 265, "exYcxDfSBNGkZ0nn5NTUefDcDteaCBJDOURnlwk");
    izdelaj(nizi, 266, "h_fZqqOBvwo171ySDSGC3i_bEhqeYZ");
    izdelaj(nizi, 267, "_mJNUGwKtfLzI5pLVdEcqi5HPvjNyGKxQUZymQlZZpKz7bClaeNbYlTKeqiodSYm3sovLDqOYTgyCoDzLBQRWRbmaJWcQUnN8p");
    izdelaj(nizi, 268, "2CsPYi5HwHVC7uyQJeVOq05onPLB6ype736Oc4nR12_egZzYeb4YfeQc4Bxt8LzW4VzDQch4la30RwsgdIqTTxhMbIj9F");
    izdelaj(nizi, 269, "uCX9knSXPKv5OkBec9dEnTooIIFa2ZQAQ2T8gypkeHUe");
    izdelaj(nizi, 270, "_mJNUGwKtfLzI5pLVdEcqi5HPvjNyGKxQUZymQlZZpKz7bClaeNbYlTKeqiodSYm3sovLDqOYTgyCoDzLBQRWRbmaJWcQUnN8p");

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