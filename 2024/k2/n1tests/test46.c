
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {814, 862, 650, 58, 677, 299, 789, 220, 629, 787, 769, 3, 521, 419, 790, 93, 430, 8, 570, 39, 159, 385, 24, 401, 702, 221, 226, 805, 294, 839, 753, 472, 217, 407, 641, 892, 713, 976, 276, 603, 502, 636, 34, 917, 241, 476, 319, 549, 441, 471, 704, 147, 378, 558, 263, 964, 300, 574, 19, 575, 818, 891, 546, 77, 358, 317, 22, 951, 889, 366, 127, 436, 222, 908, 712, 416, 681, 937, 106, 488, 230, 723, 151, 959, 494, 561, 298, 324, 618, 423, 687, 429, 816, 206, 649, 449, 577, 904, 661, 202, 966, 6, 289, 384, 589, 660, 177, 562, 638, 731, 468, 119, 68, 764, 888, 153, 943, 893, 611, 71, 490, 961, 867, 110, 403, 227, 267, 478, 229, 586, 328, 674, 178, 467, 858, 102, 594, 168, 35, 325, 840, 643, 690, 657, 381, 84, 1, 225, 123, 137, 784, 38, 181, 457, 819, 244, 919, 806, 216, 680, 547, 634, 112, 46, 59, 744, 600, 204, 863, 380, 807, 392, 5, 188, 828, 395, 599, 664, 124, 741, 367, 142, 968, 944, 887, 970, 778, 545, 760, 31, 749, 619, 675, 306, 526, 596, 834, 782, 714, 237, 13, 302, 253, 576, 743, 705, 218, 462, 420, 850, 489, 99, 694, 234, 405, 158, 878, 844, 537, 284, 23, 567, 939, 438, 208, 165, 777, 92, 626, 911, 918, 75, 637, 724, 108, 286, 864, 727, 755, 170, 180, 485, 738, 685, 639, 541, 686, 942, 847, 716, 235, 845, 413, 342, 212, 851, 543, 249, 877, 779, 627, 154, 120, 440, 581, 140, 952, 375, 747, 768, 673, 701, 49, 128, 707, 982, 377, 160, 833, 865, 199, 752, 632, 404, 774, 592, 974, 236, 445, 335, 433, 909, 922, 307, 900, 857, 487, 848, 387, 876, 706, 86, 340, 454, 932, 304, 28, 765, 364, 182, 587, 875, 565, 519, 683, 321, 663, 659, 591, 654, 652, 327, 162, 662, 640, 277, 383, 25, 479, 809, 684, 885, 161, 832, 635, 270, 94, 595, 835, 614, 886, 853, 499, 493, 564, 349, 651, 497, 251, 720, 111, 954, 293, 689, 297, 265, 431, 452, 296, 512, 475, 829, 926, 812, 517, 145, 4, 291, 533, 963, 245, 935, 428, 953, 54, 314, 2, 593, 361, 506, 254, 688, 553, 905, 957, 240, 337, 617, 737, 453, 371, 656, 913, 883, 655, 557, 780, 0, 132, 14, 473, 231, 316, 856, 762, 256, 334, 826, 451, 164, 903, 83, 432, 668, 313, 590, 846, 746, 167, 155, 187, 754, 176, 612, 16, 282, 109, 442, 408, 336, 552, 482, 43, 669, 973, 312, 33, 608, 350, 530, 175, 156, 60, 121, 916, 183, 64, 869, 269, 728, 447, 492, 100, 977, 682, 721, 967, 360, 288, 464, 470, 563, 368, 890, 882, 559, 678, 292, 412, 980, 427, 534, 824, 144, 97, 759, 708, 193, 252, 346, 696, 802, 323, 536, 458, 855, 894, 735, 55, 243, 836, 548, 130, 455, 697, 42, 434, 186, 510, 88, 190, 62, 386, 804, 560, 823, 511, 149, 81, 264, 642, 224, 246, 945, 179, 527, 955, 213, 418, 330, 133, 379, 91, 396, 310, 461, 290, 838, 524, 15, 278, 285, 628, 906, 718, 356, 138, 27, 495, 566, 12, 975, 648, 852, 351, 362, 810, 56, 247, 620, 605, 938, 281, 901, 219, 698, 201, 96, 398, 382, 29, 103, 914, 359, 415, 266, 491, 228, 522, 339, 348, 772, 843, 341, 775, 74, 238, 390, 136, 940, 528, 580, 601, 907, 32, 544, 271, 169, 766, 45, 98, 616, 609, 763, 501, 896, 516, 242, 730, 948, 105, 509, 18, 52, 860, 69, 597, 813, 930, 308, 11, 535, 465, 531, 295, 934, 750, 101, 568, 406, 331, 466, 374, 958, 821, 417, 210, 171, 232, 915, 771, 785, 275, 259, 820, 85, 207, 799, 486, 500, 129, 971, 469, 272, 197, 872, 78, 897, 250, 439, 579, 287, 450, 393, 725, 699, 357, 933, 355, 732, 607, 174, 369, 61, 211, 456, 152, 800, 788, 978, 134, 166, 397, 742, 36, 305, 376, 710, 573, 736, 9, 7, 363, 483, 881, 647, 411, 477, 645, 679, 583, 72, 717, 146, 273, 667, 41, 622, 758, 460, 582, 842, 868, 283, 972, 437, 50, 692, 672, 192, 47, 920, 37, 722, 604, 184, 572, 793, 658, 354, 979, 837, 610, 949, 910, 854, 556, 578, 399, 280, 791, 150, 44, 82, 795, 114, 365, 389, 859, 446, 373, 981, 770, 391, 927, 51, 822, 773, 498, 841, 726, 260, 215, 115, 143, 104, 709, 353, 426, 17, 849, 76, 163, 757, 274, 255, 711, 518, 258, 898, 831, 198, 444, 830, 630, 606, 507, 320, 540, 585, 571, 463, 739, 443, 761, 481, 776, 209, 539, 700, 817, 633, 503, 303, 644, 551, 496, 87, 66, 797, 352, 309, 936, 372, 435, 301, 333, 370, 191, 923, 322, 394, 969, 117, 332, 899, 203, 257, 924, 719, 73, 555, 598, 895, 344, 670, 196, 912, 756, 691, 653, 695, 941, 122, 871, 960, 786, 185, 214, 402, 962, 53, 20, 80, 205, 884, 794, 783, 902, 505, 781, 347, 514, 866, 189, 107, 139, 515, 931, 880, 118, 801, 956, 538, 261, 715, 861, 63, 70, 671, 529, 195, 125, 459, 424, 729, 550, 811, 480, 569, 921, 542, 946, 40, 21, 703, 554, 409, 745, 504, 95, 947, 148, 532, 421, 676, 329, 965, 262, 279, 615, 631, 172, 338, 623, 194, 233, 89, 621, 827, 624, 733, 414, 508, 239, 268, 815, 157, 10, 525, 48, 30, 422, 751, 474, 131, 602, 520, 425, 870, 925, 318, 65, 388, 79, 874, 315, 400, 879, 767, 484, 792, 343, 200, 90, 796, 983, 26, 588, 666, 448, 803, 748, 223, 248, 928, 613, 693, 135, 67, 126, 929, 345, 665, 646, 410, 734, 625, 113, 311, 173, 57, 950, 141, 513, 523, 808, 873, 116, 584, 326, 825, 798};
const int PREJSNJE[] = {397, 146, 376, 11, 366, 172, 101, 681, 17, 680, 918, 610, 540, 200, 399, 529, 424, 759, 602, 58, 842, 884, 66, 220, 22, 327, 947, 537, 306, 560, 921, 189, 584, 436, 42, 138, 674, 712, 151, 19, 883, 696, 495, 432, 732, 589, 163, 710, 920, 272, 706, 745, 603, 841, 374, 488, 547, 971, 3, 164, 442, 663, 501, 867, 446, 932, 798, 959, 112, 605, 868, 119, 691, 820, 575, 231, 761, 63, 646, 934, 843, 508, 733, 411, 145, 635, 301, 797, 499, 907, 944, 522, 227, 15, 336, 890, 557, 474, 590, 211, 452, 617, 135, 561, 755, 600, 78, 855, 234, 426, 123, 350, 162, 968, 735, 753, 978, 813, 860, 111, 262, 443, 833, 148, 178, 872, 960, 70, 273, 640, 492, 925, 398, 520, 670, 958, 578, 149, 536, 856, 265, 973, 181, 754, 473, 365, 693, 51, 892, 507, 731, 82, 666, 115, 261, 419, 441, 917, 215, 20, 277, 332, 322, 762, 409, 225, 671, 418, 137, 587, 239, 627, 902, 970, 661, 440, 422, 106, 132, 514, 240, 152, 309, 445, 715, 837, 497, 420, 173, 854, 500, 808, 709, 477, 905, 871, 826, 644, 771, 280, 943, 556, 99, 816, 167, 844, 93, 636, 224, 787, 626, 664, 254, 517, 838, 752, 158, 32, 206, 554, 7, 25, 72, 953, 511, 147, 26, 125, 567, 128, 80, 401, 628, 906, 213, 250, 287, 199, 576, 914, 385, 44, 597, 489, 155, 370, 512, 548, 954, 257, 648, 348, 478, 202, 380, 765, 405, 817, 768, 633, 751, 864, 898, 54, 509, 355, 565, 126, 915, 448, 335, 586, 643, 694, 764, 632, 38, 325, 530, 899, 729, 552, 425, 703, 219, 531, 235, 651, 458, 102, 526, 367, 467, 352, 28, 614, 358, 354, 86, 5, 56, 805, 201, 793, 305, 675, 193, 293, 609, 801, 524, 969, 435, 414, 375, 936, 402, 65, 931, 46, 777, 315, 810, 482, 87, 139, 980, 321, 130, 896, 519, 620, 814, 806, 406, 289, 429, 386, 903, 569, 302, 573, 253, 942, 824, 962, 479, 851, 570, 345, 438, 544, 800, 757, 719, 658, 535, 656, 64, 563, 457, 378, 545, 682, 308, 736, 69, 180, 462, 662, 807, 390, 803, 740, 622, 267, 676, 276, 52, 521, 169, 144, 559, 326, 103, 21, 502, 298, 933, 737, 577, 743, 171, 653, 811, 175, 523, 672, 558, 728, 937, 23, 839, 124, 283, 214, 619, 33, 428, 887, 965, 686, 468, 252, 912, 564, 75, 625, 518, 13, 208, 894, 922, 89, 874, 928, 758, 470, 372, 91, 16, 356, 412, 290, 496, 804, 71, 705, 223, 649, 263, 48, 427, 783, 772, 288, 739, 450, 950, 95, 652, 408, 357, 389, 303, 493, 665, 153, 484, 873, 699, 525, 207, 781, 459, 612, 621, 133, 110, 642, 460, 49, 31, 400, 924, 360, 45, 687, 127, 328, 878, 785, 431, 683, 940, 241, 638, 296, 79, 210, 120, 566, 451, 343, 84, 538, 796, 347, 748, 342, 639, 594, 40, 792, 889, 849, 379, 776, 913, 601, 498, 506, 359, 974, 852, 857, 596, 364, 767, 313, 927, 12, 568, 975, 528, 919, 194, 515, 580, 870, 439, 613, 893, 368, 471, 611, 483, 218, 863, 788, 778, 245, 881, 256, 585, 187, 62, 160, 491, 47, 876, 795, 430, 382, 886, 821, 726, 395, 53, 465, 504, 85, 107, 461, 344, 312, 539, 221, 618, 879, 18, 780, 716, 678, 57, 59, 203, 96, 727, 650, 581, 264, 700, 690, 979, 779, 129, 310, 948, 104, 415, 318, 285, 377, 136, 337, 195, 606, 822, 176, 166, 582, 926, 39, 714, 550, 775, 660, 437, 592, 722, 118, 423, 956, 339, 900, 591, 387, 88, 191, 549, 908, 697, 904, 910, 967, 228, 260, 532, 8, 774, 901, 282, 791, 161, 334, 41, 232, 108, 244, 324, 34, 510, 141, 794, 688, 964, 685, 542, 94, 2, 346, 320, 830, 319, 394, 391, 143, 718, 317, 105, 98, 323, 316, 177, 963, 949, 695, 413, 433, 825, 869, 708, 270, 131, 192, 895, 4, 466, 689, 159, 76, 454, 314, 330, 243, 246, 90, 381, 353, 142, 829, 707, 957, 212, 831, 480, 494, 555, 655, 789, 271, 24, 885, 50, 205, 300, 274, 476, 756, 677, 766, 74, 36, 198, 865, 249, 692, 534, 819, 349, 455, 713, 81, 233, 654, 750, 237, 449, 875, 598, 109, 659, 911, 966, 487, 679, 388, 242, 782, 983, 179, 673, 204, 165, 888, 417, 268, 952, 190, 616, 923, 281, 30, 421, 238, 828, 763, 698, 475, 188, 784, 404, 593, 113, 307, 588, 939, 269, 10, 742, 630, 571, 747, 284, 574, 786, 226, 186, 259, 396, 850, 197, 847, 150, 631, 836, 9, 668, 6, 14, 730, 941, 717, 846, 734, 945, 799, 982, 637, 667, 861, 481, 951, 503, 27, 157, 170, 976, 329, 546, 877, 363, 607, 0, 916, 92, 790, 60, 154, 634, 624, 746, 505, 472, 981, 407, 909, 174, 361, 773, 770, 333, 278, 196, 338, 490, 721, 527, 29, 140, 749, 701, 572, 217, 251, 416, 248, 297, 760, 209, 255, 543, 341, 725, 485, 403, 295, 134, 738, 604, 866, 1, 168, 236, 279, 853, 122, 702, 447, 929, 834, 645, 977, 935, 311, 299, 258, 216, 938, 859, 684, 464, 393, 845, 331, 340, 184, 114, 68, 463, 61, 35, 117, 486, 823, 595, 647, 769, 815, 294, 553, 848, 410, 97, 383, 533, 583, 73, 291, 724, 229, 827, 392, 562, 629, 444, 43, 230, 156, 711, 880, 292, 809, 818, 930, 362, 744, 955, 961, 608, 858, 304, 657, 615, 371, 802, 77, 551, 222, 579, 832, 247, 116, 183, 513, 882, 891, 599, 723, 972, 67, 266, 373, 351, 516, 862, 384, 623, 83, 835, 121, 840, 369, 55, 897, 100, 456, 182, 812, 185, 641, 704, 434, 286, 541, 37, 453, 669, 720, 469, 741, 275};
const int RANDOM[] = {661, 632, 696, 877, 513, 208, 910, 750, 883, 129, 163, 981, 544, 866, 100, 415, 183, 378, 61, 593, 190, 277, 825, 757, 922, 954, 112, 23, 31, 793, 732, 457, 843, 46, 211, 172, 692, 264, 329, 645, 806, 485, 930, 221, 403, 953, 572, 354, 947, 666, 830, 333, 356, 533, 339, 467, 471, 884, 638, 155, 38, 149, 428, 157, 300, 679, 862, 416, 585, 739, 103, 314, 188, 906, 650, 977, 240, 26, 768, 715, 975, 304, 477, 186, 728, 235, 835, 312, 160, 443, 263, 368, 696, 105, 4, 117, 589, 221, 186, 353, 516, 695, 674, 607, 610, 676, 300, 602, 363, 913, 113, 934, 648, 276, 825, 192, 824, 34, 959, 574, 98, 175, 825, 209, 520, 752, 780, 383, 833, 575, 654, 757, 375, 829, 204, 622, 220, 829, 16, 783, 823, 248, 613, 781, 327, 466, 171, 440, 113, 172, 258, 85, 120, 40, 60, 945, 430, 603, 243, 707, 976, 158, 378, 926, 346, 614, 643, 53, 448, 235, 880, 863, 329, 143, 128, 592, 441, 940, 777, 298, 336, 312, 34, 403, 65, 136, 299, 707, 573, 863, 945, 701, 750, 845, 509, 400, 594, 689, 951, 261, 87, 314, 184, 498, 277, 444, 585, 117, 216, 716, 754, 123, 51, 630, 260, 3, 896, 618, 949, 154, 836, 678, 118, 476, 108, 216, 871, 716, 429, 920, 93, 927, 81, 536, 477, 436, 91, 34, 34, 144, 859, 138, 606, 843, 593, 886, 438, 226, 392, 750, 257, 780, 636, 888, 117, 129, 853, 760, 59, 248, 3, 787, 382, 415, 928, 68, 345, 585, 980, 58, 554, 562, 300, 749, 0, 572, 674, 123, 563, 208, 346, 391, 279, 673, 125, 217, 917, 23, 72, 33, 571, 932, 309, 642, 756, 643, 895, 47, 245, 958, 977, 626, 166, 789, 530, 566, 79, 399, 624, 486, 397, 545, 574, 190, 603, 615, 452, 918, 463, 949, 589, 88, 57, 456, 342, 658, 773, 418, 158, 737, 220, 494, 197, 755, 29, 381, 143, 675, 359, 25, 965, 517, 828, 769, 255, 883, 698, 839, 43, 941, 17, 54, 351, 35, 711, 785, 522, 19, 649, 102, 164, 553, 720, 630, 554, 762, 310, 109, 693, 493, 834, 114, 859, 694, 381, 548, 752, 269, 579, 982, 202, 854, 533, 470, 802, 600, 778, 973, 795, 416, 474, 750, 689, 272, 832, 687, 100, 664, 783, 55, 312, 798, 646, 179, 341, 65, 330, 536, 396, 487, 227, 889, 64, 929, 13, 367, 761, 823, 559, 966, 335, 883, 526, 394, 848, 814, 352, 227, 4, 241, 393, 81, 289, 670, 777, 850, 498, 636, 822, 724, 194, 371, 400, 785, 536, 843, 902, 787, 952, 133, 766, 327, 628, 585, 364, 818, 736, 737, 656, 565, 175, 691, 424, 963, 861, 451, 399, 777, 862, 21, 286, 541, 208, 722, 696, 750, 430, 684, 226, 112, 642, 900, 948, 760, 590, 791, 255, 734, 383, 225, 592, 942, 876, 680, 330, 861, 640, 137, 462, 458, 662, 65, 512, 760, 350, 562, 76, 36, 158, 915, 310, 645, 342, 622, 569, 179, 4, 779, 543, 35, 921, 695, 441, 532, 373, 513, 939, 429, 895, 643, 362, 848, 286, 323, 875, 103, 133, 641, 565, 180, 784, 575, 369, 402, 596, 821, 565, 68, 352, 2, 232, 165, 942, 927, 744, 87, 676, 837, 631, 911, 821, 588, 483, 397, 859, 478, 684, 296, 4, 477, 746, 785, 710, 457, 636, 429, 792, 695, 858, 641, 729, 689, 579, 801, 76, 708, 53, 577, 515, 560, 32, 315, 36, 928, 143, 602, 417, 981, 295, 113, 981, 712, 798, 737, 434, 870, 424, 589, 432, 838, 269, 620, 709, 802, 949, 480, 154, 401, 711, 649, 257, 447, 204, 499, 223, 269, 449, 961, 591, 714, 521, 837, 258, 43, 70, 483, 792, 453, 888, 776, 334, 157, 109, 234, 470, 96, 640, 743, 567, 256, 976, 815, 70, 248, 840, 893, 119, 289, 329, 529, 57, 560, 907, 375, 83, 294, 595, 36, 618, 531, 930, 883, 43, 724, 923, 184, 661, 21, 727, 753, 482, 74, 447, 975, 265, 668, 958, 69, 502, 689, 570, 550, 425, 467, 162, 541, 538, 531, 893, 798, 38, 120, 588, 403, 197, 324, 110, 92, 35, 509, 759, 784, 542, 372, 279, 517, 89, 360, 210, 526, 326, 685, 637, 285, 121, 279, 13, 586, 736, 632, 38, 231, 558, 979, 666, 494, 629, 562, 373, 194, 846, 320, 648, 182, 606, 427, 899, 374, 762, 507, 479, 276, 981, 112, 910, 208, 335, 494, 841, 787, 11, 70, 867, 301, 788, 196, 712, 406, 706, 69, 806, 829, 338, 511, 727, 257, 723, 564, 711, 677, 495, 153, 690, 654, 920, 160, 700, 928, 112, 340, 330, 577, 45, 366, 6, 661, 102, 527, 859, 942, 15, 924, 477, 497, 614, 152, 153, 983, 881, 555, 188, 649, 265, 259, 387, 261, 293, 536, 888, 934, 796, 151, 632, 20, 15, 231, 21, 911, 892, 150, 79, 375, 92, 855, 184, 537, 407, 464, 801, 794, 442, 442, 390, 420, 559, 2, 99, 456, 767, 103, 134, 448, 880, 636, 219, 778, 765, 879, 921, 361, 525, 530, 755, 221, 736, 794, 936, 8, 558, 33, 515, 1, 6, 140, 339, 926, 496, 591, 201, 412, 646, 597, 247, 42, 707, 270, 861, 785, 46, 95, 96, 787, 51, 517, 220, 978, 277, 239, 460, 242, 297, 150, 459, 78, 622, 969, 578, 669, 222, 304, 609, 243, 233, 504, 589, 961, 818, 63, 413, 487, 783, 905, 168, 919, 656, 0, 906, 405, 27, 711, 148, 870, 795, 357, 139, 792, 452, 807, 401, 809, 670, 221, 661, 310, 962, 125, 491, 818, 624, 291, 24, 0, 547, 191, 38, 850, 414, 676, 275, 288, 392, 834, 432, 869, 606, 887, 514, 911, 790, 154, 325, 377, 97, 383, 531, 112, 403, 104, 837, 315, 224, 821, 878};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 740;

int main() {
    Vozlisce** v = calloc(N + 1, sizeof(Vozlisce*));
    for (int i = 0; i < N; i++) {
        v[i] = calloc(1, sizeof(Vozlisce));
    }

    for (int i = 0; i < N; i++) {
        v[i]->naslednje = v[NASLEDNJE[i]];
        v[i]->prejsnje = v[RANDOM[i]];
    }

    nastavi(v[ZACETEK]);

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->naslednje == v[NASLEDNJE[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]->prejsnje == v[PREJSNJE[i]]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        free(v[i]);
    }
    free(v);

    return 0;
}