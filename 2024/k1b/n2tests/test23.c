
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
    int n = 443;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "i9RvIXRM2DWaFuc8SSU_SpbVx3e1_Erm4RooI5UNur9yd17mKd_9bCtB0HoUiuNvVM3GT0c1uqpb1W51");
    izdelaj(nizi, 1, "aaT3HA1rlB8qYr1PexXKRkSLWI_4R8mBUQHzTCIkJvHG5FWy");
    izdelaj(nizi, 2, "fMbL3ulFOhR45PxFQHN_yLQmmJZp0LrzFxSptDzNtlHzXrCaQNMUTQqFMD8Rbu8PE6auRFgaNDbqGdT9i");
    nizi[3] = nizi[1];
    izdelaj(nizi, 4, "_5TbvyhQpstlsSTSFEWNsEMyjKhfJk7GPIIDFgv3tgqAml7IXiEvUtdQqQQKVPIour");
    izdelaj(nizi, 5, "eWxrAFQZSAwdvEx0zglVuu2Qa2rWLCcQ6jgVCWSPFU122xYCLuaENlNW5PpdcR");
    izdelaj(nizi, 6, "k50GZHNhopSK7PXItbzu_orFJ8AhbdBMZVJ");
    izdelaj(nizi, 7, "na5rfoVIaGMpn3LFoOSP1yiijf536m_lJnCpWSDPfEJBn");
    nizi[8] = nizi[4];
    izdelaj(nizi, 9, "WCh5AZxMRJjZN");
    izdelaj(nizi, 10, "UrQzQtXfQkSl9pu0Jt9TY_55x5hYaP7UvXV6I_vBwmINfSVuur0sdGxFnuFskLMo9TfhGoL9L5D");
    izdelaj(nizi, 11, "uOOxc7E18v3h_Q5utq1xrUWYnqj42XAu4yGPaFy29BUzbVRF0ST4IZFaARUtZO5CCxyoI2Fh_sdL7826a3qX1KK07Q66H8D");
    nizi[12] = nizi[0];
    izdelaj(nizi, 13, "pA2A_n2lHk_TXd2BaC5aaXg0vAPeV0esRLS");
    izdelaj(nizi, 14, "UrMC_mXWuu95UqCDphRa5hivKES55JU5eLXJ9wuW2AuLHow_ZEwh48EViUVXQNbM0xV27ny");
    izdelaj(nizi, 15, "BFaGmzXPaF_K6ZjPaOZvMqspYKqrdh2sH23ITXJ7V7bEpZZNoGhAk6SJD");
    izdelaj(nizi, 16, "EyUagdrJa1wXxWWkLf0vQImhckwNTyvc_KZr4mKrY636qPNM3mIX1dlH_cd6sD92wjoI5ztg9C1KgM1VKwaBGiOObgrxw0");
    izdelaj(nizi, 17, "MpPc8NhxYjIyB4mCmrLlQNQGpFBXEFpYv7ZpGurvJogaI9pYa");
    izdelaj(nizi, 18, "wHAGfLq");
    izdelaj(nizi, 19, "rmALhcRNPX6xtJsbCWDYIAlvJWzBUjcLema9cc9Z4DjPzpLPsCFcHKhAucaGB30Ivj");
    izdelaj(nizi, 20, "XKWhNBvgGZMNuebivCY9SVUkO3t8E3UgLyj6IL7VFv9lMaTHgeVYbjAs9gNJ8d43DDapizn9W1IOA");
    izdelaj(nizi, 21, "ngUB5B4evKoMVBU8zQMZ5cSrEG5d1hCGlNxGHsAirfbMXIhQf_rMWTDSQOQ1Vj5g6j6BiwoaLIynAepi1YFPIlAN");
    izdelaj(nizi, 22, "bCf_ZnVUAf7BoVjtVTouhkGbvZN3BzddI4Nj8FHEfp5UQqwxjzQh9b");
    izdelaj(nizi, 23, "FFynvUhl2DLZzYCpkpXJgbBpGmYwSMoE");
    izdelaj(nizi, 24, "wWPGIAcMpufoXtQqDS2dJDSkzU");
    izdelaj(nizi, 25, "8CwZUlbOGSWSCs");
    nizi[26] = nizi[7];
    izdelaj(nizi, 27, "S0wekXu5zpUCnn9X6ID13crNYCG94HXTN0YnPOp1gjhCLNWs6zMWtEyITPYgZGYC91");
    izdelaj(nizi, 28, "x5y6a6ov3QgC9hv5xjFx8IVpRF5rX_dukAIxcjZ6");
    izdelaj(nizi, 29, "QHv0o1Vv6qqvoGHkm4dffyiKCmfFcEJuofSdR1z_Jg0USsb5fwRTuV2h5ggdZZOCHlC");
    nizi[30] = nizi[20];
    izdelaj(nizi, 31, "11XQR5TSZvYCEF0Ofi4h_X8S56UnaO0Fi0AVNKg13Wp");
    nizi[32] = nizi[21];
    izdelaj(nizi, 33, "vryJkzeZ8tJydue_myk1cRUrIQaNyf7vdVJ5hJ2ug2vU9U7kW6Nvac2TZ9m");
    izdelaj(nizi, 34, "gz0XENLmXN0g4NQwjHI4Sq1WQ");
    izdelaj(nizi, 35, "MnDMZAuXwvWOgLLuqBbf6eNJgVx24Y1_VFTgZBieg6V7luDO05dr3wV7uCebqijhkD0MVGJJi_");
    izdelaj(nizi, 36, "a2SfHw9sRHfCZElZckwi2hADXLC_j2wuK_NdNjjjPyblGi2gZhb57JDM2I29");
    izdelaj(nizi, 37, "Q22fG8TLjQ9gDIm1pDesx3XSBVpsnFf_ZH828sHz_0nhlW93DYqoeuvOLkZpqZ1waOxDRgz6rqA2ptwwKa8mYCkpj0db77jRH");
    izdelaj(nizi, 38, "nz6INN4t2UimdjdgXsY2fdtEbqIFtfC_35ERPYhMLue");
    izdelaj(nizi, 39, "t85mOdliwqNFEIYhB40y8VlvfnmztX7XjCcXIwIqW3tz0H8BOq2AQw06VnMFAfAB2GJ4wU938JqOvkuRakPqmAoACigGEM");
    izdelaj(nizi, 40, "O2o2SduODPKFYYNqU7I2Vlh_BRpzLQKkeJsi93T37wvjvJcbDikkQKV0C10jMK_hnqufi2siUvLzJhPL9J");
    nizi[41] = nizi[16];
    nizi[42] = nizi[31];
    nizi[43] = nizi[35];
    izdelaj(nizi, 44, "16OFuv11bpEa0uc89mNnFOSQyTLGNmMpLbBLPo2rPvnYQ9os6GXzN_3Pgn");
    izdelaj(nizi, 45, "0ncrkfzlvxNXS6LiCJ7BsPhpxQJc0E3jbq4Lkhz_o3pgS");
    izdelaj(nizi, 46, "cecohNVlkx3ST55nSxLuOQ_p1");
    izdelaj(nizi, 47, "7h9bBagwFkpRMe9cYNcFLcElR");
    nizi[48] = nizi[42];
    izdelaj(nizi, 49, "EUHwlVeKq");
    izdelaj(nizi, 50, "ylgcGrdiaZtLSR");
    nizi[51] = nizi[50];
    izdelaj(nizi, 52, "z8dLN2ySMoEm7aRyOAgVbpW7r9DZBvrp19qLfaoX09HgU_sMlKxBIQY1nyYMJIPsgVTx07");
    izdelaj(nizi, 53, "qiXKSi9XXI68Jj42PvZN83DEUuOELC6UKtPn7K_J4mmvYYoZkjA6qJ8h66LINYakmTrifrZvWy6ABrFytjBE0jlcAhc");
    izdelaj(nizi, 54, "fyK5R9QTxeWTfgG0XXLPcqASaw");
    izdelaj(nizi, 55, "Sm8xkp5tEsarBmOtel7wABIV5nZmAl_MPorh3");
    izdelaj(nizi, 56, "fSLgQCYbBIgo2k9xmcrj61SbWQYivmyxHme8xecry");
    izdelaj(nizi, 57, "efFaExt9SbdL3KocZDm_UJnpAi5dnm_vkGY_iBy");
    izdelaj(nizi, 58, "2ZlBOOFSFtvFjtOzAZhXP6Qw19kObIycqQcbrJgntPt6BQsFArzeFKbBHaWIK55h");
    izdelaj(nizi, 59, "gZUr7N3rumPS6inhsXHvPrBxHMlGYDo1Bnc6ziQoz2Pg4DUldjJQWwrB");
    izdelaj(nizi, 60, "vprGk6IIVYpsKngO0oxmyEsTXDdV_22djNAH29zOmZ6Oqb7vWJA8UHc93Ko5f5gwmI");
    izdelaj(nizi, 61, "wajdE_wGm29P7xtGBgSgMXZk8kkCx4dbcl2rcPeJ4Z5U9iTuGSUrD3yT0rXMwrVrEMG0tT8j");
    izdelaj(nizi, 62, "oc1Isqhpg6hwjzjdpmkSXAf5SjAUMUw_5wdGgyktllhHrquzCO5VgBSum");
    nizi[63] = nizi[27];
    nizi[64] = nizi[13];
    izdelaj(nizi, 65, "adtLpwSTbISbEFx7QcJMVBp3uZoY_6bRVV0PM");
    nizi[66] = nizi[55];
    izdelaj(nizi, 67, "524LCX10cRcWLnEXkQcI20xr2iIwIE5FcqLNAbAf13WsZdLJRqfKUW4DyIBf");
    izdelaj(nizi, 68, "jwVa2x39LAH35Bj");
    izdelaj(nizi, 69, "ZGqxiGP37lCNEz_3Qoj8FLTAEk42GDFBPaDLOj6gHbqcooUgcm65IsDXR3sEI");
    izdelaj(nizi, 70, "xQIz3");
    izdelaj(nizi, 71, "kQRtjbxDYLzmRE9Ue_Q3mRJmHNVBuvCGXOwerrn");
    izdelaj(nizi, 72, "HGXQ4FYlgM6lRhcSINM79OXWy1G8pu6wpWldTrr1tTRiSFt0cBA53YgcBrHbZgroIF6Xk39h7YHoE88UirZBLVoo69QuaVLHtDH0");
    izdelaj(nizi, 73, "VdTqA_2ZhG8U1xL0eNxGOZv");
    izdelaj(nizi, 74, "reZnNuWSZ6ASusSDqVq5FwZQ747vIaljN7z6e_Iu2QdwYdPtr94R5L9FJHpHI30lqwO_IprUV1");
    izdelaj(nizi, 75, "OPi8xzIOvCb7Ug_F3NSoOBruzwQv8A7Dz11QeLLtG_6sPPt7LkFoy2gRjI_q20gPR67cPG35nKPJ");
    izdelaj(nizi, 76, "waqiR");
    izdelaj(nizi, 77, "IFNc9xlrjAyMRUA4PFA0Hx2oZH0nXlcthjhkvK_zZV2b1YhgaQRNr6328RiSXcTcjYpaVnG6Az_qFfJnSdpmdGICrXA");
    izdelaj(nizi, 78, "meMU4HwkTUcNQUQQQFlNT5tTPKugmLjUTj9Q_fYyoNsbMMM7Z3aU_ZUziCOdm2g2RtoIbBgHGehYAl");
    nizi[79] = nizi[56];
    izdelaj(nizi, 80, "SeekFme72S4dctJ8bwGGhovDmK942L9FL6j9");
    izdelaj(nizi, 81, "mpTHsd5Dw3sJ1ijJfyOEggcVlMKGS1z7cw0cqmv1HxdzfLrx15ET8u7N");
    nizi[82] = nizi[7];
    izdelaj(nizi, 83, "aI");
    nizi[84] = nizi[82];
    izdelaj(nizi, 85, "MCopbsMeWrCB1Zv6x9gAkssQkybBue5zCYEtb3B69_p5lHG92");
    izdelaj(nizi, 86, "HuYT0ESmLqoXRDm1yCbJt9PzeAZz5e9HWJ_i9fJQjIXxkBGQoI_ruUXmwgW09OqlnltQhhG2w");
    izdelaj(nizi, 87, "TQLeDMn18JZPIdirPohfwJ2uSVNBaAEkJMISVVX3b1ecYiH_2u8aKhD");
    nizi[88] = nizi[29];
    izdelaj(nizi, 89, "EOkdsw06_ehhBdHmVPrfLNf23mzYE0Y8zRzias4LWiNh56QxlX5nAePhhJsl1jkPDmUP4ZJaDu9GvJa");
    izdelaj(nizi, 90, "auZLz3Paksq4WZ5W0i6UA6GlUXE3hICsW");
    izdelaj(nizi, 91, "4Oakc3n22O6NmSZQoEjlDxGHoinOfkXoGtPCWKQCtdjfy9e2U1FhdhO34Avg8M_FDg8HlSqsb7JT4bnxwP02CifddCk7i");
    izdelaj(nizi, 92, "hiiNUZTjs3ywNyw");
    nizi[93] = nizi[34];
    izdelaj(nizi, 94, "H5SsfRtaVNcNbtsMCh9VulaqEFqoLxY2lzHJ8pTdIBB4EYaivP");
    izdelaj(nizi, 95, "p4Se9V7oesyu7M");
    izdelaj(nizi, 96, "aw0lfBgwTfEHM");
    izdelaj(nizi, 97, "6cKz1Osg6UXgyYdZQ5Hfx3BlTtYxSMdFW9ALNaYj4mK8dogzufdxo06zytI");
    izdelaj(nizi, 98, "SjozmbYipIk6rkjgAx45_YGahyhlQwjSbhfqvPRikRq4iIG7OFG5xNGEb4gxBMzNi1rW5");
    izdelaj(nizi, 99, "duQO2UjCO6Wb9i_PCllQZ1ruhVqf35kVW168TCDK04l9kf52adoFr3FFB9luXJ4of7el8McLFskae4v6j0D39GIFODgN");
    izdelaj(nizi, 100, "sI8YXue58YlYXaPr_XZY_KiOWVLYDbejJQU0YbfggX3LP6gOFRXTZHQFpTyE");
    nizi[101] = nizi[84];
    izdelaj(nizi, 102, "Ixb3Vds");
    izdelaj(nizi, 103, "rj8G_Jua76bpYc4sqIYSNLqziv7eVt5UxTZzGpO39");
    izdelaj(nizi, 104, "a2vDbi9Vu5k0rnJ8fq2R7PzXb39e9wV9GE_tMZEgNKxY");
    izdelaj(nizi, 105, "fDT");
    izdelaj(nizi, 106, "cfoJF6js2s3lBA6VzRltv");
    izdelaj(nizi, 107, "m99dHENoRVxgULnrQKNOvn04kE7J4VTBAA2Mo4mpgk5NVgU1S81l3j2mlbEABa4sO");
    izdelaj(nizi, 108, "9SCP9pbbRZK2PnA9P_wJFmbGSC9mU4v4pwqX6QxNSrZh_9n");
    izdelaj(nizi, 109, "F6Wrn1C5022n1Ock8mMG4i8eKfygLVsdj4ghiLe7wV8Wb7");
    izdelaj(nizi, 110, "3CwEos12fqLyIKZ9HU97XI4KRaNtjn5RzxF6ey0PfFFO49ma4H_DFhSz7AmMNtUmEe1lA");
    nizi[111] = nizi[98];
    izdelaj(nizi, 112, "rqH7RMjbH0AOve5sD1lQoq0HKOe9S6Jgf6JbvpUt0xlHfMXXwmvjRiZWAsGAnKsTGfTt7qgqAbfw");
    izdelaj(nizi, 113, "m1hkAcoMgWS3zpYyPETSVXrUkegPViBU0H");
    nizi[114] = nizi[33];
    izdelaj(nizi, 115, "vqZJ3mVBwOoUidYAUkagtaVy00Vz5_1uPRDpVD7Nt2OP_nuO67cgJz0muE0w6QKbMLcEdoxDYYhqFAVYRH");
    nizi[116] = nizi[109];
    izdelaj(nizi, 117, "FX2vaF96fmfV24sWoRF4rwiw9VjtUdDV3qRFOSkX2c8gfDLfH2jI0");
    nizi[118] = nizi[42];
    izdelaj(nizi, 119, "dn");
    izdelaj(nizi, 120, "02Syrap1PTRBQiUYjyTk_pfYvGhMr_QKmJb8zqpOY4hW8sgq8NM05pUqqgWnK3g63n56CE5EP");
    izdelaj(nizi, 121, "0RinPEwKTv3OI");
    izdelaj(nizi, 122, "i9MusDoxOhUNHxogCw_QfVBtWpncyJXnLBNXUTriwNCzD0");
    izdelaj(nizi, 123, "03tAjH2Gz_7Ktqe");
    izdelaj(nizi, 124, "KUpJOJpZCT0vwoVoghTJoF7RgcsVLgHHOqsEE17XDXOHaWpUxcBvoiN1c7xpRc");
    nizi[125] = nizi[117];
    izdelaj(nizi, 126, "EJK6rQCLPFAdEtOsq3Nbm");
    izdelaj(nizi, 127, "pwuR9o2pqUTFAj2TK2A_dPIdTvfH8V_Nz");
    izdelaj(nizi, 128, "s31pwSHgG4A_ZbUrff_EUT7fbCoerGPdvcYDVs6Xevgkc6KowC0e7ZKI5IB702MuKOESJ");
    izdelaj(nizi, 129, "d_l0gsWS5kUodefEQHoI_cpu7qvxOthHAmzVx1nVO");
    izdelaj(nizi, 130, "h2ZI5NgsbpCIIYyTz7zvHslSmXmuIOlwtCtzSpFgYikL9uQlmby9y6QlPtKEszuDcW2_LCj6Fd49CwwQATj0o4sSOVma76aMqD_");
    izdelaj(nizi, 131, "jiXc1Pa5l");
    izdelaj(nizi, 132, "upX_suDOoLY5HVtlmAO8q5OIUzBHdPG6W12FO6OhAYj7UJbLeUZu6ZC");
    izdelaj(nizi, 133, "0URTsw0BYqyHCAHj4TSe97k30J");
    izdelaj(nizi, 134, "0EuIp0GV5mJDWZ5Zs7jzKMGZmubo87TofGPaKCPrvIcOQuMoDmxj3vsdGhtOwCLh59F");
    izdelaj(nizi, 135, "RGQff_ISgoR9ZPkd5q6jT6bR2_gLkYU");
    izdelaj(nizi, 136, "yQU_2n_1JH_HWy69VKFC0j1GTgeXrf3zAwqAaGeTJVUx5apNnMeRWRPFDhURJ");
    izdelaj(nizi, 137, "ZE73hCne5xOcLWaEYFJdoKhcKRdfm9ZNSBuNhm7XS45I4GNreKpy_");
    izdelaj(nizi, 138, "01hdYx_8yFzfyBuPI");
    izdelaj(nizi, 139, "PZbneZUsvQ9dDrzU1sZxem_AiaziF8h4BZM1pJ0L5lZjZOFa5n29wCOr9lp1swFaA1EAHcRelGLNPyWzu");
    izdelaj(nizi, 140, "zgD1gQz7wgVZZqBPEe2oU4c3UT7qDW69RVSQ25QkC5Ny9Q2JO2svDeq4oZFauj0FtA5bA3BBlnTxEJUxJfG4YNBeizsh2Ui");
    izdelaj(nizi, 141, "3E__8ddkph2JKR9t87su9rc");
    izdelaj(nizi, 142, "6yXRvv4bgiaYhYgy0");
    nizi[143] = nizi[0];
    izdelaj(nizi, 144, "labidKkkookj4R");
    izdelaj(nizi, 145, "2aQOEHs");
    izdelaj(nizi, 146, "X9we1uosvowv6WS57K");
    izdelaj(nizi, 147, "iqh3SfvTSjuLoY69msjz_GkU0E7");
    nizi[148] = nizi[111];
    nizi[149] = nizi[137];
    nizi[150] = nizi[76];
    izdelaj(nizi, 151, "mdDRRUI");
    izdelaj(nizi, 152, "SSr5f4SQ8");
    izdelaj(nizi, 153, "BtFjwxOYTy7jrhgePQvdbtoCPbXLyo3aGZs9PzaiqtZvvhghJlzrGyYHoKbJAPzvN1M9MS5rrmYdLzO9zM");
    izdelaj(nizi, 154, "xrBs2X5SAb88EdTw8D8rN7pzYCbND6cdcpXuUbdRw3mK8XCyXDbkZpgvWnj7LDGv");
    izdelaj(nizi, 155, "u0qAm4NtHonXBSNIxvxwsUV51_8ytlNlzZiXYVlN8qlp");
    izdelaj(nizi, 156, "gOsoN7kAsFJDxsiXJr1bvJYS1fd7ZEcixreUA3QGDRNZApBXHEvvR9NN7lJn2XhFy62e1yQXTcmOW_w9lr");
    izdelaj(nizi, 157, "Txb");
    nizi[158] = nizi[108];
    nizi[159] = nizi[96];
    izdelaj(nizi, 160, "v3271uyv7v4w6ZCmFoM8aIN_h8xDDK6P9zfrVWcJSsRBiZtVIyqlP");
    izdelaj(nizi, 161, "iMiqrxPJDCo3Yj0wvAG0BPHpdx2VOlDWYSzTRIIIpjNmNXnahP679izSR0SnxQ2w9xh1NLDjxizRZFtHOicSkLrmt");
    izdelaj(nizi, 162, "txVG");
    nizi[163] = nizi[149];
    izdelaj(nizi, 164, "YIuf6AlGTdrQ23gTb1FPp0gP_7WXbuoeWxFHw_4xU_lMKlsS75bT35dm");
    nizi[165] = nizi[16];
    izdelaj(nizi, 166, "rMSyboPmskfCMmSuI6pceTi03OUloiR0KmPve0YR3164qXosy3XJT4FVpfiRtHo157Z83Dcj8E3z9fpi");
    izdelaj(nizi, 167, "Sdabz6OUoz3TAa");
    izdelaj(nizi, 168, "EIEX");
    nizi[169] = nizi[165];
    izdelaj(nizi, 170, "jLEmGUtGI2w_qO7GNjRS");
    nizi[171] = nizi[126];
    izdelaj(nizi, 172, "XWgbRt_03s3cVpnpaKw2RCy5Ai5kgwoi9ZBAQzzTQC4FWwgrXpVFS045Hl_wAbLHFi9oBegZYJ7O");
    izdelaj(nizi, 173, "9x5jbijKMlAr5nmzgZNeiBs9");
    nizi[174] = nizi[108];
    nizi[175] = nizi[2];
    izdelaj(nizi, 176, "xT_d5JOy_b_Vg9ViJneNnwAxSORZ7j2tTN8G3E5f0aE8BiLBCMm");
    izdelaj(nizi, 177, "ua8GjXRvz7xNCTh_wKGHOztWgQ4KmmmogoDbNG");
    izdelaj(nizi, 178, "XwvX2qZmq2lzA3ie2yMsrtx9_F");
    izdelaj(nizi, 179, "lKYDeHWKEY9rulrudPa5Y6yMF0VoPRJ3RxJ56dqf24zmYG_JpCBWzh5CMKJCo3Ltvgvhg");
    izdelaj(nizi, 180, "Z0V6c92P6DAJ1UApoXdebR");
    izdelaj(nizi, 181, "Apvn5qUrFUN9q3wbE5dRBmy2iquBdxfa9p_9NXurEcz1gL");
    nizi[182] = nizi[43];
    izdelaj(nizi, 183, "SzxMm_mFkCZtT0vduZ85DfxuOuhPftsCdpqiORuHXHmmwfwd60o");
    nizi[184] = nizi[50];
    nizi[185] = nizi[145];
    izdelaj(nizi, 186, "BOnJ68EdpAZnOvzRvTTG6SuCEXEdfT3n7_3LTuuFoooH5C");
    izdelaj(nizi, 187, "muWm7BZIikFgrAzrWDaq");
    izdelaj(nizi, 188, "pg_IFvnxQ8JEtH5n4PZXRfAudizjy2PFzkjKwx7gftwRP7wNzxWy07Hs64LswrSGehFdwbeRABTR");
    izdelaj(nizi, 189, "7uGNv");
    izdelaj(nizi, 190, "gbGRURaXTUcjYv_rtmqvZeizlLOHOmsy_Ep5l2TpIQDZe7Su_c0DZ1reYh04gOjQa1eu0hxzFQ_T8Fuz4lNiQsBlSrRzMm7K");
    izdelaj(nizi, 191, "TEmJiAkk4rshKLdSCPVD_zNsGxCy3a9CC5y");
    izdelaj(nizi, 192, "ibXUggq2rScYtkqFEHAlvyKPVhlC66sBVxtYBEg5LdmlMm7vis7s1x7FGiHwP5AsGmbF4OdgTFEC2");
    izdelaj(nizi, 193, "676muhg");
    izdelaj(nizi, 194, "3IpYgg9O4JrQr");
    nizi[195] = nizi[146];
    izdelaj(nizi, 196, "LEqRECQViwTo8YdInxWUomqfxP9xJ_9j5Jg82sAACpFTiex1Jo2uKlh4ee");
    izdelaj(nizi, 197, "6GQjZq2pA7eORsvt0d3h1UtbGMATh9E0yy");
    izdelaj(nizi, 198, "voF5QB1hNFdxo_ObwpMO_3iGWSZtJC6ySO8Ct9FJ6s0J8PxY6dvyr8RPJpkKzzSl7SFifQLTJPEujwMOhHxnj6");
    izdelaj(nizi, 199, "u4aBfkK8FPtKbhMHhmFJ1RzqdFXlNB4XuWbPNYEkMJhlaeUhawiDSkLbUy7mA3_seClr4Xmfet40BdfbBS");
    izdelaj(nizi, 200, "X57CDyzRKOIIWVgQsq6JCIcEpRk6wX_0jUA7Xe9mqEt4ne3ZiMOR8SVOh");
    izdelaj(nizi, 201, "ECisRxeu1iXhPBnfBNE7Z9mmCWc3WiJpyuW5fMEJqfxnt2EPAo1vtKSswYMlR");
    izdelaj(nizi, 202, "YsqK38dwyzb5aAfGVv39mVCrd58PTRdNNWd1csymOiW7CDaf");
    nizi[203] = nizi[85];
    nizi[204] = nizi[88];
    izdelaj(nizi, 205, "J1MegatJYUHyoSFPoT4uyX3Wwk");
    nizi[206] = nizi[24];
    nizi[207] = nizi[154];
    izdelaj(nizi, 208, "xS22kJzoUfjFBv");
    izdelaj(nizi, 209, "xajKHEkJpTjqAYimyWpmGeU");
    izdelaj(nizi, 210, "wNOMMaAMgZhM6K4jqPE_7WHZd6PqC7i1");
    izdelaj(nizi, 211, "Nmmpg7zKfxb7MvNgdXhmbOWyhO");
    izdelaj(nizi, 212, "YzHXSLh_H2");
    izdelaj(nizi, 213, "7cz4aC5D2GCobA9xagqMi4K3ypkJnq88VIhKj");
    izdelaj(nizi, 214, "wKQ_zz6vxgdSnZMIZi8H05p_JTcE03fa5uf");
    izdelaj(nizi, 215, "z5Uw0U4LMLydUnvpLWktpzRcfPro59kI6wJiH4FuRdRj0W_9bMeKmw8viXj03Fxapzwf");
    izdelaj(nizi, 216, "R8tpwpNRy2gBiZ3l6XGRoih8AXPMIo_KD9TEls2A4YNI0thQV4gpPVRnUkD_sL0MceKulpjctMPdWk5EcL1Q");
    izdelaj(nizi, 217, "dGIf8MZyhT90e4lRRzCyZqcLAqv4zl2RQL1ZRt");
    izdelaj(nizi, 218, "CJjXt1pAFxhG4wGsSWMdqE8TH");
    izdelaj(nizi, 219, "gKHslJE");
    izdelaj(nizi, 220, "nYG1wPWcSBJRKylLQYBz_i8bN1p");
    izdelaj(nizi, 221, "V9fshfMhnfzv6TpuHPMmGCo8PLBNwsEnVnxvLxfMveSIhmYW7_iWAmmPOk4F3");
    izdelaj(nizi, 222, "pXH3dWVgrpKnAYrXUNlrC9h1JG_YMIt28UjjA9zPhcOPpVOtuPRmBejYaPoZMGZZWR44Tua1xTs6lP");
    izdelaj(nizi, 223, "6bh8sbtRuLjhT0rc6s86DjHTTOKsohbyexfXsYbYAOaZA0aavY");
    nizi[224] = nizi[0];
    nizi[225] = nizi[29];
    izdelaj(nizi, 226, "j1mhP2Ynz2X1");
    nizi[227] = nizi[10];
    izdelaj(nizi, 228, "HzLhkgIdQlPJxqQGIJ1fNKFEVEs2oCi1as4DR63faY42");
    izdelaj(nizi, 229, "zVeyp3rgwP0j73Ike6hfLzYIRy0u_r74PlYnh7c6");
    izdelaj(nizi, 230, "es2WaF2aiHr5WNQrIM8obutp_YTQp2Ucyjt6kmfZUfCAdIfcUp0jxNafzrSums3tkJnoQEniMBI4yvg8S");
    izdelaj(nizi, 231, "IUndLBsIbGuNA2oR5_phfZNWUgLNfIn4SUSD3N1NrlFz2c8QNv7qz6i_Ji9PxEutKgY0mGArTHMdMcY5dA045WnFEdt3tUA7PX6");
    izdelaj(nizi, 232, "BoPYFa4KPetoQBjujO_OMYuT74rXFNfnMuCi7WDwwrONRWA");
    izdelaj(nizi, 233, "IQ1xwSDyU9FNKBGtgke1y3yM");
    izdelaj(nizi, 234, "K29ilzZ2UAP_wq6kRZu5gnFoS7GebpDr7y9Rx2kcCpqmrmMvjqyGmgsNqurbqymB5c0");
    izdelaj(nizi, 235, "wpurhOwqJ");
    izdelaj(nizi, 236, "rJ3oPVNrlt2wolfcwmNkVcTZ9Ezi7KC");
    nizi[237] = nizi[19];
    izdelaj(nizi, 238, "VjYV");
    nizi[239] = nizi[234];
    izdelaj(nizi, 240, "P3rpKca5AD4sMbuK2qpT5ClGxzaEPEBHUAGUIrtmFu6DKxyvcgAEGb_dILYWJwhE9VlwZP75j_oaWco7NQKh");
    izdelaj(nizi, 241, "G61XVvqT53oSJwrzcr7pSzclSc0hk1VDaKVL8FFL");
    izdelaj(nizi, 242, "_jOQoHMW0bs5ziJqBSZ2YRv8ZtV4hW4Ot3x0j_lgFLr3McklsQFKcyyDCmOEKiOyP3S");
    izdelaj(nizi, 243, "OJtM_ebtMFHuK7a8Y057Nb2hgICWQ8s_daD_");
    izdelaj(nizi, 244, "8aoHGgbibVCU");
    nizi[245] = nizi[209];
    izdelaj(nizi, 246, "e6A3J2jej2ATsEzYdHI0XYYASzDqXSgNs0mpRh_yvlRwLjhTLNnZuD6WiM49YeGgg6fAU4CZ4AATY");
    izdelaj(nizi, 247, "8DpY3xCCJU");
    izdelaj(nizi, 248, "XUNqWONs71JJdDjbt_3r2RCLSwzNETCc2QZSI8eMXg1ph");
    izdelaj(nizi, 249, "Gkj0SQNsp6CstED8Nu4KlOVeECCwJHDDO47AT3CUD7frKYmk8prAtSW1K87Onr54ZUapOeVAMsj8dg");
    izdelaj(nizi, 250, "N34SSOsgmGw3Bfi72G1gCHQkHdqfgi3c_3CugaYWREem_qIZYzlSdJbmI9PCWrTqLeRxErrkyV");
    izdelaj(nizi, 251, "azNUYsZxxMzcv_t51VGyqigIz0sNRgE26RXZRXSrQm7rK4pMi2DbEeQjPGQH6Tiviodh9H_OvFF8t1geZC6kO_eHgym2y_");
    izdelaj(nizi, 252, "bNejHGx3KzVko41OlKVO2hInwYrM5HUXNM18xJU1Iz5UXi9mALclpSyV15DMfUUg9J2N8e");
    izdelaj(nizi, 253, "6S9bUe5XpF1to0DPpYvRCY0qpKpr3MtSkUKp");
    izdelaj(nizi, 254, "LxWst5hWw68NGcV6FS2V6EQElS8v4XKvs026gyZDDYPMjSSuBp");
    izdelaj(nizi, 255, "xqPmaaDKRRvNgMjoXcAlxMoaURiSOm2w_uMBXMgRPmXG5ioBVrrzFpQaS9_WTXF");
    izdelaj(nizi, 256, "vQqnuwtS0xFn23P2wh03ViFkcDoQvREOqn2mRoiCnVHWFyw6WnkFLZIxIYl4_cLJAUTgjzzECn8DkE2blT9m7c8jurYS");
    izdelaj(nizi, 257, "GH3g8m0jKDHoLYQhllB3c2No9G4lFthB6d_ACLWHwejfdcPugriB56EVqPq5JyFWRWUU5I98");
    izdelaj(nizi, 258, "oZ1yc2MRAF");
    izdelaj(nizi, 259, "2r8YnXpEvcw_LVPVlnmxP6GtaxuC0B2eXEjgTIBh5IOOXFVgyY69qBVXG2NmP6dhcMZlRpwtemf49ouJyBlC");
    izdelaj(nizi, 260, "81Rczb6RNYP");
    izdelaj(nizi, 261, "gFcY0SdueKF390UReCJYd6LkiR");
    izdelaj(nizi, 262, "pQ3lVjpPAhi1ujqBpqtZYCbxiCJje4I5SUcLcVu078xSh2X3xmrB");
    izdelaj(nizi, 263, "ryS");
    izdelaj(nizi, 264, "NCs");
    nizi[265] = nizi[203];
    izdelaj(nizi, 266, "KwHMVrbRHCL2oJsuW0ahQxiLZF0SknVgUrRiXUzhfehz1AVomTt4n46oH03izvAZpBtMwdJTlyyjj6Ypj4xqAGZnmFU");
    izdelaj(nizi, 267, "JkUdLJSf3pJCa3dysryKL6xE0jKGVUvj_z7L4048GEZAWkBn4S9RZLDOXxh5Anlue3eyJprtO9FVRtrcCeQI");
    izdelaj(nizi, 268, "mNW7FlIXj7sfYV_");
    nizi[269] = nizi[117];
    izdelaj(nizi, 270, "Ja9rHuOaFwBblpkAW6Y4k9Dp0WfdMWvgPTB_n3NfVY0QCKl_tYaVxXg0Jx6mbSt2wVsR41");
    izdelaj(nizi, 271, "1TKmK3gd7D2o");
    izdelaj(nizi, 272, "T6Hq8ku4cQU_jcJJMhu6g6GCdV31bFu7HLyzj0_Pz_w4IG06l");
    izdelaj(nizi, 273, "jUqlZabKGeVTzlazgi__w7ZOKlDfHafMHH08sr98hGqzjjRK1HF6w");
    izdelaj(nizi, 274, "B91SxrvtbCPbCy2_sqDHs0UJjDEQo5Xt5VStiwe1dApGjyyKg97DKo3InXyv2STawUfD5wpQWfvb");
    nizi[275] = nizi[28];
    izdelaj(nizi, 276, "wivunmQ8mHO3RHvQ_qpd38FJsNT6rfnvcvNRSuQ1a_ZaXF7Gk7xskXzyew84dRt6DXl30T");
    nizi[277] = nizi[66];
    nizi[278] = nizi[94];
    izdelaj(nizi, 279, "aV17CwWG41TEsqGFLxTLNPT2D4653kNXva9Us5GzezmKgA1DqWv5B3wXww");
    nizi[280] = nizi[85];
    izdelaj(nizi, 281, "jQX0UjTrEh641T");
    nizi[282] = nizi[67];
    izdelaj(nizi, 283, "nGx5HKsu6tO7pxEmccZfoOZGL53KV3orwldcgC3x3w_GBlpsZfHiW34B32rn");
    nizi[284] = nizi[268];
    izdelaj(nizi, 285, "bKIJWyQN6EwcxNgP9LYpevYe_A4V4mLgOpifCT5NBZc1oFPV1n4xE4vfBzoizzuNWknuanfmPvEn");
    izdelaj(nizi, 286, "BFG6ZuAyDEFeFdARjvFk3VBU40wPXts8VMFkiMb");
    izdelaj(nizi, 287, "nGwkjgsmUyxHZ2bxNRBM_A0Wh3hPTLa37uVO4xDFZjgO");
    izdelaj(nizi, 288, "N_mzCKwoWO19RkyckjBEI6gW80HYrjuJPfsiw7aHH5tsQBZcwMu59RN4wkCcJ");
    izdelaj(nizi, 289, "aui6S3leLFoCwOP");
    izdelaj(nizi, 290, "1WSASAeedmqGwov5cMtS5g7FeN7Zsf0h9");
    izdelaj(nizi, 291, "1irYBPOATk7wKGszlJMnSANp8");
    izdelaj(nizi, 292, "A59JKD2_L22I6BIQ2_4Ze0NkR2yCCcE48T06qlQE8W1BeMaZNHFZ_a5TtypCQE55p8OCMT");
    izdelaj(nizi, 293, "91QE5845aCH18LslstFscxPkHOSpVOZRz8y3gkBf2BWNYLNIemB_yUARb1oD");
    izdelaj(nizi, 294, "0i57NksdHPYcXDzIGdnWC7uAZMucRtjp1BJg9gCvgvA9PeHTMyWmK_SZBM9");
    izdelaj(nizi, 295, "uhg1EV0_2FBoqUug28bvAMErEZaLLfjVdQcUPiHnpL9mUaMZB2_o8z8kpiZMK3YaEqMg");
    izdelaj(nizi, 296, "Dpwpyk0Eb62tRM");
    izdelaj(nizi, 297, "ctMdYL2nzC8_QT2aIDDJOtuF9fcpBLAuRKnzTQKQfgMSks4yn0MGAwrkLxCB43ARphSTrpYnuhdWO3AUBFIE3OA");
    izdelaj(nizi, 298, "QtzLusMNR2r");
    izdelaj(nizi, 299, "Ao7r7WEsMVAwZA_1MY0yai4bwb82WxFIbDVDirBNQMYQJnBXby23HChdZexGgxlQItpuXZWnqJXWQ7mLEYGS");
    nizi[300] = nizi[175];
    izdelaj(nizi, 301, "9fZOHRQC7vl28VSFrd5wQbovZpgFCTmZSnIphKfrsSRh");
    izdelaj(nizi, 302, "D9ALtGsYsfSJcp2sKx5uYJEFS9OThvRI3le01umU2A2FftPCCVcOeSxpvzeXprrHvPstaJmz_ui1Oz6DTJWdd");
    izdelaj(nizi, 303, "75wuIb32BwozANMPMzCluivSabjP0p7hU445");
    izdelaj(nizi, 304, "PuuiP54_pUE1Ff11Om2ZM2R8uY3nGbhH_tXKGXa5X6ToIxFUNEuZniq69JabQ02owMKodklNT");
    izdelaj(nizi, 305, "wN9eHR158qSjQGFSl7r3TUgq5gnB5rAVvZwzRstK6ar0OS4XnLL7MiASs3ZO_TVQ8qyk8PK5HW3BmHh79upWcoPF");
    izdelaj(nizi, 306, "kw6");
    nizi[307] = nizi[282];
    izdelaj(nizi, 308, "BmvahDH3");
    izdelaj(nizi, 309, "yxWCBl2TIOv9IAilS2GMTs6OAVHbCVc_vIMDcOK37etbm8fVakEjtVKezlnja55Z854XHg");
    izdelaj(nizi, 310, "g6Sddz");
    izdelaj(nizi, 311, "e4zp84VDs63OSsHpDw3OFoY8anUl8ztnhRyV2FK7n14XuDPTwb2y1mbTbbiGZsFHgBgwdk");
    izdelaj(nizi, 312, "1DXkVBlxJf9RTVZOkrXVd7j_lMlYFQYT9WJQD_WtTAKVsnYiCJmY9abSCcq");
    nizi[313] = nizi[61];
    izdelaj(nizi, 314, "SNQUMT4kCkwGobyl8");
    izdelaj(nizi, 315, "GMnRLzC9xP4bp");
    izdelaj(nizi, 316, "ks5cT9MR6FQBte");
    izdelaj(nizi, 317, "OGtv2e_E6j8kCPxt");
    izdelaj(nizi, 318, "LTcVzYJ9z1TCgrKgndXSfdgaY0IIZqj59gr4cy0oICmTEHQKyjZmOb6wRQRX8tEnTxRtQJkZPj4OOTpaJnszTUPNe");
    izdelaj(nizi, 319, "wtMWPUnusDdj");
    izdelaj(nizi, 320, "TYOUIxYM2gDEBJla44kyKB6odDUBi5QV08facTRfkuLfuYvcq2YjzG1UWcVyHVTe9iO37YXJezy5l2ySqC3WKZC");
    izdelaj(nizi, 321, "qeeW2T0leSgMnlNR6J963FZYbLsjUxhu");
    nizi[322] = nizi[69];
    izdelaj(nizi, 323, "r0eDe0oZkdNhpIYmyBXk3E6WoVMzUyuyBWlYUEV");
    izdelaj(nizi, 324, "TyzkRNNeQZrQWfHQIpCSKXlo_8MNntCJzLOrLZiXczD6e9S");
    izdelaj(nizi, 325, "ov1");
    izdelaj(nizi, 326, "PbEVNB2SpFREfiTA85FPC5kXbBxSkmJ3_hnQJHrWmTViRMz8h55QSowLeqkUznYTFzP9T0eseVl6L_Ynkv8UCY0sk");
    nizi[327] = nizi[202];
    izdelaj(nizi, 328, "O0zxhCxIkV1lY66yYnebbZyFmenbpd60IPKPLEA6lQrm1gT8LitQ7BMDQiWQdJg5vqTvKMso1");
    nizi[329] = nizi[9];
    izdelaj(nizi, 330, "lMgY9SytHx96ZHmCOhqb0pl8BYg1HkOxS040mDMMWEpocl1r6ePSPMza9Pn4vLFp6MJZif5U_80lZbIMZ");
    nizi[331] = nizi[141];
    izdelaj(nizi, 332, "OASKmyL8To9fBfv1aK");
    nizi[333] = nizi[110];
    izdelaj(nizi, 334, "Hb1CJGubXAlzvm1UI1pbppdklLC6mvW8jmJP");
    izdelaj(nizi, 335, "nkLKuaDb9_nh0_CskQiAjbTMNkAfQ5k2xtgcIvUL0uomrSIqgVq9WWJIp4Kg2EEVz6jhDHC_lACxLm0IiDVfZ_cBaKMT5Vj8hli");
    izdelaj(nizi, 336, "D7TYXek9Vh_5l0HtPpQ118i0lx3q_6yE0dDTYvHOXK00TlBq5mEvSxKdRucqDDSraFiQpBVPP6eZ9giOhUw3mN");
    izdelaj(nizi, 337, "1rf4EpMpVE2YiYQYvRrY_xEzwQFmNbJTJqCa6ttQm3z5kPVdGWH");
    izdelaj(nizi, 338, "yLMkbILsO9cBQJ2YQggMWu_a2kEgZzV6McJlRm8uq4jDvlIzwLM4Gst__");
    izdelaj(nizi, 339, "iTjLq4mPNHzbEv0e6CnMfkLxjiApyiiUXYLHjNSTuA2KLFXaXNyH");
    nizi[340] = nizi[174];
    izdelaj(nizi, 341, "i2d1_Qc5o_7onE3zotrC");
    nizi[342] = nizi[244];
    izdelaj(nizi, 343, "MOVqVU9ymHaWVUAQbkfrvxnNIZz_7icTVCDqW2E6qWKnHG45CjR60_7oWWr17hSZSWUNcmgM5QM7KQ83LPWbmEvcOGWzKaHeaUk1");
    izdelaj(nizi, 344, "vs6UjK8NyhEtHhfQelWgDFcoRFWwrzHO_uButj1C2ugJlH8OKKTyu");
    izdelaj(nizi, 345, "wabAM0xb2rYwYLyrl2KB6P1dM");
    izdelaj(nizi, 346, "aJImB_Ga9EnrR2jFwVNf6LxJcjJwOPdbnofNsfy26Nsy1ac4");
    izdelaj(nizi, 347, "URgWbGcOAKJbBLVFzmss7kJ_KSycXP");
    izdelaj(nizi, 348, "WoWHj8nvonmN3zMYmEaZ1xtaBKGoXE8Jt4JBvERsLj7zNghZldR__WRCjrsLwYIOfSzDqSinnzqCYj3o5af818kBr");
    izdelaj(nizi, 349, "Lhck_v60zFKUMJkbEPhPRdXXytrXD4Dxe_OhDeCYZLXr52mksxsmHQqOnuYDXX1dS6ZOP");
    izdelaj(nizi, 350, "RG7Vtk1arGU");
    izdelaj(nizi, 351, "MY3pTj3oKBTQL994dg22khsyy7PHWWLCi");
    nizi[352] = nizi[160];
    izdelaj(nizi, 353, "VwsArtfDDCx_1YuzQSr7Rb8nBD4hvkl_t3Grw5pMFQHhmjBpGwv_SmHyt0");
    izdelaj(nizi, 354, "9tSUneQEdlv88egbJdNept2mLw_F1CdkVCMESfpDI8ir_47Q1FNU9JQmy0RuKJAFBXvRBbNe");
    izdelaj(nizi, 355, "OQ6X9aztJlPbuT3lI9WSBg8X4jgEfYokRnEvbkpGUw_vyCRvwZsw9yurft5z1wZqpHcfLxPavoTLl7vv");
    izdelaj(nizi, 356, "n0m8tgdTQ7I08pWK1kW3iq4m1gI1ytSM5h5D8vLqIJhW4TKNl28pt6RLD0PyyarbciNz4tf4CdPnB");
    izdelaj(nizi, 357, "is6hHDuqLV72aGwuaNa1MljQmzT9tz2VH2Zm_6J8ENVcos5fp");
    nizi[358] = nizi[194];
    izdelaj(nizi, 359, "t59px_JxQ_ZuYlDbS3I0SQFsOqlQETg286Anpoamsu");
    nizi[360] = nizi[156];
    izdelaj(nizi, 361, "96eJCwTFNT2ypjk6wpIQViVVfpT_vDsfxZ9Jyz5nLLjGprQXg38Rwot_FmoXPU95dHmMzppgKgxo77r");
    izdelaj(nizi, 362, "cy4sNPyzskZ0LPZVsfLBedczpJnBJYZeXjDBNBNoPzwJ8J7gE8a6");
    nizi[363] = nizi[119];
    nizi[364] = nizi[254];
    nizi[365] = nizi[283];
    nizi[366] = nizi[341];
    izdelaj(nizi, 367, "6Wgs_NwfuRbwkpNM0jRjzNnjYURe6NIIgGZc4tl85duH58ABDzhdTzuBXKjOXBz33VTZDr07Vs");
    izdelaj(nizi, 368, "l4kRIg6GQHABaN6csDUf1VOJnzScVjEmNGE5fQQqs");
    nizi[369] = nizi[164];
    izdelaj(nizi, 370, "oCZfgbtRED8X1pcEvN77VcMDkiCFthZB0ixuDH6G");
    izdelaj(nizi, 371, "W6sj1hXILwHVwPzxBxSaPiLIFhouVlPcrLUbMWEOhVhWAf2A");
    izdelaj(nizi, 372, "r");
    nizi[373] = nizi[13];
    izdelaj(nizi, 374, "cY5CncSk9X6ES346Nw81igs9eN2smbCX_Ji01_AzOLv5iVmG1JNQtzvBT_D4lWWGvTdbzoWLy0ilz3jA4q0qSdew2hRu_");
    izdelaj(nizi, 375, "Lenvki3b0L6");
    nizi[376] = nizi[96];
    izdelaj(nizi, 377, "qoRd22LiCzSUlnGiCqM6iA3Y_BWCwWRC");
    izdelaj(nizi, 378, "9PTKlIUdJrupCbtfx4AAeLryFvMQ5f1QBQACvMOPPrvH0tCim7J");
    izdelaj(nizi, 379, "tqVmw7Eh");
    izdelaj(nizi, 380, "KNdcTrdH8n0c6hRqkXhIdkVlDHQiCUisI1QFcJa_wmBS5PKfxNaEscakgzLrnsZCm0oQXooAKXyHD3jY2gulZj4");
    izdelaj(nizi, 381, "U_D");
    izdelaj(nizi, 382, "MKT0ryFpIwbhrWaWMvZMOYRUZ004Rrmpxh2Jka");
    izdelaj(nizi, 383, "VDwpX3KOVdXuX7OX");
    izdelaj(nizi, 384, "rmP_voT66XJnXOEkulbnO10dp6GU0_h3hVaSn1Lw4LYxFsG_O");
    izdelaj(nizi, 385, "lGXMqmdIqEZv7qnfzXDdHGNSmLEt");
    izdelaj(nizi, 386, "umus4Gmed_ESf8Kdj84zQUao5LFRwZNjclRVAEHKF");
    izdelaj(nizi, 387, "MlKVCqQ0fAc");
    izdelaj(nizi, 388, "bn_FbwLqxE1nAyFix35Bz2HdzuEZSP0gAG2sRUucq1IAK06dDdjH1CFtx");
    nizi[389] = nizi[223];
    izdelaj(nizi, 390, "Cm90Pcb35l8g9m3qIrDFX7cwvbyoT61mTMbivXc7yAU7BAS9V5ieUXg26v2fFzDOtaoq0y64fzoG_jxa9Hfuuu");
    nizi[391] = nizi[79];
    izdelaj(nizi, 392, "UcUVjVhee9njrVj_U9si4fFrnqKkdbq1GWBDbn2Xx7vFBaXu9LMHASbVLaYtcPS5mcOr8WNWxJoeoHW");
    izdelaj(nizi, 393, "87MhnDdoGhPbxOpXYFua90e");
    izdelaj(nizi, 394, "Y6BjnLYnKLcqo5");
    izdelaj(nizi, 395, "lYN8ourJTsOUgPUNLdku_");
    nizi[396] = nizi[321];
    izdelaj(nizi, 397, "tSzN4OxRwPF7u0GoYQmkrU1R31IkwNdNTHeD2Lsyl90AXueNO");
    izdelaj(nizi, 398, "d4QtAWEJcHFXFwGlRmOcbuiqc8roFwt_OmIgIdQUioMsAjX");
    izdelaj(nizi, 399, "GxuNropPmFo6W7uKfezBqFfq8_kYXx9yQXbdBa2FXrve8vbG3fl53BfmKgn_hJO_GmNdebn_j9Ruo1c4Kgg");
    nizi[400] = nizi[208];
    izdelaj(nizi, 401, "ZVKdy7IMPN43uR2X1SpUXtVH5PPbapBx2RszHYHK1t5tpCoKHw");
    izdelaj(nizi, 402, "5XLdxsCIBYGiOLDSgbirpeSojAUt27Ven6h0LpoNcUZK5k8j8n4tMBYAu8");
    nizi[403] = nizi[276];
    izdelaj(nizi, 404, "M6Jb_YdB3w_vsa3pRLWu");
    izdelaj(nizi, 405, "X3ZSeP5uEULLJCnxiS77CfJ0U7tVpcHRNNdo5XyFuOimT68oqRur2bH4LQ2pvg5K");
    izdelaj(nizi, 406, "MOQVNVH6HVZlTpfrC6ReRm2CV5aGipqWRnoISG9SpoYxB_PyPE6agiPQqH5nKU8ebSkZEd5");
    izdelaj(nizi, 407, "nQZKmzJN74KwG62udFhvMk5J1Se0FvKgBXr_zW3de8jmQGTJElm3Cykt3IvV");
    izdelaj(nizi, 408, "M1z1L");
    nizi[409] = nizi[341];
    izdelaj(nizi, 410, "kyesWThyz0Rut12R6Xp6quhQ1i09O36j_5wAvZvFL6V62ax0hpFo8DKJdUzZcxURtYZVPdm");
    izdelaj(nizi, 411, "pZkgS5bmhoNC3MFHQu_VetXloXnfgsa7FKW3a7WzYrQqyZb4sVDy8okl");
    izdelaj(nizi, 412, "i");
    izdelaj(nizi, 413, "kysxHDgD9cctntdtatYlmeSHiA8k92VzBgPNtSozJ4ebwNmLi9eOdOM5ZKcdPzpEs2cPoPdUPeOub7EUj0xbG0YEBiir1cesgwA");
    nizi[414] = nizi[74];
    izdelaj(nizi, 415, "2gT");
    izdelaj(nizi, 416, "CWBhXRhSlQByD4FLppfpEZ6BHBgsWPgY0fsYwowtameq3i5J2imyZk9tu8TBa3SfxSSyIEAIXqiG1T");
    izdelaj(nizi, 417, "XSE2LixRFoLQbHRnBP8tEhnwkVRp8UgOUUmEihoXmcmn6A4oBVRV7hV7n1oZyvyldbCQzbFdqGKZgUBjz_KnnknP");
    izdelaj(nizi, 418, "UO7RTAXTpqFVULvmZThLimb9o70r4CIilDRLiij6QePQ_lA0aEbB2C");
    izdelaj(nizi, 419, "gpBtq_wViBMqzlPEe8mAkaElx729hYDS1XCAgBQ9joNSyt9fhbLLz8l988v5WEs7JSTEsbv4ptAr5EnaeLpSKci_N_9iV");
    izdelaj(nizi, 420, "4uZ6DYezaw_yGQ22svN");
    izdelaj(nizi, 421, "oGQhrThbli2WNxaIIjncWfOeiBzvBZbk2ABlDsZm9JqlRSEoa8upM_N4kQG68SqLf8onA2B3RCK");
    izdelaj(nizi, 422, "vXBW9mtI91_iAijKdGHnwn7dI");
    nizi[423] = nizi[18];
    izdelaj(nizi, 424, "RLLzgv0mmeGTRvRy3Vd");
    izdelaj(nizi, 425, "Fs3jKtozeBuf92YaG");
    izdelaj(nizi, 426, "jW1iESEp2yEMPrY2pxXnuul7S9stveGReLF");
    izdelaj(nizi, 427, "cgz6jlKp6kB7zeZltxZO8igvWqUCr4OYgti");
    izdelaj(nizi, 428, "A9Xp3VWdVBNuzRV");
    nizi[429] = nizi[322];
    nizi[430] = nizi[50];
    nizi[431] = nizi[173];
    izdelaj(nizi, 432, "RA2JSlt45_d008IWx4KxbZJBVoQm6fvXjmfSLXqEZvHS_P9csbW0XK7CjALA");
    nizi[433] = nizi[102];
    izdelaj(nizi, 434, "1syXy0gqbtBkJY_N8PDOnH6dvsN");
    izdelaj(nizi, 435, "4");
    izdelaj(nizi, 436, "7GCL0V0eXjq8U2NS3nxwl1R");
    izdelaj(nizi, 437, "1C6qXsu_sATnFKM3TIwGhW5QTzz7BX13Qn15X63YCev63AJvB4v3w1STNqhZPfUfuZDnZMH5aYQQV0rkPtwE2nf7");
    nizi[438] = nizi[206];
    izdelaj(nizi, 439, "oTvkrXyUTITjJx7ZpXPDHiu_9Y1VH1ECAF");
    izdelaj(nizi, 440, "QsKLMd9HgYDEzZRdb0vBNtpvUn4tORYGurpO");
    izdelaj(nizi, 441, "LTHGl2IK9EFBT1XqrIelm1iwg1z_BiD959QQVhNtIVVMPze1MEiFi");
    izdelaj(nizi, 442, "jynLWBk7StqP60lh6VH6yU2itpoWiZtTo8h");

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