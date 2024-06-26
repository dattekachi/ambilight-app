/* PixelShaderHyperHDR.h
*
*  MIT License
*
*  Copyright (c) 2020-2023 awawa-dev
*
*  Project homesite: https://ambilightled.com
*
*  Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
*
*  The above copyright notice and this permission notice shall be included in all
*  copies or substantial portions of the Software.

*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
*  SOFTWARE.
 */

const BYTE g_PixelShaderHyperHDR[] =
{
	 68,  88,  66,  67, 177, 212,
	244, 113, 119, 191, 171, 199,
	136,   6, 209, 134, 195, 252,
	 26, 229,   1,   0,   0,   0,
	208,   3,   0,   0,   5,   0,
	  0,   0,  52,   0,   0,   0,
	248,   0,   0,   0,  80,   1,
	  0,   0, 132,   1,   0,   0,
	 52,   3,   0,   0,  82,  68,
	 69,  70, 188,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   2,   0,   0,   0,
	 60,   0,   0,   0,   0,   5,
	255, 255,   0,   1,   0,   0,
	147,   0,   0,   0,  82,  68,
	 49,  49,  60,   0,   0,   0,
	 24,   0,   0,   0,  32,   0,
	  0,   0,  40,   0,   0,   0,
	 36,   0,   0,   0,  12,   0,
	  0,   0,   0,   0,   0,   0,
	124,   0,   0,   0,   3,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  1,   0,   0,   0,   1,   0,
	  0,   0, 139,   0,   0,   0,
	  2,   0,   0,   0,   5,   0,
	  0,   0,   4,   0,   0,   0,
	255, 255, 255, 255,   0,   0,
	  0,   0,   1,   0,   0,   0,
	 13,   0,   0,   0,  71, 101,
	110, 101, 114, 105,  99,  83,
	 97, 109, 112, 108, 101, 114,
	  0, 116, 120,  73, 110, 112,
	117, 116,   0,  77, 105,  99,
	114, 111, 115, 111, 102, 116,
	 32,  40,  82,  41,  32,  72,
	 76,  83,  76,  32,  83, 104,
	 97, 100, 101, 114,  32,  67,
	111, 109, 112, 105, 108, 101,
	114,  32,  49,  48,  46,  49,
	  0, 171,  73,  83,  71,  78,
	 80,   0,   0,   0,   2,   0,
	  0,   0,   8,   0,   0,   0,
	 56,   0,   0,   0,   0,   0,
	  0,   0,   1,   0,   0,   0,
	  3,   0,   0,   0,   0,   0,
	  0,   0,  15,   0,   0,   0,
	 68,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  3,   0,   0,   0,   1,   0,
	  0,   0,   7,   7,   0,   0,
	 83,  86,  95,  80,  79,  83,
	 73,  84,  73,  79,  78,   0,
	 84,  69,  88,  67,  79,  79,
	 82,  68,   0, 171, 171, 171,
	 79,  83,  71,  78,  44,   0,
	  0,   0,   1,   0,   0,   0,
	  8,   0,   0,   0,  32,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   3,   0,
	  0,   0,   0,   0,   0,   0,
	 15,   0,   0,   0,  83,  86,
	 95,  84,  97, 114, 103, 101,
	116,   0, 171, 171,  83,  72,
	 69,  88, 168,   1,   0,   0,
	 80,   0,   0,   0, 106,   0,
	  0,   0, 106,   8,   0,   1,
	 90,   0,   0,   3,   0,  96,
	 16,   0,   0,   0,   0,   0,
	 88,  24,   0,   4,   0, 112,
	 16,   0,   0,   0,   0,   0,
	 85,  85,   0,   0,  98,  16,
	  0,   3, 114,  16,  16,   0,
	  1,   0,   0,   0, 101,   0,
	  0,   3, 242,  32,  16,   0,
	  0,   0,   0,   0, 104,   0,
	  0,   2,   3,   0,   0,   0,
	 69,   0,   0, 139, 194,   0,
	  0, 128,  67,  85,  21,   0,
	114,   0,  16,   0,   0,   0,
	  0,   0,  70,  16,  16,   0,
	  1,   0,   0,   0,  70, 126,
	 16,   0,   0,   0,   0,   0,
	  0,  96,  16,   0,   0,   0,
	  0,   0,  56,   0,   0,   7,
	114,   0,  16,   0,   0,   0,
	  0,   0,  70,   2,  16,   0,
	  0,   0,   0,   0, 166,  26,
	 16,   0,   1,   0,   0,   0,
	 47,   0,   0,   5, 114,   0,
	 16,   0,   1,   0,   0,   0,
	 70,   2,  16,   0,   0,   0,
	  0,   0,  56,   0,   0,  10,
	114,   0,  16,   0,   1,   0,
	  0,   0,  70,   2,  16,   0,
	  1,   0,   0,   0,   2,  64,
	  0,   0, 102, 102, 230,  62,
	102, 102, 230,  62, 102, 102,
	230,  62,   0,   0,   0,   0,
	 25,   0,   0,   5, 114,   0,
	 16,   0,   1,   0,   0,   0,
	 70,   2,  16,   0,   1,   0,
	  0,   0,  50,   0,   0,  15,
	114,   0,  16,   0,   1,   0,
	  0,   0,  70,   2,  16,   0,
	  1,   0,   0,   0,   2,  64,
	  0,   0,   8, 172, 140,  63,
	  8, 172, 140,  63,   8, 172,
	140,  63,   0,   0,   0,   0,
	  2,  64,   0,   0, 131, 192,
	202, 189, 131, 192, 202, 189,
	131, 192, 202, 189,   0,   0,
	  0,   0,  49,   0,   0,  10,
	114,   0,  16,   0,   2,   0,
	  0,   0,  70,   2,  16,   0,
	  0,   0,   0,   0,   2,  64,
	  0,   0, 188, 116, 147,  60,
	188, 116, 147,  60, 188, 116,
	147,  60,   0,   0,   0,   0,
	 56,   0,   0,  10, 114,   0,
	 16,   0,   0,   0,   0,   0,
	 70,   2,  16,   0,   0,   0,
	  0,   0,   2,  64,   0,   0,
	  0,   0, 144,  64,   0,   0,
	144,  64,   0,   0, 144,  64,
	  0,   0,   0,   0,  55,   0,
	  0,   9, 114,  32,  16,   0,
	  0,   0,   0,   0,  70,   2,
	 16,   0,   2,   0,   0,   0,
	 70,   2,  16,   0,   0,   0,
	  0,   0,  70,   2,  16,   0,
	  1,   0,   0,   0,  54,   0,
	  0,   5, 130,  32,  16,   0,
	  0,   0,   0,   0,   1,  64,
	  0,   0,   0,   0,   0,   0,
	 62,   0,   0,   1,  83,  84,
	 65,  84, 148,   0,   0,   0,
	 11,   0,   0,   0,   3,   0,
	  0,   0,   0,   0,   0,   0,
	  2,   0,   0,   0,   7,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   1,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   1,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   1,   0,
	  0,   0,   1,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0
};
