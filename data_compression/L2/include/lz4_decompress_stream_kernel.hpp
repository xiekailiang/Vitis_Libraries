/*
 * (c) Copyright 2019 Xilinx, Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#ifndef _XFCOMPRESSION_LZ4_DECOMPRESS_STREAM_KERNEL_HPP_
#define _XFCOMPRESSION_LZ4_DECOMPRESS_STREAM_KERNEL_HPP_

/**
 * @file lz4_decompress_stream_kernel.hpp
 * @brief Header for LZ4 decompression streaming kernel.
 *
 * This file is part of Vitis Data Compression Library.
 */

#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include "hls_stream.h"
#include "ap_axi_sdata.h"
#include <ap_int.h>

#include "kernel_stream_utils.hpp"
#include "lz_decompress.hpp"
#include "lz_optional.hpp"
#include "lz4_decompress.hpp"

//#define BIT 8

// typedef ap_uint<BIT> uintVt;

// Kernel top functions
extern "C" {

/**
 * @brief LZ4 decompression kernel to kernel streaming kernel
 *
 * @param inaxistream   Input axi stream
 * @param outaxistream  Output axi stream
 * @param inputSize     Input compressed data size
 * @param outputSize    Output decompressed data size
 */
void xilLz4DecompressStream(hls::stream<xf::compression::kStream8b_t>& inaxistream,
                            hls::stream<xf::compression::kStream8b_t>& outaxistream,
                            uint32_t inputSize,
                            uint32_t outputSize);
}

#undef BIT

#endif // _XFCOMPRESSION_LZ4_DECOMPRESS_KERNEL_HPP_
