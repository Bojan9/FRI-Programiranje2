
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

const int NASLEDNJE[] = {526, 163, 106, 7, 508, 506, 552, 88, 536, 516, 409, 141, 319, 328, 496, 153, 254, 236, 56, 209, 379, 346, 43, 271, 246, 314, 223, 290, 121, 365, 475, 123, 12, 136, 195, 273, 548, 322, 146, 385, 453, 326, 283, 408, 373, 473, 23, 501, 186, 131, 104, 334, 488, 542, 213, 309, 507, 436, 74, 75, 132, 514, 264, 76, 433, 556, 0, 494, 156, 9, 82, 65, 515, 538, 230, 329, 312, 14, 92, 164, 327, 233, 64, 301, 109, 70, 46, 355, 38, 72, 277, 176, 491, 202, 370, 258, 412, 63, 175, 324, 464, 288, 303, 417, 158, 177, 407, 430, 497, 30, 388, 79, 170, 350, 343, 305, 317, 410, 555, 383, 415, 471, 426, 325, 487, 378, 226, 114, 472, 80, 173, 59, 527, 69, 423, 323, 157, 341, 180, 221, 124, 528, 419, 422, 481, 551, 366, 211, 517, 251, 364, 554, 28, 197, 521, 255, 77, 371, 281, 406, 443, 97, 524, 118, 49, 73, 155, 512, 525, 291, 387, 530, 451, 112, 550, 372, 503, 431, 340, 147, 440, 367, 537, 278, 241, 119, 181, 154, 434, 330, 284, 57, 331, 454, 456, 259, 362, 263, 249, 519, 295, 33, 39, 68, 143, 461, 6, 193, 302, 396, 265, 269, 137, 380, 237, 15, 483, 559, 220, 257, 248, 357, 361, 315, 222, 531, 493, 184, 252, 275, 37, 218, 486, 546, 5, 318, 345, 185, 336, 167, 384, 390, 442, 189, 214, 127, 459, 244, 21, 55, 101, 17, 96, 280, 19, 402, 148, 24, 78, 416, 134, 95, 529, 421, 262, 279, 115, 203, 500, 413, 272, 539, 182, 354, 377, 205, 286, 13, 261, 219, 547, 183, 41, 398, 152, 376, 424, 535, 129, 66, 45, 225, 89, 307, 445, 25, 198, 224, 337, 465, 16, 120, 389, 99, 401, 391, 333, 179, 140, 36, 256, 505, 48, 467, 229, 399, 274, 50, 360, 540, 102, 510, 476, 247, 543, 545, 178, 128, 3, 478, 351, 42, 477, 8, 113, 427, 22, 40, 428, 4, 191, 103, 18, 549, 94, 463, 54, 308, 93, 215, 160, 349, 490, 395, 358, 232, 83, 67, 300, 239, 116, 266, 392, 87, 348, 32, 374, 294, 335, 171, 411, 111, 518, 499, 53, 84, 126, 403, 217, 2, 359, 61, 35, 356, 466, 482, 339, 166, 533, 352, 81, 204, 169, 242, 332, 560, 511, 382, 150, 558, 297, 448, 250, 62, 400, 484, 504, 260, 296, 234, 151, 267, 165, 287, 298, 446, 313, 468, 513, 432, 10, 122, 455, 498, 270, 444, 172, 495, 321, 135, 85, 235, 458, 316, 414, 470, 544, 532, 51, 162, 194, 86, 311, 98, 243, 227, 469, 394, 190, 130, 474, 369, 145, 397, 201, 282, 462, 240, 90, 561, 60, 228, 404, 142, 253, 457, 110, 117, 58, 320, 368, 405, 299, 149, 168, 438, 144, 107, 31, 553, 199, 231, 105, 523, 208, 29, 381, 52, 338, 292, 100, 125, 347, 196, 187, 520, 420, 480, 344, 437, 492, 541, 133, 439, 47, 386, 285, 489, 210, 502, 71, 479, 245, 449, 27, 557, 304, 306, 425, 289, 562, 509, 44, 452, 534, 447, 161, 192, 393, 429, 138, 460, 310, 26, 159, 11, 139, 200, 450, 268, 212, 293, 522, 207, 206, 20, 435, 34, 174, 363, 375, 1, 216, 441, 342, 108, 485, 91, 276, 353, 188, 238};
const int PREJSNJE[] = {66, 551, 379, 328, 339, 234, 206, 3, 333, 69, 420, 535, 32, 277, 77, 215, 300, 251, 342, 254, 545, 248, 336, 46, 257, 295, 533, 514, 152, 485, 109, 478, 365, 201, 547, 382, 309, 230, 88, 202, 337, 282, 331, 22, 522, 290, 86, 504, 312, 164, 317, 438, 487, 374, 346, 249, 18, 191, 468, 131, 460, 381, 403, 97, 82, 71, 289, 357, 203, 133, 85, 510, 89, 165, 58, 59, 63, 156, 258, 111, 129, 390, 70, 356, 375, 430, 441, 363, 7, 292, 458, 557, 78, 348, 344, 261, 252, 161, 443, 303, 490, 250, 320, 341, 50, 482, 2, 477, 555, 84, 466, 371, 173, 334, 127, 266, 360, 467, 163, 185, 301, 28, 421, 31, 140, 491, 376, 245, 327, 288, 449, 49, 60, 502, 260, 429, 33, 212, 530, 536, 308, 11, 463, 204, 476, 452, 38, 179, 256, 473, 398, 410, 284, 15, 187, 166, 68, 136, 104, 534, 350, 526, 439, 1, 79, 412, 387, 239, 474, 392, 112, 369, 426, 130, 548, 98, 91, 105, 326, 307, 138, 186, 272, 281, 227, 237, 48, 494, 560, 243, 448, 340, 527, 207, 440, 34, 493, 153, 296, 480, 537, 454, 93, 267, 391, 275, 544, 543, 484, 19, 508, 147, 540, 54, 244, 349, 552, 378, 231, 279, 218, 139, 224, 26, 297, 291, 126, 445, 461, 314, 74, 481, 355, 81, 409, 431, 17, 214, 561, 359, 457, 184, 393, 444, 247, 512, 24, 323, 220, 198, 402, 149, 228, 464, 16, 155, 310, 219, 95, 195, 407, 278, 264, 197, 62, 210, 361, 411, 539, 211, 424, 23, 270, 35, 316, 229, 558, 90, 183, 265, 253, 158, 455, 42, 190, 506, 276, 413, 101, 519, 27, 169, 489, 541, 367, 200, 408, 400, 414, 472, 358, 83, 208, 102, 516, 115, 517, 293, 347, 55, 532, 442, 76, 416, 25, 223, 433, 116, 235, 12, 469, 428, 37, 135, 99, 123, 41, 80, 13, 75, 189, 192, 394, 306, 51, 368, 238, 298, 488, 386, 178, 137, 554, 114, 498, 236, 21, 492, 364, 351, 113, 330, 389, 559, 273, 87, 383, 221, 354, 380, 318, 222, 196, 549, 150, 29, 146, 181, 470, 451, 94, 157, 175, 44, 366, 550, 285, 274, 125, 20, 213, 486, 397, 119, 240, 39, 505, 170, 110, 302, 241, 305, 362, 528, 447, 353, 209, 453, 283, 315, 404, 304, 255, 377, 462, 471, 159, 106, 43, 10, 117, 370, 96, 269, 434, 120, 259, 103, 562, 142, 496, 263, 143, 134, 286, 518, 122, 335, 338, 529, 107, 177, 419, 64, 188, 546, 57, 499, 475, 503, 180, 553, 242, 160, 425, 294, 415, 525, 401, 513, 538, 172, 523, 40, 193, 422, 194, 465, 432, 246, 531, 205, 456, 345, 100, 299, 384, 313, 417, 446, 435, 121, 128, 45, 450, 30, 322, 332, 329, 511, 497, 144, 385, 216, 405, 556, 232, 124, 52, 507, 352, 92, 500, 226, 67, 427, 14, 108, 423, 373, 268, 47, 509, 176, 406, 311, 5, 56, 4, 521, 321, 396, 167, 418, 61, 72, 9, 148, 372, 199, 495, 154, 542, 483, 162, 168, 0, 132, 141, 262, 171, 225, 437, 388, 524, 287, 8, 182, 73, 271, 319, 501, 53, 324, 436, 325, 233, 280, 36, 343, 174, 145, 6, 479, 151, 118, 65, 515, 399, 217, 395, 459};
const int RANDOM[] = {213, 26, 519, 347, 431, 375, 247, 504, 336, 441, 495, 57, 483, 126, 347, 436, 525, 200, 227, 240, 516, 29, 478, 410, 330, 15, 179, 393, 219, 31, 205, 71, 48, 225, 57, 290, 142, 20, 212, 461, 472, 116, 443, 546, 546, 497, 48, 243, 76, 448, 108, 552, 349, 57, 65, 106, 163, 381, 39, 222, 557, 523, 282, 476, 164, 202, 531, 446, 275, 383, 261, 105, 83, 200, 59, 181, 213, 371, 503, 5, 311, 78, 551, 214, 78, 282, 105, 267, 485, 93, 502, 311, 33, 189, 101, 444, 550, 467, 127, 125, 216, 114, 535, 560, 81, 18, 487, 499, 231, 42, 25, 79, 201, 321, 213, 100, 407, 144, 132, 287, 89, 320, 108, 303, 387, 393, 196, 386, 251, 432, 263, 544, 79, 471, 425, 259, 90, 204, 253, 22, 255, 65, 246, 119, 191, 200, 8, 55, 515, 167, 499, 348, 505, 27, 401, 34, 81, 326, 79, 252, 33, 492, 514, 519, 6, 132, 21, 374, 117, 539, 168, 316, 311, 529, 355, 370, 129, 352, 395, 548, 46, 327, 105, 103, 294, 523, 127, 311, 75, 481, 252, 407, 239, 165, 93, 548, 263, 475, 183, 207, 504, 386, 25, 229, 458, 481, 84, 334, 227, 3, 199, 248, 268, 359, 427, 330, 236, 242, 408, 67, 492, 46, 177, 122, 240, 60, 77, 116, 350, 14, 533, 72, 166, 236, 45, 405, 156, 489, 177, 372, 478, 497, 494, 241, 420, 463, 459, 3, 14, 417, 330, 230, 139, 171, 279, 196, 85, 155, 421, 162, 28, 284, 131, 552, 538, 218, 246, 150, 343, 8, 172, 514, 361, 223, 24, 522, 35, 449, 194, 179, 540, 189, 507, 482, 311, 81, 152, 297, 529, 537, 266, 532, 307, 492, 487, 488, 550, 61, 506, 357, 332, 86, 276, 71, 433, 109, 519, 10, 441, 193, 415, 297, 18, 233, 46, 513, 457, 128, 52, 19, 89, 303, 476, 33, 497, 225, 212, 207, 267, 250, 29, 288, 181, 388, 428, 118, 555, 75, 283, 411, 20, 444, 272, 436, 14, 169, 384, 408, 49, 103, 219, 271, 262, 235, 39, 466, 91, 323, 272, 537, 74, 404, 508, 146, 325, 321, 373, 285, 2, 201, 0, 324, 73, 187, 549, 9, 49, 18, 34, 92, 133, 530, 8, 44, 494, 403, 170, 58, 231, 69, 327, 377, 244, 538, 346, 403, 505, 212, 151, 236, 493, 194, 407, 68, 409, 38, 514, 274, 177, 83, 291, 137, 260, 236, 19, 511, 176, 395, 550, 477, 344, 549, 76, 133, 405, 428, 6, 63, 204, 7, 463, 88, 431, 378, 467, 201, 280, 367, 360, 330, 304, 147, 339, 287, 424, 126, 386, 238, 272, 353, 271, 384, 162, 421, 113, 391, 45, 188, 394, 97, 203, 335, 537, 301, 40, 59, 394, 256, 150, 274, 472, 458, 488, 520, 90, 388, 332, 291, 412, 527, 232, 448, 558, 89, 453, 329, 86, 420, 124, 523, 132, 426, 52, 285, 551, 306, 47, 538, 392, 451, 484, 122, 131, 458, 215, 301, 13, 160, 217, 215, 491, 101, 280, 226, 352, 290, 514, 541, 244, 470, 395, 79, 548, 273, 188, 26, 532, 309, 473, 292, 400, 396, 429, 112, 375, 250, 535, 154, 324, 44, 112, 326, 219, 473, 367, 250, 462, 218, 389, 196, 348, 344, 347, 231, 106, 511, 30, 34, 31, 345, 423, 451};
const int N = sizeof(NASLEDNJE) / sizeof(NASLEDNJE[0]);
const int ZACETEK = 418;

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
