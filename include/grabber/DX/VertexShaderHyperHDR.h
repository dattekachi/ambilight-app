/* VertexShaderHyperHDR.h
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

const BYTE g_VertexShaderHyperHDR[] =
{
	 68,  88,  66,  67, 145,  11,
	120,  74,  74,  90, 225, 194,
	 52,   8, 115, 192, 196,  34,
	123, 175,   1,   0,   0,   0,
	164,   4,   0,   0,   5,   0,
	  0,   0,  52,   0,   0,   0,
	 60,   1,   0,   0, 112,   1,
	  0,   0, 200,   1,   0,   0,
	  8,   4,   0,   0,  82,  68,
	 69,  70,   0,   1,   0,   0,
	  1,   0,   0,   0, 100,   0,
	  0,   0,   1,   0,   0,   0,
	 60,   0,   0,   0,   0,   5,
	254, 255,   0,   1,   0,   0,
	216,   0,   0,   0,  82,  68,
	 49,  49,  60,   0,   0,   0,
	 24,   0,   0,   0,  32,   0,
	  0,   0,  40,   0,   0,   0,
	 36,   0,   0,   0,  12,   0,
	  0,   0,   0,   0,   0,   0,
	 92,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  1,   0,   0,   0,   1,   0,
	  0,   0,  80,  97, 114,  97,
	109, 115,   0, 171,  92,   0,
	  0,   0,   1,   0,   0,   0,
	124,   0,   0,   0,  16,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0, 164,   0,
	  0,   0,   0,   0,   0,   0,
	 16,   0,   0,   0,   2,   0,
	  0,   0, 180,   0,   0,   0,
	  0,   0,   0,   0, 255, 255,
	255, 255,   0,   0,   0,   0,
	255, 255, 255, 255,   0,   0,
	  0,   0, 112,  97, 114,  97,
	109, 115,   0, 102, 108, 111,
	 97, 116,  52,   0, 171, 171,
	  1,   0,   3,   0,   1,   0,
	  4,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0, 171,   0,   0,   0,
	 77, 105,  99, 114, 111, 115,
	111, 102, 116,  32,  40,  82,
	 41,  32,  72,  76,  83,  76,
	 32,  83, 104,  97, 100, 101,
	114,  32,  67, 111, 109, 112,
	105, 108, 101, 114,  32,  49,
	 48,  46,  49,   0,  73,  83,
	 71,  78,  44,   0,   0,   0,
	  1,   0,   0,   0,   8,   0,
	  0,   0,  32,   0,   0,   0,
	  0,   0,   0,   0,   6,   0,
	  0,   0,   1,   0,   0,   0,
	  0,   0,   0,   0,   1,   1,
	  0,   0,  83,  86,  95,  86,
	 69,  82,  84,  69,  88,  73,
	 68,   0,  79,  83,  71,  78,
	 80,   0,   0,   0,   2,   0,
	  0,   0,   8,   0,   0,   0,
	 56,   0,   0,   0,   0,   0,
	  0,   0,   1,   0,   0,   0,
	  3,   0,   0,   0,   0,   0,
	  0,   0,  15,   0,   0,   0,
	 68,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  3,   0,   0,   0,   1,   0,
	  0,   0,   7,   8,   0,   0,
	 83,  86,  95,  80,  79,  83,
	 73,  84,  73,  79,  78,   0,
	 84,  69,  88,  67,  79,  79,
	 82,  68,   0, 171, 171, 171,
	 83,  72,  69,  88,  56,   2,
	  0,   0,  80,   0,   1,   0,
	142,   0,   0,   0, 106,   8,
	  0,   1,  89,   0,   0,   4,
	 70, 142,  32,   0,   0,   0,
	  0,   0,   1,   0,   0,   0,
	 96,   0,   0,   4,  18,  16,
	 16,   0,   0,   0,   0,   0,
	  6,   0,   0,   0, 103,   0,
	  0,   4, 242,  32,  16,   0,
	  0,   0,   0,   0,   1,   0,
	  0,   0, 101,   0,   0,   3,
	114,  32,  16,   0,   1,   0,
	  0,   0, 104,   0,   0,   2,
	  1,   0,   0,   0,  54,   0,
	  0,   8, 194,  32,  16,   0,
	  0,   0,   0,   0,   2,  64,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0, 128,  63,
	  1,   0,   0,   7,  18,   0,
	 16,   0,   0,   0,   0,   0,
	 10,  16,  16,   0,   0,   0,
	  0,   0,   1,  64,   0,   0,
	  1,   0,   0,   0,  55,   0,
	  0,   9,  18,  32,  16,   0,
	  0,   0,   0,   0,  10,   0,
	 16,   0,   0,   0,   0,   0,
	  1,  64,   0,   0,   0,   0,
	128,  63,   1,  64,   0,   0,
	  0,   0, 128, 191,  86,   0,
	  0,   5,  18,  32,  16,   0,
	  1,   0,   0,   0,  10,   0,
	 16,   0,   0,   0,   0,   0,
	138,   0,   0,   9,  18,   0,
	 16,   0,   0,   0,   0,   0,
	  1,  64,   0,   0,   1,   0,
	  0,   0,   1,  64,   0,   0,
	  1,   0,   0,   0,  10,  16,
	 16,   0,   0,   0,   0,   0,
	 55,   0,   0,   9,  34,  32,
	 16,   0,   0,   0,   0,   0,
	 10,   0,  16,   0,   0,   0,
	  0,   0,   1,  64,   0,   0,
	  0,   0, 128, 191,   1,  64,
	  0,   0,   0,   0, 128,  63,
	 86,   0,   0,   5,  34,  32,
	 16,   0,   1,   0,   0,   0,
	 10,   0,  16,   0,   0,   0,
	  0,   0,   0,   0,   0,   8,
	 18,   0,  16,   0,   0,   0,
	  0,   0,  26, 128,  32,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   1,  64,   0,   0,
	  0, 208, 150, 193,  56,   0,
	  0,   7,  18,   0,  16,   0,
	  0,   0,   0,   0,  10,   0,
	 16,   0,   0,   0,   0,   0,
	  1,  64,   0,   0,   0,   0,
	 86,  63,  14,   0,   0,   9,
	 18,   0,  16,   0,   0,   0,
	  0,   0,  10,   0,  16, 128,
	 65,   0,   0,   0,   0,   0,
	  0,   0,  10, 128,  32,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,  49,   0,   0,   7,
	 34,   0,  16,   0,   0,   0,
	  0,   0,  10,   0,  16,   0,
	  0,   0,   0,   0,   1,  64,
	  0,   0, 154, 153,  53,  65,
	 49,   0,   0,   7,  18,   0,
	 16,   0,   0,   0,   0,   0,
	  1,  64,   0,   0, 199,  75,
	159,  65,  10,   0,  16,   0,
	  0,   0,   0,   0,  60,   0,
	  0,   7,  18,   0,  16,   0,
	  0,   0,   0,   0,  10,   0,
	 16,   0,   0,   0,   0,   0,
	 26,   0,  16,   0,   0,   0,
	  0,   0,  14,   0,   0,   8,
	 34,   0,  16,   0,   0,   0,
	  0,   0,   1,  64,   0,   0,
	  0,   0, 160,  66,  10, 128,
	 32,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,  56,   0,
	  0,   7,  66,   0,  16,   0,
	  0,   0,   0,   0,  26,   0,
	 16,   0,   0,   0,   0,   0,
	  1,  64,   0,   0, 238, 105,
	  4,  59,  55,   0,   0,   9,
	 66,  32,  16,   0,   1,   0,
	  0,   0,  10,   0,  16,   0,
	  0,   0,   0,   0,  42,   0,
	 16,   0,   0,   0,   0,   0,
	 26,   0,  16,   0,   0,   0,
	  0,   0,  62,   0,   0,   1,
	 83,  84,  65,  84, 148,   0,
	  0,   0,  17,   0,   0,   0,
	  1,   0,   0,   0,   0,   0,
	  0,   0,   3,   0,   0,   0,
	  7,   0,   0,   0,   0,   0,
	  0,   0,   2,   0,   0,   0,
	  1,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  1,   0,   0,   0,   3,   0,
	  0,   0,   2,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0
};
