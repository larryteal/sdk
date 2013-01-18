// Copyright (c) 2013, the Dart project authors.  Please see the AUTHORS file
// for details. All rights reserved. Use of this source code is governed by a
// BSD-style license that can be found in the LICENSE file.

#ifndef VM_INSTRUCTIONS_H_
#define VM_INSTRUCTIONS_H_

#include "vm/globals.h"

#if defined(TARGET_ARCH_IA32)
#include "vm/instructions_ia32.h"
#elif defined(TARGET_ARCH_X64)
#include "vm/instructions_x64.h"
#elif defined(TARGET_ARCH_ARM)
#include "vm/instructions_arm.h"
#else
#error Unknown architecture.
#endif

#endif  // VM_INSTRUCTIONS_H_
