//===- PDB.h ----------------------------------------------------*- C++ -*-===//
//
//                             The LLVM Linker
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef LLD_COFF_PDB_H
#define LLD_COFF_PDB_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/StringRef.h"

namespace lld {
namespace coff {
void createPDB(llvm::StringRef Path, llvm::ArrayRef<uint8_t> SectionTable);
}
}

#endif
