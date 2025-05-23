// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#undef FULL_NAME

#if defined(__AVX2__)
    #define FULL_NAME(x) x##_avx2
#elif __SSE4_2__ == 1
    #define FULL_NAME(x) x##_sse4
#elif __SSE3__ == 1
    #define FULL_NAME(x) x##_sse3
#elif defined(__ARM_NEON) || defined(__ARM_NEON__)
    #define FULL_NAME(x) x##_neon
#else
    #define FULL_NAME(x) x##_x86
#endif