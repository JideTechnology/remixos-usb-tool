/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: gperf -a -L ANSI-C -C -G -c -o -t --key-positions='*' -N findEntity -D -s 2  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif


/*   This file is part of the KDE libraries
  
     Copyright (C) 1999 Lars Knoll (knoll@mpi-hd.mpg.de)
  
     This library is free software; you can redistribute it and/or
     modify it under the terms of the GNU Library General Public
     License as published by the Free Software Foundation; either
     version 2 of the License, or (at your option) any later version.
  
     This library is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
     Library General Public License for more details.
  
     You should have received a copy of the GNU Library General Public License
     along with this library; see the file COPYING.LIB.  If not, write to
     the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
     Boston, MA 02110-1301, USA.
  
  ----------------------------------------------------------------------------
  
    HTMLEntityNames.gperf: input file to generate a hash table for entities
    HTMLEntityNames.c: DO NOT EDIT! generated by the command
    "gperf -a -L "ANSI-C" -C -G -c -o -t -k '*' -NfindEntity -D -s 2 HTMLEntityNames.gperf > entities.c"   
    from HTMLEntityNames.gperf 

*/
struct Entity {
    const char *name;
    int code;
};

#define TOTAL_KEYWORDS 262
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 8
#define MIN_HASH_VALUE 28
#define MAX_HASH_VALUE 1091
/* maximum key range = 1064, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,   15,
        50,   20,    0, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092,  135,  145,   85,    0,   55,
        65,    5,    5,  140, 1092,   30,   20,    5,   15,   70,
        50,   40,   30,    5,   60,   95,   40, 1092,   25,   20,
        35, 1092, 1092, 1092, 1092, 1092, 1092,   85,   20,   25,
        35,    0,  250,  150,  315,   10,  410,    5,  105,  140,
         0,   40,   10,  215,   10,   50,   15,    5,   80,   15,
         5,  120,   10,    5, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]+1];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct Entity wordlist[] =
  {
    {"not", 0x00ac},
    {"phi", 0x03c6},
    {"nsup", 0x2285},
    {"psi", 0x03c8},
    {"isin", 0x2208},
    {"notin", 0x2209},
    {"there4", 0x2234},
    {"tau", 0x03c4},
    {"nsub", 0x2284},
    {"chi", 0x03c7},
    {"uarr", 0x2191},
    {"rarr", 0x2192},
    {"cap", 0x2229},
    {"part", 0x2202},
    {"rho", 0x03c1},
    {"emsp", 0x2003},
    {"pound", 0x00a3},
    {"int", 0x222b},
    {"eacute", 0x00e9},
    {"Phi", 0x03a6},
    {"uacute", 0x00fa},
    {"Psi", 0x03a8},
    {"darr", 0x2193},
    {"thorn", 0x00fe},
    {"iacute", 0x00ed},
    {"nu", 0x03bd},
    {"Rho", 0x03a1},
    {"ecirc", 0x00ea},
    {"Mu", 0x039c},
    {"Tau", 0x03a4},
    {"nbsp", 0x00a0},
    {"ucirc", 0x00fb},
    {"Yacute", 0x00dd},
    {"or", 0x2228},
    {"eta", 0x03b7},
    {"icirc", 0x00ee},
    {"iquest", 0x00bf},
    {"Nu", 0x039d},
    {"amp", 38},
    {"thinsp", 0x2009},
    {"GT", 62},
    {"REG", 0x00ae},
    {"ensp", 0x2002},
    {"radic", 0x221a},
    {"Chi", 0x03a7},
    {"sdot", 0x22c5},
    {"equiv", 0x2261},
    {"oacute", 0x00f3},
    {"lt", 60},
    {"uml", 0x00a8},
    {"prop", 0x221d},
    {"LT", 60},
    {"cup", 0x222a},
    {"iota", 0x03b9},
    {"ocirc", 0x00f4},
    {"Eacute", 0x00c9},
    {"loz", 0x25ca},
    {"para", 0x00b6},
    {"theta", 0x03b8},
    {"curren", 0x00a4},
    {"omicron", 0x03bf},
    {"euro", 0x20ac},
    {"kappa", 0x03ba},
    {"prod", 0x220f},
    {"Ecirc", 0x00ca},
    {"Oacute", 0x00d3},
    {"sup", 0x2283},
    {"supe", 0x2287},
    {"acute", 0x00b4},
    {"Eta", 0x0397},
    {"larr", 0x2190},
    {"empty", 0x2205},
    {"sub", 0x2282},
    {"sube", 0x2286},
    {"Ocirc", 0x00d4},
    {"aacute", 0x00e1},
    {"gt", 62},
    {"ETH", 0x00d0},
    {"sup1", 0x00b9},
    {"Kappa", 0x039a},
    {"ntilde", 0x00f1},
    {"Omicron", 0x039f},
    {"and", 0x2227},
    {"sup3", 0x00b3},
    {"rceil", 0x2309},
    {"Uacute", 0x00da},
    {"copy", 0x00a9},
    {"acirc", 0x00e2},
    {"uArr", 0x21d1},
    {"Theta", 0x0398},
    {"Ntilde", 0x00d1},
    {"rArr", 0x21d2},
    {"Ucirc", 0x00db},
    {"Scaron", 0x0160},
    {"shy", 0x00ad},
    {"rang", 0x3009},
    {"crarr", 0x21b5},
    {"cong", 0x2245},
    {"trade", 0x2122},
    {"yacute", 0x00fd},
    {"sup2", 0x00b2},
    {"oline", 0x203e},
    {"macr", 0x00af},
    {"exist", 0x2203},
    {"otilde", 0x00f5},
    {"AMP", 38},
    {"dArr", 0x21d3},
    {"Aacute", 0x00c1},
    {"COPY", 0x00a9},
    {"Iacute", 0x00cd},
    {"QUOT", 34},
    {"prime", 0x2032},
    {"ccedil", 0x00e7},
    {"Acirc", 0x00c2},
    {"mu", 0x03bc},
    {"Icirc", 0x00ce},
    {"scaron", 0x0161},
    {"Otilde", 0x00d5},
    {"nabla", 0x2207},
    {"clubs", 0x2663},
    {"atilde", 0x00e3},
    {"supl", 0x00b9},
    {"image", 0x2111},
    {"otimes", 0x2297},
    {"ne", 0x2260},
    {"Iota", 0x0399},
    {"Prime", 0x2033},
    {"lceil", 0x2308},
    {"ordm", 0x00ba},
    {"brvbar", 0x00a6},
    {"sum", 0x2211},
    {"lArr", 0x21d0},
    {"rdquo", 0x201d},
    {"Ccedil", 0x00c7},
    {"ang", 0x2220},
    {"lang", 0x3008},
    {"omega", 0x03c9},
    {"perp", 0x22a5},
    {"bdquo", 0x201e},
    {"lowast", 0x2217},
    {"rsquo", 0x2019},
    {"rlm", 0x200f},
    {"cent", 0x00a2},
    {"raquo", 0x00bb},
    {"Atilde", 0x00c3},
    {"lrm", 0x200e},
    {"aring", 0x00e5},
    {"weierp", 0x2118},
    {"Omega", 0x03a9},
    {"bull", 0x2022},
    {"infin", 0x221e},
    {"percnt", 0x0025},
    {"THORN", 0x00de},
    {"eth", 0x00f0},
    {"szlig", 0x00df},
    {"Lambda", 0x039b},
    {"euml", 0x00eb},
    {"uuml", 0x00fc},
    {"Dagger", 0x2021},
    {"iuml", 0x00ef},
    {"sbquo", 0x201a},
    {"sect", 0x00a7},
    {"Yuml", 0x0178},
    {"Aring", 0x00c5},
    {"plusmn", 0x00b1},
    {"quot", 34},
    {"le", 0x2264},
    {"harr", 0x2194},
    {"rfloor", 0x230b},
    {"zeta", 0x03b6},
    {"ouml", 0x00f6},
    {"ldquo", 0x201c},
    {"dagger", 0x2020},
    {"yen", 0x00a5},
    {"beta", 0x03b2},
    {"asymp", 0x2248},
    {"rsaquo", 0x203a},
    {"ordf", 0x00aa},
    {"Euml", 0x00cb},
    {"lsquo", 0x2018},
    {"Zeta", 0x0396},
    {"laquo", 0x00ab},
    {"apos", 0x0027},
    {"Gamma", 0x0393},
    {"Ouml", 0x00d6},
    {"iexcl", 0x00a1},
    {"ge", 0x2265},
    {"OElig", 0x0152},
    {"lambda", 0x03bb},
    {"ni", 0x220b},
    {"reg", 0x00ae},
    {"auml", 0x00e4},
    {"xi", 0x03be},
    {"oplus", 0x2295},
    {"pi", 0x03c0},
    {"Uuml", 0x00dc},
    {"epsilon", 0x03b5},
    {"zwj", 0x200d},
    {"zwnj", 0x200c},
    {"cedil", 0x00b8},
    {"frac14", 0x00bc},
    {"upsilon", 0x03c5},
    {"frac34", 0x00be},
    {"Xi", 0x039e},
    {"deg", 0x00b0},
    {"spades", 0x2660},
    {"thetasym", 0x03d1},
    {"yuml", 0x00ff},
    {"real", 0x211c},
    {"ndash", 0x2013},
    {"lfloor", 0x230a},
    {"Delta", 0x0394},
    {"Pi", 0x03a0},
    {"Auml", 0x00c4},
    {"Iuml", 0x00cf},
    {"AElig", 0x00c6},
    {"lsaquo", 0x2039},
    {"circ", 0x02c6},
    {"frac12", 0x00bd},
    {"Epsilon", 0x0395},
    {"hArr", 0x21d4},
    {"delta", 0x03b4},
    {"egrave", 0x00e8},
    {"Beta", 0x0392},
    {"ugrave", 0x00f9},
    {"piv", 0x03d6},
    {"igrave", 0x00ec},
    {"Upsilon", 0x03a5},
    {"permil", 0x2030},
    {"ograve", 0x00f2},
    {"gamma", 0x03b3},
    {"frasl", 0x2044},
    {"Egrave", 0x00c8},
    {"oelig", 0x0153},
    {"Ograve", 0x00d2},
    {"tilde", 0x02dc},
    {"forall", 0x2200},
    {"divide", 0x00f7},
    {"agrave", 0x00e0},
    {"fnof", 0x0192},
    {"Ugrave", 0x00d9},
    {"mdash", 0x2014},
    {"upsih", 0x03d2},
    {"sim", 0x223c},
    {"aelig", 0x00e6},
    {"minus", 0x2212},
    {"oslash", 0x00f8},
    {"times", 0x00d7},
    {"micro", 0x00b5},
    {"Agrave", 0x00c0},
    {"Igrave", 0x00cc},
    {"alpha", 0x03b1},
    {"Oslash", 0x00d8},
    {"middot", 0x00b7},
    {"Alpha", 0x0391},
    {"diams", 0x2666},
    {"hearts", 0x2665},
    {"alefsym", 0x2135},
    {"Sigma", 0x03a3},
    {"hellip", 0x2026},
    {"sigma", 0x03c3},
    {"sigmaf", 0x03c2}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,   0,  -1,
     -1,  -1,  -1,   1,   2,  -1,  -1,  -1,   3,   4,
      5,   6,  -1,   7,   8,  -1,  -1,  -1,   9,  10,
     -1,  -1,  -1,  -1,  11,  -1,  -1,  -1,  12,  13,
     -1,  -1,  -1,  14,  15,  16,  -1,  -1,  17,  -1,
     -1,  18,  -1,  19,  -1,  -1,  20,  -1,  21,  22,
     23,  24,  25,  26,  -1,  27,  -1,  28,  29,  30,
     31,  32,  33,  34,  -1,  35,  36,  37,  38,  -1,
     -1,  39,  40,  41,  42,  43,  -1,  -1,  44,  45,
     46,  47,  48,  49,  50,  -1,  -1,  51,  52,  -1,
     -1,  -1,  -1,  -1,  53,  54,  55,  -1,  56,  57,
     58,  59,  60,  -1,  61,  62,  -1,  -1,  -1,  63,
     64,  65,  -1,  66,  67,  68,  -1,  -1,  69,  70,
     71,  -1,  -1,  72,  73,  74,  75,  76,  77,  78,
     79,  80,  81,  82,  83,  84,  85,  -1,  -1,  86,
     87,  -1,  -1,  -1,  88,  89,  90,  -1,  -1,  91,
     92,  93,  -1,  94,  95,  96,  -1,  -1,  -1,  97,
     98,  99,  -1,  -1, 100, 101,  -1,  -1,  -1, 102,
    103, 104,  -1, 105, 106,  -1, 107,  -1,  -1, 108,
     -1, 109,  -1,  -1, 110, 111, 112,  -1,  -1,  -1,
    113,  -1, 114,  -1,  -1, 115, 116,  -1,  -1,  -1,
     -1, 117,  -1,  -1,  -1, 118,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 119, 120,  -1,  -1, 121,
    122, 123, 124,  -1, 125, 126,  -1,  -1,  -1,  -1,
    127,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 128,
     -1, 129,  -1, 130, 131, 132, 133,  -1, 134, 135,
    136,  -1,  -1,  -1, 137, 138, 139,  -1,  -1,  -1,
    140,  -1,  -1, 141, 142, 143, 144,  -1, 145,  -1,
    146, 147,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    148,  -1,  -1,  -1, 149, 150, 151,  -1,  -1,  -1,
    152,  -1,  -1, 153,  -1, 154, 155,  -1,  -1, 156,
     -1,  -1,  -1,  -1, 157,  -1, 158,  -1,  -1, 159,
    160,  -1,  -1,  -1, 161,  -1,  -1,  -1,  -1, 162,
    163, 164,  -1,  -1, 165,  -1,  -1, 166,  -1, 167,
     -1, 168,  -1,  -1, 169,  -1,  -1,  -1,  -1, 170,
    171, 172,  -1, 173, 174, 175, 176,  -1,  -1, 177,
     -1,  -1,  -1,  -1, 178, 179,  -1,  -1,  -1, 180,
    181,  -1,  -1,  -1, 182, 183,  -1,  -1,  -1, 184,
    185,  -1, 186,  -1,  -1, 187,  -1,  -1,  -1,  -1,
     -1, 188, 189, 190, 191,  -1,  -1, 192,  -1,  -1,
    193,  -1, 194,  -1, 195,  -1,  -1, 196, 197, 198,
    199, 200, 201,  -1,  -1,  -1, 202, 203, 204,  -1,
     -1, 205,  -1, 206,  -1,  -1,  -1,  -1,  -1, 207,
     -1,  -1,  -1,  -1, 208, 209, 210,  -1,  -1,  -1,
    211,  -1, 212,  -1, 213,  -1,  -1,  -1,  -1, 214,
    215, 216,  -1,  -1, 217,  -1,  -1,  -1,  -1,  -1,
     -1, 218, 219,  -1, 220,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 221, 222,  -1,  -1, 223,
     -1, 224,  -1, 225,  -1,  -1, 226,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 227,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 228,  -1,  -1,  -1,  -1, 229,  -1,  -1,  -1,
    230,  -1,  -1,  -1,  -1, 231,  -1,  -1,  -1,  -1,
     -1, 232,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    233,  -1,  -1,  -1,  -1,  -1, 234,  -1,  -1,  -1,
    235, 236,  -1,  -1,  -1,  -1, 237,  -1,  -1,  -1,
     -1, 238,  -1,  -1, 239,  -1,  -1,  -1,  -1,  -1,
     -1, 240,  -1,  -1,  -1, 241,  -1,  -1,  -1,  -1,
    242,  -1,  -1, 243,  -1, 244,  -1,  -1,  -1,  -1,
    245,  -1,  -1,  -1,  -1,  -1, 246,  -1,  -1,  -1,
    247,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    248, 249,  -1,  -1,  -1,  -1, 250,  -1,  -1,  -1,
    251,  -1,  -1,  -1,  -1,  -1, 252,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 253,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    254,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 255,  -1,  -1,  -1,  -1,
     -1, 256,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 257,  -1,  -1, 258,  -1,  -1,  -1,  -1,
     -1, 259,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    260,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 261
  };

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct Entity *
findEntity (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &wordlist[index];
            }
        }
    }
  return 0;
}

