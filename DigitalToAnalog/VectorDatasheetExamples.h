// the following are X, Y, X, Y except that a single "255"
// indicatete the following is a "dark" vector (move instead
// of draw)
// the first vector is assumed "dark". Code will not accept a "255"
// at the beginning

PROGMEM  const unsigned char logo[] = {
  41, 85, 40, 92, 41, 101, 43, 110,
   46, 118, 49, 126, 54, 134, 60, 141,
   67, 146, 74, 152, 82, 156, 90, 159,
   99, 160, 108, 161, 117, 160, 125, 158,
   133, 156, 141, 152, 148, 147, 155, 141,
   158, 138,
  255,
   153, 137, 152, 138, 146, 144, 139, 148,
   132, 152, 124, 155, 116, 156, 108, 157,
   99, 157, 91, 155, 83, 152, 76, 148,
   69, 143, 63, 138, 57, 131, 52, 124,
   49, 117, 46, 109, 45, 100, 44, 92,
   44, 88,
  255,
   63, 45, 69, 40, 76, 35, 84, 31,
   91, 29, 100, 27, 108, 26, 116, 27,
   124, 29, 132, 32, 140, 36, 147, 40,
   153, 46, 158, 52, 163, 59, 166, 67,
   169, 75, 171, 83, 171, 92, 171, 96,
  
  255,
   174, 97, 175, 92, 174, 83, 173, 74,
   170, 65, 166, 57, 161, 50, 155, 43,
   149, 37, 142, 32, 134, 28, 125, 25,
   117, 23, 108, 23, 99, 23, 90, 25,
   82, 28, 74, 32, 67, 37, 61, 42,
  
  255,
   55, 96, 56, 114, 59, 130, 61, 134,
   63, 135, 65, 134, 66, 132, 70, 117,
   71, 106,
  255,
   69, 105, 67, 117, 66, 126, 64, 131,
   63, 132, 62, 130, 59, 117, 56, 97,
  
  255,
   91, 116, 92, 125, 94, 132, 95, 135,
   97, 136, 100, 135, 102, 129, 103, 122,
  
  255,
   101, 121, 100, 125, 99, 131, 97, 133,
   96, 132, 94, 124, 93, 117,
  255,
   127, 130, 128, 134, 129, 136, 131, 137,
   133, 136, 135, 133,
  255,
   132, 132, 131, 134, 130, 133, 129, 131,
  
  255,
   79, 56, 81, 50, 82, 48, 83, 51,
   85, 56, 85, 64,
  255,
   88, 63, 87, 57, 86, 54, 85, 48,
   83, 45, 81, 45, 79, 47, 77, 53,
   77, 56,
  255,
   110, 77, 111, 70, 112, 62, 115, 51,
   116, 49, 117, 51, 118, 55, 119, 62,
   120, 70, 121, 81,
  255,
   124, 81, 123, 70, 121, 57, 118, 47,
   117, 46, 115, 46, 114, 47, 113, 51,
   110, 62, 108, 74, 107, 79,
  255,
   142, 91, 146, 70, 149, 55, 150, 52,
   151, 50, 152, 52, 153, 59, 154, 68,
   156, 80, 156, 93,
  255,
   159, 93, 158, 76, 155, 58, 153, 49,
   151, 48, 150, 48, 147, 50, 143, 66,
   140, 88,
  255,
   156, 138, 154, 140, 148, 146, 141, 150,
   133, 154, 125, 157, 116, 159, 108, 160,
   99, 159, 90, 157, 82, 154, 75, 150,
   68, 146, 61, 140, 55, 133, 50, 125,
   47, 118, 44, 109, 42, 100, 42, 92,
   42, 86,
  255,
   43, 87, 43, 92, 43, 101, 45, 109,
   48, 117, 52, 125, 56, 132, 62, 139,
   68, 144, 75, 149, 83, 153, 91, 156,
   99, 158, 108, 158, 116, 158, 124, 156,
   132, 153, 140, 150, 147, 145, 153, 139,
   155, 137,
  255,
   172, 96, 173, 92, 172, 83, 171, 75,
   168, 66, 164, 59, 159, 51, 154, 45,
   147, 39, 141, 34, 133, 31, 125, 28,
   116, 26, 108, 25, 100, 25, 91, 27,
   83, 30, 76, 33, 69, 39, 63, 44,
  
  255,
   62, 43, 68, 38, 75, 33, 83, 29,
   91, 26, 100, 24, 108, 24, 117, 25,
   125, 26, 133, 29, 141, 33, 148, 38,
   155, 44, 160, 51, 165, 58, 169, 66,
   172, 74, 173, 83, 174, 92, 174, 97,
  
  255,
   33, 80, 49, 91, 51, 90, 51, 93,
   65, 102, 69, 99, 70, 105, 76, 108,
   79, 106, 79, 110, 85, 113, 88, 111,
   88, 115, 104, 122, 105, 121, 105, 122,
   115, 126, 118, 127, 120, 126, 123, 123,
   123, 125, 124, 128, 126, 130, 133, 133,
   136, 132, 141, 129, 141, 134, 146, 135,
   150, 132, 150, 136, 159, 138, 172, 140,
   177, 136, 179, 140, 185, 141, 189, 136,
   184, 116, 178, 121, 184, 139, 180, 139,
   175, 127, 171, 138, 167, 138, 173, 120,
   168, 102, 170, 102, 175, 97, 172, 97,
   170, 98, 170, 96, 165, 101, 164, 137,
   160, 137, 161, 100, 163, 100, 169, 96,
   166, 95, 161, 98, 161, 94, 156, 99,
   155, 135, 151, 135, 151, 116, 146, 133,
   142, 133, 143, 95, 146, 96, 151, 91,
   148, 90, 143, 93, 142, 91, 137, 94,
   138, 97, 137, 129, 136, 131, 134, 131,
   126, 128, 125, 127, 125, 124, 126, 92,
   127, 90, 129, 90, 136, 93, 141, 89,
   141, 88, 134, 85, 131, 85, 127, 88,
   127, 83, 121, 88, 121, 98, 119, 102,
   124, 98, 124, 100, 120, 104, 121, 107,
   120, 123, 119, 124, 117, 125, 107, 121,
   108, 81, 110, 82, 116, 78, 112, 76,
   106, 80, 105, 108, 104, 108, 99, 112,
   103, 114, 105, 112, 105, 114, 104, 115,
   104, 120, 90, 113, 90, 108, 94, 110,
   95, 75, 97, 76, 104, 72, 100, 70,
   95, 73, 95, 67, 87, 71, 87, 80,
   84, 85, 90, 81, 93, 79, 92, 102,
   92, 95, 90, 90, 87, 85, 81, 88,
   84, 92, 85, 97, 85, 111, 81, 109,
   80, 96, 79, 93, 76, 90, 75, 106,
   71, 103, 72, 61, 75, 63, 82, 59,
   78, 55, 73, 58, 73, 53, 66, 57,
   66, 64, 58, 59, 58, 68, 62, 65,
   67, 66, 71, 65, 71, 72, 64, 67,
   58, 70, 65, 75, 71, 72, 70, 74,
   66, 76, 66, 82, 58, 76, 58, 88,
   63, 85, 63, 82, 66, 84, 70, 82,
   70, 92, 65, 95, 65, 100, 53, 93,
   54, 48, 65, 56, 72, 52, 60, 42,
   53, 44, 52, 51, 51, 52, 52, 37,
   45, 40, 44, 77, 50, 74, 51, 61,
   52, 59, 52, 76, 44, 80, 48, 82,
   51, 80, 51, 83, 49, 84, 49, 89,
   35, 79, 35, 72, 40, 76, 41, 35,
   45, 38, 51, 35, 47, 30, 39, 32,
   38, 66, 33, 70, 33, 80,
  255,
   58, 89, 64, 93, 69, 90, 64, 86,
   58, 89,
  255,
   82, 78, 76, 81, 76, 83, 78, 83,
   81, 81, 82, 78,
  255,
   116, 114, 112, 118, 114, 119, 116, 118,
   116, 114,
  255,
   111, 103, 111, 116, 116, 112, 116, 106,
   115, 104, 111, 103,
  255,
   117, 79, 112, 83, 112, 95, 115, 93,
   115, 95, 112, 98, 116, 99, 117, 98,
   117, 85, 120, 86, 125, 82, 122, 81,
   117, 83, 117, 79,
  255,
   131, 96, 129, 97, 129, 123, 132, 121,
   132, 122, 130, 124, 130, 125, 132, 126,
   133, 125, 134, 99, 133, 97, 131, 96,
  
  255,
   152, 92, 147, 97, 147, 118, 153, 98,
   155, 98, 160, 94, 157, 93, 152, 96,
   152, 92,
  255,
   171, 117, 170, 126, 172, 120, 171, 117,
  
  255,
   178, 98, 172, 103, 176, 114, 180, 104,
   182, 104, 188, 99, 185, 98, 180, 102,
   178, 98,
  255,
   189, 100, 183, 105, 179, 118, 185, 110,
   189, 100,
  255,
   77, 64, 76, 79, 83, 75, 83, 67,
   86, 70, 93, 66, 89, 63, 84, 66,
   84, 60, 77, 64,
  255,
   104, 74, 99, 77, 98, 110, 103, 106,
   104, 74,
  255,
   41, 103, 21, 119, 19, 121, 19, 125,
   22, 143, 28, 163, 30, 165, 32, 165,
   51, 170, 72, 172, 73, 171, 86, 157,
  
  255,
   83, 156, 71, 169, 52, 167, 33, 162,
   31, 162, 25, 142, 22, 125, 23, 122,
   42, 107,
  255,
   28, 121, 23, 124, 26, 142, 30, 154,
   34, 150, 28, 121,
  255,
   35, 152, 31, 156, 32, 160, 34, 160,
   38, 157, 35, 152,
  255,
   41, 157, 37, 162, 69, 168, 74, 163,
   41, 157,
  255,
   54, 133, 38, 147, 38, 151, 56, 136,
  
  255,
   58, 139, 42, 155, 45, 156, 60, 140,
  
  255,
   166, 57, 182, 43, 183, 41, 183, 38,
   185, 37, 185, 36, 184, 35, 184, 34,
  
  255,
   183, 32, 182, 30, 180, 29, 180, 27,
   177, 26, 177, 24, 175, 24, 174, 23,
   172, 23, 172, 22, 170, 22, 169, 23,
   168, 22, 165, 23, 149, 37,
  255,
   184, 34, 183, 33, 183, 32,
  255,
   153, 41, 164, 31, 165, 34, 155, 43,
  
  255,
   163, 52, 173, 43, 177, 45, 165, 56,
  
  255,
   169, 23, 167, 25, 166, 27, 168, 28,
   168, 30, 169, 31, 169, 33, 171, 34,
   172, 36, 173, 37, 175, 39, 176, 39,
   177, 41, 179, 40, 180, 41, 180, 41,
   182, 41, 183, 38,
  255,
   182, 41, 181, 43, 180, 43, 178, 43,
   176, 42, 170, 37, 165, 30, 165, 26,
   165, 25, 168, 25,
  255,
   170, 24, 168, 26, 169, 27, 171, 25,
   170, 24,
  255,
   171, 26, 168, 29, 169, 30, 172, 28,
   171, 26,
  255,
   173, 29, 170, 31, 171, 33, 173, 31,
   173, 29,
  255,
   175, 33, 172, 35, 173, 36, 175, 34,
   175, 33,
  255,
   177, 35, 175, 37, 176, 38, 178, 36,
   177, 35,
  255,
   179, 37, 177, 39, 178, 40, 180, 38,
   179, 37,
  255,
   182, 38, 180, 40, 181, 40, 183, 38,
   182, 38,
  255,
   176, 28, 176, 30, 177, 32, 179, 33,
   179, 31, 177, 30, 178, 29, 176, 28,
  
  255,
   149, 28, 151, 28, 154, 27, 156, 26,
   158, 25, 159, 23, 161, 20, 161, 18,
   161, 15, 161, 13, 161, 10, 159, 8,
   158, 6, 156, 5, 154, 4, 151, 3,
   149, 3, 147, 3, 144, 4, 142, 5,
   140, 6, 139, 8, 138, 10, 137, 13,
   137, 15, 137, 18, 138, 20, 139, 23,
   140, 25, 142, 26, 144, 27, 147, 28,
   149, 28,
  255,
   144, 8, 144, 22, 151, 22, 152, 22,
   153, 22, 154, 21, 154, 19, 154, 17,
   153, 16, 152, 15, 153, 15, 154, 14,
   155, 12, 155, 8, 151, 8, 151, 12,
   151, 12, 151, 14, 150, 14, 147, 14,
   147, 8, 144, 8,
  255,
   147, 16, 147, 20, 150, 20, 151, 20,
   151, 19, 151, 17, 150, 16, 147, 16,
  
  255,
   149, 26, 151, 26, 154, 25, 156, 24,
   158, 22, 159, 20, 160, 18, 160, 15,
   160, 13, 159, 10, 158, 8, 156, 7,
   154, 6, 151, 5, 149, 5, 147, 5,
   144, 6, 142, 7, 141, 8, 140, 10,
   139, 13, 139, 15, 139, 18, 140, 20,
   141, 22, 142, 24, 144, 25, 147, 26,
   149, 26
 };


