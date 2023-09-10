/*
Copyright (c) 2019, University of North Carolina at Charlotte All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Authors: Reza Baharani    - Transformative Computer Systems Architecture Research (TeCSAR) at UNC Charlotte
Steven Furgurson - Transformative Computer Systems Architecture Research (TeCSAR) at UNC Charlotte

This file has been generated automatically. DO NOT MODIFY IT.

*/



#ifndef __NET_SPECT__HEADER__
#define __NET_SPECT__HEADER__


#define __FEATURES_0_0__INPUT_CHAN__                3
#define __FEATURES_0_0__INPUT_SIZE__                160
#define __FEATURES_0_0__OUTPUT_CHAN__               24
#define __FEATURES_0_0__OUTPUT_SIZE__               80
#define __FEATURES_0_0__KERNEL_SIZE__               3
#define __FEATURES_0_0__STRIDE_SIZE__               2
#define __FEATURES_0_0__PADDING_SIZE__              1
#define __FEATURES_1_CONV_0__INPUT_CHAN__           24
#define __FEATURES_1_CONV_0__INPUT_SIZE__           80
#define __FEATURES_1_CONV_0__OUTPUT_CHAN__          24
#define __FEATURES_1_CONV_0__OUTPUT_SIZE__          80
#define __FEATURES_1_CONV_0__KERNEL_SIZE__          3
#define __FEATURES_1_CONV_0__STRIDE_SIZE__          1
#define __FEATURES_1_CONV_0__PADDING_SIZE__         1
#define __FEATURES_1_CONV_2__INPUT_CHAN__           24
#define __FEATURES_1_CONV_2__INPUT_SIZE__           80
#define __FEATURES_1_CONV_2__OUTPUT_CHAN__          16
#define __FEATURES_1_CONV_2__OUTPUT_SIZE__          80
#define __FEATURES_1_CONV_2__KERNEL_SIZE__          1
#define __FEATURES_1_CONV_2__STRIDE_SIZE__          1
#define __FEATURES_1_CONV_2__PADDING_SIZE__         0
#define __FEATURES_2_CONV_0__INPUT_CHAN__           16
#define __FEATURES_2_CONV_0__INPUT_SIZE__           80
#define __FEATURES_2_CONV_0__OUTPUT_CHAN__          96
#define __FEATURES_2_CONV_0__OUTPUT_SIZE__          80
#define __FEATURES_2_CONV_0__KERNEL_SIZE__          1
#define __FEATURES_2_CONV_0__STRIDE_SIZE__          1
#define __FEATURES_2_CONV_0__PADDING_SIZE__         0
#define __FEATURES_2_CONV_2__INPUT_CHAN__           96
#define __FEATURES_2_CONV_2__INPUT_SIZE__           80
#define __FEATURES_2_CONV_2__OUTPUT_CHAN__          96
#define __FEATURES_2_CONV_2__OUTPUT_SIZE__          40
#define __FEATURES_2_CONV_2__KERNEL_SIZE__          3
#define __FEATURES_2_CONV_2__STRIDE_SIZE__          2
#define __FEATURES_2_CONV_2__PADDING_SIZE__         1
#define __FEATURES_2_CONV_4__INPUT_CHAN__           96
#define __FEATURES_2_CONV_4__INPUT_SIZE__           40
#define __FEATURES_2_CONV_4__OUTPUT_CHAN__          24
#define __FEATURES_2_CONV_4__OUTPUT_SIZE__          40
#define __FEATURES_2_CONV_4__KERNEL_SIZE__          1
#define __FEATURES_2_CONV_4__STRIDE_SIZE__          1
#define __FEATURES_2_CONV_4__PADDING_SIZE__         0
#define __FEATURES_3_CONV_0__INPUT_CHAN__           24
#define __FEATURES_3_CONV_0__INPUT_SIZE__           40
#define __FEATURES_3_CONV_0__OUTPUT_CHAN__          144
#define __FEATURES_3_CONV_0__OUTPUT_SIZE__          40
#define __FEATURES_3_CONV_0__KERNEL_SIZE__          1
#define __FEATURES_3_CONV_0__STRIDE_SIZE__          1
#define __FEATURES_3_CONV_0__PADDING_SIZE__         0
#define __FEATURES_3_CONV_2__INPUT_CHAN__           144
#define __FEATURES_3_CONV_2__INPUT_SIZE__           40
#define __FEATURES_3_CONV_2__OUTPUT_CHAN__          144
#define __FEATURES_3_CONV_2__OUTPUT_SIZE__          40
#define __FEATURES_3_CONV_2__KERNEL_SIZE__          3
#define __FEATURES_3_CONV_2__STRIDE_SIZE__          1
#define __FEATURES_3_CONV_2__PADDING_SIZE__         1
#define __FEATURES_3_CONV_4__INPUT_CHAN__           144
#define __FEATURES_3_CONV_4__INPUT_SIZE__           40
#define __FEATURES_3_CONV_4__OUTPUT_CHAN__          24
#define __FEATURES_3_CONV_4__OUTPUT_SIZE__          40
#define __FEATURES_3_CONV_4__KERNEL_SIZE__          1
#define __FEATURES_3_CONV_4__STRIDE_SIZE__          1
#define __FEATURES_3_CONV_4__PADDING_SIZE__         0
#define __FEATURES_4_CONV_0__INPUT_CHAN__           24
#define __FEATURES_4_CONV_0__INPUT_SIZE__           40
#define __FEATURES_4_CONV_0__OUTPUT_CHAN__          144
#define __FEATURES_4_CONV_0__OUTPUT_SIZE__          40
#define __FEATURES_4_CONV_0__KERNEL_SIZE__          1
#define __FEATURES_4_CONV_0__STRIDE_SIZE__          1
#define __FEATURES_4_CONV_0__PADDING_SIZE__         0
#define __FEATURES_4_CONV_2__INPUT_CHAN__           144
#define __FEATURES_4_CONV_2__INPUT_SIZE__           40
#define __FEATURES_4_CONV_2__OUTPUT_CHAN__          144
#define __FEATURES_4_CONV_2__OUTPUT_SIZE__          20
#define __FEATURES_4_CONV_2__KERNEL_SIZE__          3
#define __FEATURES_4_CONV_2__STRIDE_SIZE__          2
#define __FEATURES_4_CONV_2__PADDING_SIZE__         1
#define __FEATURES_4_CONV_4__INPUT_CHAN__           144
#define __FEATURES_4_CONV_4__INPUT_SIZE__           20
#define __FEATURES_4_CONV_4__OUTPUT_CHAN__          24
#define __FEATURES_4_CONV_4__OUTPUT_SIZE__          20
#define __FEATURES_4_CONV_4__KERNEL_SIZE__          1
#define __FEATURES_4_CONV_4__STRIDE_SIZE__          1
#define __FEATURES_4_CONV_4__PADDING_SIZE__         0
#define __FEATURES_5_CONV_0__INPUT_CHAN__           24
#define __FEATURES_5_CONV_0__INPUT_SIZE__           20
#define __FEATURES_5_CONV_0__OUTPUT_CHAN__          144
#define __FEATURES_5_CONV_0__OUTPUT_SIZE__          20
#define __FEATURES_5_CONV_0__KERNEL_SIZE__          1
#define __FEATURES_5_CONV_0__STRIDE_SIZE__          1
#define __FEATURES_5_CONV_0__PADDING_SIZE__         0
#define __FEATURES_5_CONV_2__INPUT_CHAN__           144
#define __FEATURES_5_CONV_2__INPUT_SIZE__           20
#define __FEATURES_5_CONV_2__OUTPUT_CHAN__          144
#define __FEATURES_5_CONV_2__OUTPUT_SIZE__          20
#define __FEATURES_5_CONV_2__KERNEL_SIZE__          3
#define __FEATURES_5_CONV_2__STRIDE_SIZE__          1
#define __FEATURES_5_CONV_2__PADDING_SIZE__         1
#define __FEATURES_5_CONV_4__INPUT_CHAN__           144
#define __FEATURES_5_CONV_4__INPUT_SIZE__           20
#define __FEATURES_5_CONV_4__OUTPUT_CHAN__          24
#define __FEATURES_5_CONV_4__OUTPUT_SIZE__          20
#define __FEATURES_5_CONV_4__KERNEL_SIZE__          1
#define __FEATURES_5_CONV_4__STRIDE_SIZE__          1
#define __FEATURES_5_CONV_4__PADDING_SIZE__         0
#define __FEATURES_6_CONV_0__INPUT_CHAN__           24
#define __FEATURES_6_CONV_0__INPUT_SIZE__           20
#define __FEATURES_6_CONV_0__OUTPUT_CHAN__          144
#define __FEATURES_6_CONV_0__OUTPUT_SIZE__          20
#define __FEATURES_6_CONV_0__KERNEL_SIZE__          1
#define __FEATURES_6_CONV_0__STRIDE_SIZE__          1
#define __FEATURES_6_CONV_0__PADDING_SIZE__         0
#define __FEATURES_6_CONV_2__INPUT_CHAN__           144
#define __FEATURES_6_CONV_2__INPUT_SIZE__           20
#define __FEATURES_6_CONV_2__OUTPUT_CHAN__          144
#define __FEATURES_6_CONV_2__OUTPUT_SIZE__          20
#define __FEATURES_6_CONV_2__KERNEL_SIZE__          3
#define __FEATURES_6_CONV_2__STRIDE_SIZE__          1
#define __FEATURES_6_CONV_2__PADDING_SIZE__         1
#define __FEATURES_6_CONV_4__INPUT_CHAN__           144
#define __FEATURES_6_CONV_4__INPUT_SIZE__           20
#define __FEATURES_6_CONV_4__OUTPUT_CHAN__          24
#define __FEATURES_6_CONV_4__OUTPUT_SIZE__          20
#define __FEATURES_6_CONV_4__KERNEL_SIZE__          1
#define __FEATURES_6_CONV_4__STRIDE_SIZE__          1
#define __FEATURES_6_CONV_4__PADDING_SIZE__         0
#define __FEATURES_7_CONV_0__INPUT_CHAN__           24
#define __FEATURES_7_CONV_0__INPUT_SIZE__           20
#define __FEATURES_7_CONV_0__OUTPUT_CHAN__          144
#define __FEATURES_7_CONV_0__OUTPUT_SIZE__          20
#define __FEATURES_7_CONV_0__KERNEL_SIZE__          1
#define __FEATURES_7_CONV_0__STRIDE_SIZE__          1
#define __FEATURES_7_CONV_0__PADDING_SIZE__         0
#define __FEATURES_7_CONV_2__INPUT_CHAN__           144
#define __FEATURES_7_CONV_2__INPUT_SIZE__           20
#define __FEATURES_7_CONV_2__OUTPUT_CHAN__          144
#define __FEATURES_7_CONV_2__OUTPUT_SIZE__          10
#define __FEATURES_7_CONV_2__KERNEL_SIZE__          3
#define __FEATURES_7_CONV_2__STRIDE_SIZE__          2
#define __FEATURES_7_CONV_2__PADDING_SIZE__         1
#define __FEATURES_7_CONV_4__INPUT_CHAN__           144
#define __FEATURES_7_CONV_4__INPUT_SIZE__           10
#define __FEATURES_7_CONV_4__OUTPUT_CHAN__          48
#define __FEATURES_7_CONV_4__OUTPUT_SIZE__          10
#define __FEATURES_7_CONV_4__KERNEL_SIZE__          1
#define __FEATURES_7_CONV_4__STRIDE_SIZE__          1
#define __FEATURES_7_CONV_4__PADDING_SIZE__         0
#define __FEATURES_8_CONV_0__INPUT_CHAN__           48
#define __FEATURES_8_CONV_0__INPUT_SIZE__           10
#define __FEATURES_8_CONV_0__OUTPUT_CHAN__          288
#define __FEATURES_8_CONV_0__OUTPUT_SIZE__          10
#define __FEATURES_8_CONV_0__KERNEL_SIZE__          1
#define __FEATURES_8_CONV_0__STRIDE_SIZE__          1
#define __FEATURES_8_CONV_0__PADDING_SIZE__         0
#define __FEATURES_8_CONV_2__INPUT_CHAN__           288
#define __FEATURES_8_CONV_2__INPUT_SIZE__           10
#define __FEATURES_8_CONV_2__OUTPUT_CHAN__          288
#define __FEATURES_8_CONV_2__OUTPUT_SIZE__          10
#define __FEATURES_8_CONV_2__KERNEL_SIZE__          3
#define __FEATURES_8_CONV_2__STRIDE_SIZE__          1
#define __FEATURES_8_CONV_2__PADDING_SIZE__         1
#define __FEATURES_8_CONV_4__INPUT_CHAN__           288
#define __FEATURES_8_CONV_4__INPUT_SIZE__           10
#define __FEATURES_8_CONV_4__OUTPUT_CHAN__          48
#define __FEATURES_8_CONV_4__OUTPUT_SIZE__          10
#define __FEATURES_8_CONV_4__KERNEL_SIZE__          1
#define __FEATURES_8_CONV_4__STRIDE_SIZE__          1
#define __FEATURES_8_CONV_4__PADDING_SIZE__         0
#define __FEATURES_9_CONV_0__INPUT_CHAN__           48
#define __FEATURES_9_CONV_0__INPUT_SIZE__           10
#define __FEATURES_9_CONV_0__OUTPUT_CHAN__          288
#define __FEATURES_9_CONV_0__OUTPUT_SIZE__          10
#define __FEATURES_9_CONV_0__KERNEL_SIZE__          1
#define __FEATURES_9_CONV_0__STRIDE_SIZE__          1
#define __FEATURES_9_CONV_0__PADDING_SIZE__         0
#define __FEATURES_9_CONV_2__INPUT_CHAN__           288
#define __FEATURES_9_CONV_2__INPUT_SIZE__           10
#define __FEATURES_9_CONV_2__OUTPUT_CHAN__          288
#define __FEATURES_9_CONV_2__OUTPUT_SIZE__          10
#define __FEATURES_9_CONV_2__KERNEL_SIZE__          3
#define __FEATURES_9_CONV_2__STRIDE_SIZE__          1
#define __FEATURES_9_CONV_2__PADDING_SIZE__         1
#define __FEATURES_9_CONV_4__INPUT_CHAN__           288
#define __FEATURES_9_CONV_4__INPUT_SIZE__           10
#define __FEATURES_9_CONV_4__OUTPUT_CHAN__          48
#define __FEATURES_9_CONV_4__OUTPUT_SIZE__          10
#define __FEATURES_9_CONV_4__KERNEL_SIZE__          1
#define __FEATURES_9_CONV_4__STRIDE_SIZE__          1
#define __FEATURES_9_CONV_4__PADDING_SIZE__         0
#define __FEATURES_10_CONV_0__INPUT_CHAN__          48
#define __FEATURES_10_CONV_0__INPUT_SIZE__          10
#define __FEATURES_10_CONV_0__OUTPUT_CHAN__         288
#define __FEATURES_10_CONV_0__OUTPUT_SIZE__         10
#define __FEATURES_10_CONV_0__KERNEL_SIZE__         1
#define __FEATURES_10_CONV_0__STRIDE_SIZE__         1
#define __FEATURES_10_CONV_0__PADDING_SIZE__        0
#define __FEATURES_10_CONV_2__INPUT_CHAN__          288
#define __FEATURES_10_CONV_2__INPUT_SIZE__          10
#define __FEATURES_10_CONV_2__OUTPUT_CHAN__         288
#define __FEATURES_10_CONV_2__OUTPUT_SIZE__         10
#define __FEATURES_10_CONV_2__KERNEL_SIZE__         3
#define __FEATURES_10_CONV_2__STRIDE_SIZE__         1
#define __FEATURES_10_CONV_2__PADDING_SIZE__        1
#define __FEATURES_10_CONV_4__INPUT_CHAN__          288
#define __FEATURES_10_CONV_4__INPUT_SIZE__          10
#define __FEATURES_10_CONV_4__OUTPUT_CHAN__         48
#define __FEATURES_10_CONV_4__OUTPUT_SIZE__         10
#define __FEATURES_10_CONV_4__KERNEL_SIZE__         1
#define __FEATURES_10_CONV_4__STRIDE_SIZE__         1
#define __FEATURES_10_CONV_4__PADDING_SIZE__        0
#define __FEATURES_11_CONV_0__INPUT_CHAN__          48
#define __FEATURES_11_CONV_0__INPUT_SIZE__          10
#define __FEATURES_11_CONV_0__OUTPUT_CHAN__         288
#define __FEATURES_11_CONV_0__OUTPUT_SIZE__         10
#define __FEATURES_11_CONV_0__KERNEL_SIZE__         1
#define __FEATURES_11_CONV_0__STRIDE_SIZE__         1
#define __FEATURES_11_CONV_0__PADDING_SIZE__        0
#define __FEATURES_11_CONV_2__INPUT_CHAN__          288
#define __FEATURES_11_CONV_2__INPUT_SIZE__          10
#define __FEATURES_11_CONV_2__OUTPUT_CHAN__         288
#define __FEATURES_11_CONV_2__OUTPUT_SIZE__         10
#define __FEATURES_11_CONV_2__KERNEL_SIZE__         3
#define __FEATURES_11_CONV_2__STRIDE_SIZE__         1
#define __FEATURES_11_CONV_2__PADDING_SIZE__        1
#define __FEATURES_11_CONV_4__INPUT_CHAN__          288
#define __FEATURES_11_CONV_4__INPUT_SIZE__          10
#define __FEATURES_11_CONV_4__OUTPUT_CHAN__         72
#define __FEATURES_11_CONV_4__OUTPUT_SIZE__         10
#define __FEATURES_11_CONV_4__KERNEL_SIZE__         1
#define __FEATURES_11_CONV_4__STRIDE_SIZE__         1
#define __FEATURES_11_CONV_4__PADDING_SIZE__        0
#define __FEATURES_12_CONV_0__INPUT_CHAN__          72
#define __FEATURES_12_CONV_0__INPUT_SIZE__          10
#define __FEATURES_12_CONV_0__OUTPUT_CHAN__         432
#define __FEATURES_12_CONV_0__OUTPUT_SIZE__         10
#define __FEATURES_12_CONV_0__KERNEL_SIZE__         1
#define __FEATURES_12_CONV_0__STRIDE_SIZE__         1
#define __FEATURES_12_CONV_0__PADDING_SIZE__        0
#define __FEATURES_12_CONV_2__INPUT_CHAN__          432
#define __FEATURES_12_CONV_2__INPUT_SIZE__          10
#define __FEATURES_12_CONV_2__OUTPUT_CHAN__         432
#define __FEATURES_12_CONV_2__OUTPUT_SIZE__         10
#define __FEATURES_12_CONV_2__KERNEL_SIZE__         3
#define __FEATURES_12_CONV_2__STRIDE_SIZE__         1
#define __FEATURES_12_CONV_2__PADDING_SIZE__        1
#define __FEATURES_12_CONV_4__INPUT_CHAN__          432
#define __FEATURES_12_CONV_4__INPUT_SIZE__          10
#define __FEATURES_12_CONV_4__OUTPUT_CHAN__         72
#define __FEATURES_12_CONV_4__OUTPUT_SIZE__         10
#define __FEATURES_12_CONV_4__KERNEL_SIZE__         1
#define __FEATURES_12_CONV_4__STRIDE_SIZE__         1
#define __FEATURES_12_CONV_4__PADDING_SIZE__        0
#define __FEATURES_13_CONV_0__INPUT_CHAN__          72
#define __FEATURES_13_CONV_0__INPUT_SIZE__          10
#define __FEATURES_13_CONV_0__OUTPUT_CHAN__         432
#define __FEATURES_13_CONV_0__OUTPUT_SIZE__         10
#define __FEATURES_13_CONV_0__KERNEL_SIZE__         1
#define __FEATURES_13_CONV_0__STRIDE_SIZE__         1
#define __FEATURES_13_CONV_0__PADDING_SIZE__        0
#define __FEATURES_13_CONV_2__INPUT_CHAN__          432
#define __FEATURES_13_CONV_2__INPUT_SIZE__          10
#define __FEATURES_13_CONV_2__OUTPUT_CHAN__         432
#define __FEATURES_13_CONV_2__OUTPUT_SIZE__         10
#define __FEATURES_13_CONV_2__KERNEL_SIZE__         3
#define __FEATURES_13_CONV_2__STRIDE_SIZE__         1
#define __FEATURES_13_CONV_2__PADDING_SIZE__        1
#define __FEATURES_13_CONV_4__INPUT_CHAN__          432
#define __FEATURES_13_CONV_4__INPUT_SIZE__          10
#define __FEATURES_13_CONV_4__OUTPUT_CHAN__         72
#define __FEATURES_13_CONV_4__OUTPUT_SIZE__         10
#define __FEATURES_13_CONV_4__KERNEL_SIZE__         1
#define __FEATURES_13_CONV_4__STRIDE_SIZE__         1
#define __FEATURES_13_CONV_4__PADDING_SIZE__        0
#define __FEATURES_14_CONV_0__INPUT_CHAN__          72
#define __FEATURES_14_CONV_0__INPUT_SIZE__          10
#define __FEATURES_14_CONV_0__OUTPUT_CHAN__         432
#define __FEATURES_14_CONV_0__OUTPUT_SIZE__         10
#define __FEATURES_14_CONV_0__KERNEL_SIZE__         1
#define __FEATURES_14_CONV_0__STRIDE_SIZE__         1
#define __FEATURES_14_CONV_0__PADDING_SIZE__        0
#define __FEATURES_14_CONV_2__INPUT_CHAN__          432
#define __FEATURES_14_CONV_2__INPUT_SIZE__          10
#define __FEATURES_14_CONV_2__OUTPUT_CHAN__         432
#define __FEATURES_14_CONV_2__OUTPUT_SIZE__         5
#define __FEATURES_14_CONV_2__KERNEL_SIZE__         3
#define __FEATURES_14_CONV_2__STRIDE_SIZE__         2
#define __FEATURES_14_CONV_2__PADDING_SIZE__        1
#define __FEATURES_14_CONV_4__INPUT_CHAN__          432
#define __FEATURES_14_CONV_4__INPUT_SIZE__          5
#define __FEATURES_14_CONV_4__OUTPUT_CHAN__         120
#define __FEATURES_14_CONV_4__OUTPUT_SIZE__         5
#define __FEATURES_14_CONV_4__KERNEL_SIZE__         1
#define __FEATURES_14_CONV_4__STRIDE_SIZE__         1
#define __FEATURES_14_CONV_4__PADDING_SIZE__        0
#define __FEATURES_15_CONV_0__INPUT_CHAN__          120
#define __FEATURES_15_CONV_0__INPUT_SIZE__          5
#define __FEATURES_15_CONV_0__OUTPUT_CHAN__         720
#define __FEATURES_15_CONV_0__OUTPUT_SIZE__         5
#define __FEATURES_15_CONV_0__KERNEL_SIZE__         1
#define __FEATURES_15_CONV_0__STRIDE_SIZE__         1
#define __FEATURES_15_CONV_0__PADDING_SIZE__        0
#define __FEATURES_15_CONV_2__INPUT_CHAN__          720
#define __FEATURES_15_CONV_2__INPUT_SIZE__          5
#define __FEATURES_15_CONV_2__OUTPUT_CHAN__         720
#define __FEATURES_15_CONV_2__OUTPUT_SIZE__         5
#define __FEATURES_15_CONV_2__KERNEL_SIZE__         3
#define __FEATURES_15_CONV_2__STRIDE_SIZE__         1
#define __FEATURES_15_CONV_2__PADDING_SIZE__        1
#define __FEATURES_15_CONV_4__INPUT_CHAN__          720
#define __FEATURES_15_CONV_4__INPUT_SIZE__          5
#define __FEATURES_15_CONV_4__OUTPUT_CHAN__         120
#define __FEATURES_15_CONV_4__OUTPUT_SIZE__         5
#define __FEATURES_15_CONV_4__KERNEL_SIZE__         1
#define __FEATURES_15_CONV_4__STRIDE_SIZE__         1
#define __FEATURES_15_CONV_4__PADDING_SIZE__        0
#define __FEATURES_16_CONV_0__INPUT_CHAN__          120
#define __FEATURES_16_CONV_0__INPUT_SIZE__          5
#define __FEATURES_16_CONV_0__OUTPUT_CHAN__         720
#define __FEATURES_16_CONV_0__OUTPUT_SIZE__         5
#define __FEATURES_16_CONV_0__KERNEL_SIZE__         1
#define __FEATURES_16_CONV_0__STRIDE_SIZE__         1
#define __FEATURES_16_CONV_0__PADDING_SIZE__        0
#define __FEATURES_16_CONV_2__INPUT_CHAN__          720
#define __FEATURES_16_CONV_2__INPUT_SIZE__          5
#define __FEATURES_16_CONV_2__OUTPUT_CHAN__         720
#define __FEATURES_16_CONV_2__OUTPUT_SIZE__         5
#define __FEATURES_16_CONV_2__KERNEL_SIZE__         3
#define __FEATURES_16_CONV_2__STRIDE_SIZE__         1
#define __FEATURES_16_CONV_2__PADDING_SIZE__        1
#define __FEATURES_16_CONV_4__INPUT_CHAN__          720
#define __FEATURES_16_CONV_4__INPUT_SIZE__          5
#define __FEATURES_16_CONV_4__OUTPUT_CHAN__         120
#define __FEATURES_16_CONV_4__OUTPUT_SIZE__         5
#define __FEATURES_16_CONV_4__KERNEL_SIZE__         1
#define __FEATURES_16_CONV_4__STRIDE_SIZE__         1
#define __FEATURES_16_CONV_4__PADDING_SIZE__        0
#define __FEATURES_17_CONV_0__INPUT_CHAN__          120
#define __FEATURES_17_CONV_0__INPUT_SIZE__          5
#define __FEATURES_17_CONV_0__OUTPUT_CHAN__         720
#define __FEATURES_17_CONV_0__OUTPUT_SIZE__         5
#define __FEATURES_17_CONV_0__KERNEL_SIZE__         1
#define __FEATURES_17_CONV_0__STRIDE_SIZE__         1
#define __FEATURES_17_CONV_0__PADDING_SIZE__        0
#define __FEATURES_17_CONV_2__INPUT_CHAN__          720
#define __FEATURES_17_CONV_2__INPUT_SIZE__          5
#define __FEATURES_17_CONV_2__OUTPUT_CHAN__         720
#define __FEATURES_17_CONV_2__OUTPUT_SIZE__         5
#define __FEATURES_17_CONV_2__KERNEL_SIZE__         3
#define __FEATURES_17_CONV_2__STRIDE_SIZE__         1
#define __FEATURES_17_CONV_2__PADDING_SIZE__        1
#define __FEATURES_17_CONV_4__INPUT_CHAN__          720
#define __FEATURES_17_CONV_4__INPUT_SIZE__          5
#define __FEATURES_17_CONV_4__OUTPUT_CHAN__         240
#define __FEATURES_17_CONV_4__OUTPUT_SIZE__         5
#define __FEATURES_17_CONV_4__KERNEL_SIZE__         1
#define __FEATURES_17_CONV_4__STRIDE_SIZE__         1
#define __FEATURES_17_CONV_4__PADDING_SIZE__        0
#define __CONV_0__INPUT_CHAN__                      240
#define __CONV_0__INPUT_SIZE__                      5
#define __CONV_0__OUTPUT_CHAN__                     1280
#define __CONV_0__OUTPUT_SIZE__                     5
#define __CONV_0__KERNEL_SIZE__                     1
#define __CONV_0__STRIDE_SIZE__                     1
#define __CONV_0__PADDING_SIZE__                    0
#define __MAX_INPUT_CH__                            720
#define __MAX_OUT_SIZE__                            80
#define __MAX_ACC_SIZE__                            720
#define __MAX_BIAS_OUT_CH_SIZE__                    1280
#define __AVG_POOLING_INPUT_CHAN_SIZE__             1280
#define __AVG_POOLING_KERNEL_SIZE__                 5
#define __AVG_POOLING_iMult_KERNEL__                163
#define __AVG_POOLING__nShift_KERNEL__              12
#define __LINEAR_ROW_SIZE__                         1000
#define __LINEAR_DEPTH_SIZE__                       1280
#define __NORMAL_CONV_MAX_INPUT_CHAN__              3
#define __NORMAL_CONV_MAX_INPUT_SIZE__              160
#define __NORMAL_CONV_MAX_OUTPUT_CHANNEL__          24
#define __NORMAL_CONV_SP_WIEGHT_SIZE__              648
#define __HEAD_PW_CONV_MAX_INPUT_CHAN__             24
#define __HEAD_PW_CONV_MAX_INPUT_SIZE__             80
#define __HEAD_PW_CONV_MAX_OUTPUT_CHANNEL__         16
#define __HEAD_PW_CONV_SP_WIEGHT_SIZE__             384
#define __HEAD_DW_CONV_MAX_INPUT_CHAN__             24
#define __HEAD_DW_CONV_MAX_INPUT_SIZE__             80
#define __HEAD_DW_CONV_MAX_OUTPUT_CHANNEL__         24
#define __HEAD_DW_CONV_SP_WIEGHT_SIZE__             216
#define __EXPND_PW_CONV_STR1_MAX_INPUT_CHAN__       120
#define __EXPND_PW_CONV_STR1_MAX_INPUT_SIZE__       10
#define __EXPND_PW_CONV_STR1_MAX_OUTPUT_CHANNEL__   720
#define __EXPND_PW_CONV_STR1_SP_WIEGHT_SIZE__       86400
#define __EXPND_PW_CONV_STR1_GRP_CORE_SIZE__        24
#define __EXPND_PW_CONV_STR2_MAX_INPUT_CHAN__       72
#define __EXPND_PW_CONV_STR2_MAX_INPUT_SIZE__       80
#define __EXPND_PW_CONV_STR2_MAX_OUTPUT_CHANNEL__   432
#define __EXPND_PW_CONV_STR2_SP_WIEGHT_SIZE__       31104
#define __EXPND_PW_CONV_STR2_GRP_CORE_SIZE__        8
#define __EXPND_PW_CONV_RES_MAX_INPUT_CHAN__        120
#define __EXPND_PW_CONV_RES_MAX_INPUT_SIZE__        40
#define __EXPND_PW_CONV_RES_MAX_OUTPUT_CHANNEL__    720
#define __EXPND_PW_CONV_RES_SP_WIEGHT_SIZE__        86400
#define __EXPND_PW_CONV_RES_GRP_CORE_SIZE__         24
#define __PRJC_PW_CONV_STR1_MAX_INPUT_CHAN__        720
#define __PRJC_PW_CONV_STR1_MAX_INPUT_SIZE__        10
#define __PRJC_PW_CONV_STR1_MAX_OUTPUT_CHANNEL__    240
#define __PRJC_PW_CONV_STR1_SP_WIEGHT_SIZE__        172800
#define __PRJC_PW_CONV_STR1_GRP_CORE_SIZE__         720
#define __PRJC_PW_PRJ_CONV_STR2_MAX_INPUT_CHAN__    432
#define __PRJC_PW_PRJ_CONV_STR2_MAX_INPUT_SIZE__    40
#define __PRJC_PW_PRJ_CONV_STR2_MAX_OUTPUT_CHANNEL__   120
#define __PRJC_PW_PRJ_CONV_STR2_SP_WIEGHT_SIZE__    51840
#define __PRJC_PW_PRJ_CONV_STR2_GRP_CORE_SIZE__     48
#define __PRJC_PW_CONV_RES_MAX_INPUT_CHAN__         720
#define __PRJC_PW_CONV_RES_MAX_INPUT_SIZE__         40
#define __PRJC_PW_CONV_RES_MAX_OUTPUT_CHANNEL__     120
#define __PRJC_PW_CONV_RES_SP_WIEGHT_SIZE__         86400
#define __PRJC_PW_CONV_RES_GRP_CORE_SIZE__          144
#define __EXP_PW_STR1_RES_CMN_CONV_MAX_INPUT_CHAN__   120
#define __EXP_PW_STR1_RES_CMN_CONV_MAX_INPUT_SIZE__   40
#define __EXP_PW_STR1_RES_CMN_CONV_MAX_OUTPUT_CHANNEL__   720
#define __EXP_PW_STR1_RES_CMN_CONV_SP_WIEGHT_SIZE__   86400
#define __EXP_PW_STR1_RES_CMN_CONV_GRP_CORE_SIZE__   24
#define __PRJC_PW_STR1_RES_CMN_CONV_MAX_INPUT_CHAN__   720
#define __PRJC_PW_STR1_RES_CMN_CONV_MAX_INPUT_SIZE__   40
#define __PRJC_PW_STR1_RES_CMN_CONV_MAX_OUTPUT_CHANNEL__   240
#define __PRJC_PW_STR1_RES_CMN_CONV_SP_WIEGHT_SIZE__   172800
#define __PRJC_PW_STR1_RES_CMN_CONV_GRP_CORE_SIZE__   144
#define __IRB_DW_CONV_STD_1_MAX_INPUT_CHAN__        720
#define __IRB_DW_CONV_STD_1_MAX_INPUT_SIZE__        10
#define __IRB_DW_CONV_STD_1_MAX_OUTPUT_CHANNEL__    720
#define __IRB_DW_CONV_STD_1_SP_WIEGHT_SIZE__        6480
#define __IRB_DW_CONV_STD_2_MAX_INPUT_CHAN__        432
#define __IRB_DW_CONV_STD_2_MAX_INPUT_SIZE__        80
#define __IRB_DW_CONV_STD_2_MAX_OUTPUT_CHANNEL__    432
#define __IRB_DW_CONV_STD_2_SP_WIEGHT_SIZE__        3888
#define __IRB_DW_CONV_STD_1_RES_MAX_INPUT_CHAN__    720
#define __IRB_DW_CONV_STD_1_RES_MAX_INPUT_SIZE__    40
#define __IRB_DW_CONV_STD_1_RES_MAX_OUTPUT_CHANNEL__   720
#define __IRB_DW_CONV_STD_1_RES_SP_WIEGHT_SIZE__    6480
#define __COMMON_PW_GRP_CORE_SIZE__                 8
#define __MAX_DW_STR1_CONV_MAX_INPUT_CHAN__         720
#define __MAX_DW_STR1_CONV_MAX_INPUT_SIZE__         40
#define __MAX_DW_STR1_CONV_MAX_OUTPUT_CHANNEL__     720
#define __MAX_DW_STR1_CONV_SP_WIEGHT_SIZE__         6480
#define __TAIL_PW_CONV_MAX_INPUT_CHAN__             240
#define __TAIL_PW_CONV_MAX_INPUT_SIZE__             5
#define __TAIL_PW_CONV_MAX_OUTPUT_CHANNEL__         1280
#define __TAIL_PW_CONV_SP_WIEGHT_SIZE__             307200
#define __EXP_PW_BIG_CU_INPUT_CHANNEL__             24
#define __PRJC_PW_BIG_CU_INPUT_CHANNEL__            144
#define __EXP_PW_BIG_CU_OUTPUT_CHANNEL__            144
#define __PRJC_PW_BIG_CU_OUTPUT_CHANNEL__           24


#endif