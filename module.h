// Copyright (c) 2017 Abdurrahman Avcı <abdurrahmanavci@gmail.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include <stdio.h>
#include <jpeglib.h>

#undef jpeg_create_compress
void jpeg_create_compress(j_compress_ptr info) {
    jpeg_CreateCompress(info, JPEG_LIB_VERSION, (size_t) sizeof(struct jpeg_compress_struct));
}

#undef jpeg_create_decompress
void jpeg_create_decompress(j_decompress_ptr info) {
    jpeg_CreateDecompress(info, JPEG_LIB_VERSION, (size_t) sizeof(struct jpeg_decompress_struct));
}