PROGMEM const unsigned char starburst[] = {
  120, 120, 220, 120,
  255, 120, 120, 218, 139,
  255, 120, 120, 212, 158,
  255, 120, 120, 203, 175,
  255, 120, 120, 190, 190,
  255, 120, 120, 175, 203,
  255, 120, 120, 158, 212,
  255, 120, 120, 139, 218,
  255, 120, 120, 120, 220,
  255, 120, 120, 101, 218,
  255, 120, 120, 82, 212,
  255, 120, 120, 65, 203,
  255, 120, 120, 50, 190,
  255, 120, 120, 37, 175,
  255, 120, 120, 28, 158,
  255, 120, 120, 22, 139,
  255, 120, 120, 20, 120,
  255, 120, 120, 22, 101,
  255, 120, 120, 28, 82,
  255, 120, 120, 37, 65,
  255, 120, 120, 50, 50,
  255, 120, 120, 65, 37,
  255, 120, 120, 82, 28,
  255, 120, 120, 101, 22,
  255, 120, 120, 120, 20,
  255, 120, 120, 139, 22,
  255, 120, 120, 158, 28,
  255, 120, 120, 175, 37,
  255, 120, 120, 190, 50,
  255, 120, 120, 203, 65,
  255, 120, 120, 212, 82,
  255, 120, 120, 218, 101
};

PROGMEM const unsigned char wizardidd[] = {
  
   41, 85, 40, 92, 41, 101, 43, 110,
   46, 118, 49, 126, 54, 134, 60, 141,
   67, 146, 74, 152, 82, 156, 90, 159,
   99, 160, 108, 161, 117, 160, 125, 158,
   133, 156, 141, 152, 148, 147, 155, 141,
   158, 138,
  255,
   153, 137, 152, 138, 146, 144, 139, 148,
   132, 152, 124, 155, 116, 156, 108, 157,
   99, 157, 91, 155, 83, 152, 76, 148,
   69, 143, 63, 138, 57, 131, 52, 124,
   49, 117, 46, 109, 45, 100, 44, 92,
   44, 88,
  255,
   63, 45, 69, 40, 76, 35, 84, 31,
   91, 29, 100, 27, 108, 26, 116, 27,
   124, 29, 132, 32, 140, 36, 147, 40,
   153, 46, 158, 52, 163, 59, 166, 67,
   169, 75, 171, 83, 171, 92, 171, 96,
  
  255,
   174, 97, 175, 92, 174, 83, 173, 74,
   170, 65, 166, 57, 161, 50, 155, 43,
   149, 37, 142, 32, 134, 28, 125, 25,
   117, 23, 108, 23, 99, 23, 90, 25,
   82, 28, 74, 32, 67, 37, 61, 42,
  
  255,
   156, 138, 154, 140, 148, 146, 141, 150,
   133, 154, 125, 157, 116, 159, 108, 160,
   99, 159, 90, 157, 82, 154, 75, 150,
   68, 146, 61, 140, 55, 133, 50, 125,
   47, 118, 44, 109, 42, 100, 42, 92,
   42, 86,
  255,
   43, 87, 43, 92, 43, 101, 45, 109,
   48, 117, 52, 125, 56, 132, 62, 139,
   68, 144, 75, 149, 83, 153, 91, 156,
   99, 158, 108, 158, 116, 158, 124, 156,
   132, 153, 140, 150, 147, 145, 153, 139,
   155, 137,
   255,
   172, 96, 173, 92, 172, 83, 171, 75,
   168, 66, 164, 59, 159, 51, 154, 45,
   147, 39, 141, 34, 133, 31, 125, 28,
   116, 26, 108, 25, 100, 25, 91, 27,
   83, 30, 76, 33, 69, 39, 63, 44,
  
  255,
   62, 43, 68, 38, 75, 33, 83, 29,
   91, 26, 100, 24, 108, 24, 117, 25,
   125, 26, 133, 29, 141, 33, 148, 38,
   155, 44, 160, 51, 165, 58, 169, 66,
   172, 74, 173, 83, 174, 92, 174, 97,
  255,
   41, 103, 21, 119, 19, 121, 19, 125,
   22, 143, 28, 163, 30, 165, 32, 165,
   51, 170, 72, 172, 73, 171, 86, 157,
  
  255,
   83, 156, 71, 169, 52, 167, 33, 162,
   31, 162, 25, 142, 22, 125, 23, 122,
   42, 107,
  255,
   28, 121, 23, 124, 26, 142, 30, 154,
   34, 150, 28, 121,
  255,
   35, 152, 31, 156, 32, 160, 34, 160,
   38, 157, 35, 152,
  255,
   41, 157, 37, 162, 69, 168, 74, 163,
   41, 157,
  255,
   54, 133, 38, 147, 38, 151, 56, 136,
  
  255,
   58, 139, 42, 155, 45, 156, 60, 140,
  
  255,
   166, 57, 182, 43, 183, 41, 183, 38,
   185, 37, 185, 36, 184, 35, 184, 34,
  
  255,
   183, 32, 182, 30, 180, 29, 180, 27,
   177, 26, 177, 24, 175, 24, 174, 23,
   172, 23, 172, 22, 170, 22, 169, 23,
   168, 22, 165, 23, 149, 37,
  255,
   184, 34, 183, 33, 183, 32,
  255,
   153, 41, 164, 31, 165, 34, 155, 43,
  
  255,
   163, 52, 173, 43, 177, 45, 165, 56,
  
  255,
   169, 23, 167, 25, 166, 27, 168, 28,
   168, 30, 169, 31, 169, 33, 171, 34,
   172, 36, 173, 37, 175, 39, 176, 39,
   177, 41, 179, 40, 180, 41, 180, 41,
   182, 41, 183, 38,
  255,
   182, 41, 181, 43, 180, 43, 178, 43,
   176, 42, 170, 37, 165, 30, 165, 26,
   165, 25, 168, 25,
  255,
   170, 24, 168, 26, 169, 27, 171, 25,
   170, 24,
  255,
   171, 26, 168, 29, 169, 30, 172, 28,
   171, 26,
  255,
   173, 29, 170, 31, 171, 33, 173, 31,
   173, 29,
  255,
   175, 33, 172, 35, 173, 36, 175, 34,
   175, 33,
  255,
   177, 35, 175, 37, 176, 38, 178, 36,
   177, 35,
  
  
  255,
   179, 37, 177, 39, 178, 40, 180, 38,
   179, 37,
  255,
   182, 38, 180, 40, 181, 40, 183, 38,
   182, 38,
  255,
   176, 28, 176, 30, 177, 32, 179, 33,
   179, 31, 177, 30, 178, 29, 176, 28,
  
  255,
   149, 28, 151, 28, 154, 27, 156, 26,
   158, 25, 159, 23, 161, 20, 161, 18,
   161, 15, 161, 13, 161, 10, 159, 8,
   158, 6, 156, 5, 154, 4, 151, 3,
   149, 3, 147, 3, 144, 4, 142, 5,
   140, 6, 139, 8, 138, 10, 137, 13,
   137, 15, 137, 18, 138, 20, 139, 23,
   140, 25, 142, 26, 144, 27, 147, 28,
   149, 28,
  255,
   144, 8, 144, 22, 151, 22, 152, 22,
   153, 22, 154, 21, 154, 19, 154, 17,
   153, 16, 152, 15, 153, 15, 154, 14,
   155, 12, 155, 8, 151, 8, 151, 12,
   151, 12, 151, 14, 150, 14, 147, 14,
   147, 8, 144, 8,
  255,
   147, 16, 147, 20, 150, 20, 151, 20,
   151, 19, 151, 17, 150, 16, 147, 16,
  
  255,
   149, 26, 151, 26, 154, 25, 156, 24,
   158, 22, 159, 20, 160, 18, 160, 15,
   160, 13, 159, 10, 158, 8, 156, 7,
   154, 6, 151, 5, 149, 5, 147, 5,
   144, 6, 142, 7, 141, 8, 140, 10,
   139, 13, 139, 15, 139, 18, 140, 20,
   141, 22, 142, 24, 144, 25, 147, 26,
   149, 26,
  255,
   156, 50, 83, 50, 80, 53, 77, 51,
   75, 54, 74, 53, 71, 53, 70, 55,
   73, 60, 73, 62, 71, 65, 69, 63,
   71, 60, 70, 59, 68, 60, 67, 61,
   66, 62, 63, 62, 63, 61, 67, 59,
   68, 57, 67, 56, 65, 57, 66, 55,
   68, 53, 66, 52, 63, 52, 61, 55,
   63, 57, 63, 58, 60, 58, 59, 57,
   57, 58, 57, 60, 56, 62, 51, 62,
   50, 58, 52, 58, 55, 53, 51, 53,
   48, 58, 44, 58, 45, 56, 42, 55,
   42, 61, 38, 60, 39, 63, 44, 67,
   44, 69, 41, 67, 40, 69, 40, 71,
   35, 74, 32, 72, 35, 69, 36, 67,
   31, 69, 30, 67, 34, 64, 32, 62,
   35, 61, 30, 60, 28, 65, 23, 68,
   21, 66, 23, 64, 27, 62, 27, 60,
   24, 60, 22, 62, 18, 63, 17, 62,
   20, 61, 14, 60, 14, 58, 16, 57,
   22, 58, 23, 57, 21, 56, 12, 56,
   8, 56, 5, 51, 9, 51, 15, 53,
   19, 53, 17, 49, 20, 50, 21, 53,
   26, 54, 26, 57, 28, 59, 32, 57,
   29, 54, 29, 53, 33, 54, 34, 52,
   32, 51, 29, 51, 26, 50, 26, 47,
   31, 48, 34, 51, 38, 53, 39, 50,
   41, 49, 42, 53, 46, 53, 46, 50,
   48, 50, 52, 52, 54, 51, 58, 53,
   59, 51, 54, 50, 53, 49, 48, 48,
   46, 46, 49, 46, 52, 47, 62, 48,
   63, 50, 66, 51, 67, 50, 67, 47,
   68, 46, 70, 47, 70, 51, 72, 52,
   74, 48, 81, 50, 83, 50,
  
  255,
   102, 51, 100, 51, 97, 53, 98, 56,
   102, 57, 109, 56, 109, 54, 103, 51,
   102, 51,
  255,
   147, 51, 145, 51, 143, 53, 144, 55,
   146, 56, 152, 56, 155, 55, 154, 53,
   147, 51,
  255,
   149, 55, 151, 54, 151, 53, 149, 53,
   147, 53, 147, 54, 149, 55,
  255,
   161, 57, 95, 57,
  255,
   103, 55, 105, 55, 106, 54, 104, 53,
   102, 53, 101, 54, 103, 55,
  255,
   150, 68, 155, 67, 158, 62, 156, 59,
   143, 59, 117, 59, 118, 63, 116, 63,
   115, 64, 116, 65, 118, 66, 119, 67,
   118, 69, 117, 70, 113, 70, 114, 68,
   115, 68, 117, 67, 114, 62, 115, 61,
   114, 59, 95, 59, 89, 56, 84, 55,
   80, 56, 79, 58, 79, 63, 80, 65,
   81, 65, 82, 64, 83, 62, 82, 61,
   81, 62, 81, 64, 80, 63, 80, 61,
   81, 58, 82, 58, 83, 59, 89, 66,
   94, 68, 97, 67, 105, 65, 106, 64,
   109, 63, 110, 64, 110, 65, 106, 65,
   105, 66, 105, 67, 106, 68, 108, 68,
   108, 69, 107, 70, 107, 71, 91, 75,
   87, 76, 82, 81, 73, 83, 76, 84,
   80, 85, 82, 85, 86, 87, 93, 93,
   95, 96, 93, 98, 91, 99, 87, 97,
   80, 94, 77, 90, 79, 97, 77, 95,
   74, 93, 73, 93, 74, 96, 68, 94,
   67, 95, 67, 95, 75, 98, 66, 97,
   65, 97, 65, 98, 67, 100, 74, 100,
   76, 101, 74, 102, 66, 101, 65, 102,
   66, 103, 71, 104, 77, 103, 78, 104,
   75, 109, 75, 110, 77, 111, 78, 110,
   80, 105, 92, 107, 92, 113, 91, 113,
   91, 112, 90, 111, 90, 113, 91, 115,
   92, 119, 90, 117, 89, 115, 89, 114,
   88, 114, 88, 116, 89, 120, 90, 122,
   96, 126, 98, 126, 104, 138, 104, 142,
   96, 140, 94, 140, 93, 141, 112, 150,
   113, 151, 115, 150, 117, 148, 125, 129,
   125, 127, 126, 127, 125, 125, 126, 124,
   127, 125, 128, 126, 128, 124, 130, 125,
   130, 123, 130, 123, 131, 123, 129, 122,
   129, 120, 134, 117, 136, 113, 137, 109,
   137, 108, 139, 107, 145, 105, 147, 105,
   147, 104, 150, 104, 155, 123, 154, 123,
   153, 121, 152, 122, 152, 123, 154, 123,
   156, 126, 153, 127, 152, 127, 151, 128,
   153, 129, 155, 128, 158, 129, 158, 131,
   158, 132, 160, 133, 160, 132, 159, 131,
   159, 129, 160, 128, 161, 128, 163, 128,
   163, 128, 164, 127, 163, 126, 162, 127,
   160, 125, 160, 124, 160, 123, 160, 122,
   160, 122, 161, 121, 160, 120, 159, 120,
   159, 121, 158, 123, 153, 104, 158, 102,
   158, 101, 158, 100, 151, 100, 157, 99,
   157, 98, 157, 97, 156, 97, 154, 97,
   150, 99, 152, 97, 156, 97, 157, 96,
   156, 95, 154, 95, 152, 97, 154, 95,
   153, 94, 152, 94, 149, 96, 152, 94,
   150, 93, 149, 90, 148, 90, 148, 94,
   143, 97, 138, 92, 136, 88, 135, 88,
   136, 93, 134, 96, 133, 97, 132, 97,
   132, 84, 124, 67, 126, 67, 127, 67,
   127, 66, 126, 65, 124, 64, 122, 63,
   123, 62, 126, 63, 134, 66, 140, 66,
   144, 65, 146, 65, 148, 63, 152, 62,
   154, 63, 155, 64, 155, 65, 154, 65,
   152, 65, 150, 67, 150, 68,
  
  255,
   120, 69, 123, 69, 123, 67, 119, 65,
   120, 69,
  255,
   111, 70, 111, 67, 109, 68, 109, 71,
   111, 71,
  255,
   86, 78, 83, 78, 84, 79, 82, 78,
   81, 79, 82, 81, 80, 79, 79, 79,
   80, 82, 78, 81, 77, 81, 77, 82,
   77, 81, 75, 81, 75, 82,
  255,
   87, 78, 88, 82, 89, 83, 93, 85,
   97, 84, 98, 83, 98, 82, 95, 83,
   92, 81, 91, 79, 91, 78, 94, 76,
   96, 76, 98, 78, 98, 77, 97, 75,
   95, 74, 89, 76, 88, 78,
  255,
   80, 85, 83, 82, 83, 84, 87, 84,
   85, 85, 89, 86, 92, 88, 92, 89,
   91, 88, 89, 87, 86, 87,
  255,
   102, 88, 100, 89, 98, 87, 98, 89,
   96, 90, 96, 90, 98, 91, 99, 93,
   100, 92, 103, 92, 103, 92, 101, 90,
   102, 88,
  255,
   97, 96, 97, 99, 94, 99, 97, 101,
   97, 103, 98, 102, 100, 103, 99, 100,
   102, 99, 101, 98, 98, 99, 98, 98,
   98, 97, 97, 96,
  255,
   89, 103, 86, 103, 85, 105, 84, 103,
   82, 103, 83, 102, 82, 98, 84, 100,
   86, 98, 87, 100, 89, 103,
  255,
   92, 108, 93, 105, 94, 106, 94, 107,
   94, 109, 97, 104, 98, 104, 97, 108,
   100, 104, 101, 103, 101, 105, 101, 106,
   102, 105, 103, 103, 104, 103, 105, 104,
   106, 101, 105, 97, 110, 103, 110, 99,
   106, 94, 109, 95, 115, 101, 115, 98,
   113, 94, 118, 98, 119, 101, 120, 99,
   123, 102, 122, 97, 127, 101, 129, 107,
   130, 104, 129, 100, 133, 104, 134, 109,
   134, 106, 135, 106, 137, 108,
  255,
   134, 116, 134, 115, 133, 114, 122, 114,
   118, 115, 106, 113, 104, 113, 103, 115,
   104, 117, 103, 117, 106, 117,
  
  255,
   96, 118, 93, 115, 94, 113, 96, 113,
   100, 113, 101, 112, 101, 111, 103, 111,
   104, 111, 105, 111, 104, 110, 106, 111,
   109, 112, 109, 112, 109, 110, 109, 110,
   113, 112, 114, 110, 118, 112, 118, 109,
   120, 111, 121, 111, 121, 109, 122, 109,
   123, 110, 123, 111, 124, 111, 125, 109,
   127, 112, 127, 110, 129, 110, 130, 113,
   133, 111, 134, 112, 135, 115,
  
  255,
   131, 119, 131, 118, 131, 117, 129, 117,
   126, 117, 119, 116, 115, 117, 113, 116,
   112, 118, 112, 119, 116, 121, 118, 123,
   119, 124, 118, 125, 119, 127, 117, 125,
   116, 125, 116, 127, 114, 125, 113, 127,
   113, 125, 111, 125, 110, 126, 110, 125,
   109, 125, 108, 126, 108, 124, 105, 125,
   105, 124, 102, 123, 105, 123, 109, 123,
   110, 121, 114, 120,
  
  255,
   115, 122, 115, 123, 114, 124, 113, 123,
   114, 122, 115, 122,
  255,
   129, 120, 123, 121, 122, 123, 123, 125,
   123, 124, 125, 125,
  255,
   127, 123, 128, 122, 127, 121, 126, 122,
   127, 123,
  255,
   119, 129, 118, 131, 115, 129, 117, 131,
   115, 133, 117, 132, 119, 135, 119, 132,
   122, 132, 119, 131, 119, 129,
  255,
   120, 134, 121, 135, 119, 140, 116, 140,
   114, 139, 112, 137, 113, 136, 113, 136,
   115, 137, 118, 137, 120, 136, 120, 135,
   120, 134,
  255,
   114, 144, 112, 145, 110, 143, 111, 145,
   109, 146, 110, 146, 111, 148, 112, 147,
   114, 147, 113, 146, 114, 144,
  255,
   107, 145, 104, 141, 105, 140, 111, 140,
  
  255,
   100, 141, 99, 143, 98, 141,
  255,
   100, 126, 102, 125, 102, 124, 98, 124,
   101, 123, 98, 121, 97, 120, 96, 120,
   96, 118, 98, 118, 99, 118, 99, 117,
   98, 116, 97, 116,
  255,
   137, 106, 139, 103, 143, 104, 140, 102,
   141, 100, 139, 101, 137, 98, 137, 102,
   134, 103, 138, 103, 137, 106,
  255,
   125, 96, 127, 94, 129, 95, 127, 93,
   127, 90, 126, 91, 124, 89, 123, 90,
   124, 92, 122, 93, 124, 93, 125, 96,
  
  255,
   110, 94, 112, 92, 115, 92, 113, 91,
   114, 88, 112, 89, 110, 88, 110, 90,
   108, 91, 110, 92, 110, 94,
  255,
   116, 84, 118, 85, 122, 85, 124, 83,
   126, 81, 126, 79, 124, 77, 122, 75,
   118, 75, 116, 75, 115, 77, 117, 76,
   121, 77, 122, 79, 122, 81, 118, 83,
   116, 83, 116, 84,
  255,
   106, 83, 107, 79, 109, 79, 108, 78,
   109, 75, 107, 77, 104, 75, 105, 77,
   102, 79, 106, 79, 106, 83,
  255,
   143, 97, 146, 101, 147, 104,
  255,
   80, 105, 80, 103, 81, 102, 79, 97,
  
  255,
   161, 57, 161, 59, 97, 59, 95, 58,
   96, 57,
  255,
   91, 75, 70, 75,
  255,
   73, 83, 50, 83,
  255,
   75, 110, 64, 110,
  255,
   96, 126, 63, 126,
  255,
   111, 150, 93, 150,
  255,
   160, 133, 133, 133,
  255,
   93, 141, 65, 141,
  255,
   150, 68, 130, 68,
  255,
   64, 75, 59, 75,
  255,
   14, 186, 21, 186,
  255,
   18, 186, 18, 174,
  255,
   25, 174, 25, 186,
  255,
   34, 186, 34, 174,
  255,
   34, 181, 25, 181,
  255,
   44, 181, 37, 181,
  255,
   46, 186, 37, 186, 37, 174, 46, 174,
  
  255,
   62, 186, 63, 174, 65, 179, 67, 179,
   69, 174, 70, 186,
  255,
   77, 186, 81, 186,
  255,
   79, 186, 79, 174,
  255,
   77, 174, 81, 174,
  255,
   86, 186, 95, 186, 86, 174, 95, 174,
  
  255,
   100, 174, 104, 186, 107, 174,
  255,
   102, 179, 105, 179,
  255,
   111, 174, 111, 186, 118, 186, 119, 184,
   119, 183, 118, 181, 111, 181,
  255,
   116, 181, 119, 174,
  255,
   123, 174, 123, 186, 130, 186, 132, 184,
   132, 176, 130, 174, 123, 174,
  255,
   154, 186, 149, 186, 147, 184, 147, 176,
   149, 174, 154, 174, 156, 176, 156, 184,
   154, 186,
  255,
   160, 174, 160, 186, 168, 186,
  255,
   167, 181, 160, 181,
  255,
   188, 186, 191, 186,
  255,
   189, 186, 189, 174,
  255,
   188, 174, 191, 174,
  255,
   196, 174, 196, 186, 203, 186, 205, 184,
   205, 176, 203, 174, 196, 174,
  
  255,
   209, 174, 209, 186, 216, 186, 217, 184,
   217, 176, 216, 174, 209, 174
 };
