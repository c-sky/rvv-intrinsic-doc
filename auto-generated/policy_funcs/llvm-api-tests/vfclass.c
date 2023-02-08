// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint16mf4_t test_vfclass_v_u16mf4_tu(vuint16mf4_t maskedoff, vfloat16mf4_t op1, size_t vl) {
  return __riscv_vfclass_v_u16mf4_tu(maskedoff, op1, vl);
}

vuint16mf2_t test_vfclass_v_u16mf2_tu(vuint16mf2_t maskedoff, vfloat16mf2_t op1, size_t vl) {
  return __riscv_vfclass_v_u16mf2_tu(maskedoff, op1, vl);
}

vuint16m1_t test_vfclass_v_u16m1_tu(vuint16m1_t maskedoff, vfloat16m1_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m1_tu(maskedoff, op1, vl);
}

vuint16m2_t test_vfclass_v_u16m2_tu(vuint16m2_t maskedoff, vfloat16m2_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m2_tu(maskedoff, op1, vl);
}

vuint16m4_t test_vfclass_v_u16m4_tu(vuint16m4_t maskedoff, vfloat16m4_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m4_tu(maskedoff, op1, vl);
}

vuint16m8_t test_vfclass_v_u16m8_tu(vuint16m8_t maskedoff, vfloat16m8_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m8_tu(maskedoff, op1, vl);
}

vuint32mf2_t test_vfclass_v_u32mf2_tu(vuint32mf2_t maskedoff, vfloat32mf2_t op1, size_t vl) {
  return __riscv_vfclass_v_u32mf2_tu(maskedoff, op1, vl);
}

vuint32m1_t test_vfclass_v_u32m1_tu(vuint32m1_t maskedoff, vfloat32m1_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m1_tu(maskedoff, op1, vl);
}

vuint32m2_t test_vfclass_v_u32m2_tu(vuint32m2_t maskedoff, vfloat32m2_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m2_tu(maskedoff, op1, vl);
}

vuint32m4_t test_vfclass_v_u32m4_tu(vuint32m4_t maskedoff, vfloat32m4_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m4_tu(maskedoff, op1, vl);
}

vuint32m8_t test_vfclass_v_u32m8_tu(vuint32m8_t maskedoff, vfloat32m8_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m8_tu(maskedoff, op1, vl);
}

vuint64m1_t test_vfclass_v_u64m1_tu(vuint64m1_t maskedoff, vfloat64m1_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m1_tu(maskedoff, op1, vl);
}

vuint64m2_t test_vfclass_v_u64m2_tu(vuint64m2_t maskedoff, vfloat64m2_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m2_tu(maskedoff, op1, vl);
}

vuint64m4_t test_vfclass_v_u64m4_tu(vuint64m4_t maskedoff, vfloat64m4_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m4_tu(maskedoff, op1, vl);
}

vuint64m8_t test_vfclass_v_u64m8_tu(vuint64m8_t maskedoff, vfloat64m8_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m8_tu(maskedoff, op1, vl);
}

vuint16mf4_t test_vfclass_v_u16mf4_tum(vbool64_t mask, vuint16mf4_t maskedoff, vfloat16mf4_t op1, size_t vl) {
  return __riscv_vfclass_v_u16mf4_tum(mask, maskedoff, op1, vl);
}

vuint16mf2_t test_vfclass_v_u16mf2_tum(vbool32_t mask, vuint16mf2_t maskedoff, vfloat16mf2_t op1, size_t vl) {
  return __riscv_vfclass_v_u16mf2_tum(mask, maskedoff, op1, vl);
}

vuint16m1_t test_vfclass_v_u16m1_tum(vbool16_t mask, vuint16m1_t maskedoff, vfloat16m1_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m1_tum(mask, maskedoff, op1, vl);
}

vuint16m2_t test_vfclass_v_u16m2_tum(vbool8_t mask, vuint16m2_t maskedoff, vfloat16m2_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m2_tum(mask, maskedoff, op1, vl);
}

vuint16m4_t test_vfclass_v_u16m4_tum(vbool4_t mask, vuint16m4_t maskedoff, vfloat16m4_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m4_tum(mask, maskedoff, op1, vl);
}

vuint16m8_t test_vfclass_v_u16m8_tum(vbool2_t mask, vuint16m8_t maskedoff, vfloat16m8_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m8_tum(mask, maskedoff, op1, vl);
}

vuint32mf2_t test_vfclass_v_u32mf2_tum(vbool64_t mask, vuint32mf2_t maskedoff, vfloat32mf2_t op1, size_t vl) {
  return __riscv_vfclass_v_u32mf2_tum(mask, maskedoff, op1, vl);
}

vuint32m1_t test_vfclass_v_u32m1_tum(vbool32_t mask, vuint32m1_t maskedoff, vfloat32m1_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m1_tum(mask, maskedoff, op1, vl);
}

vuint32m2_t test_vfclass_v_u32m2_tum(vbool16_t mask, vuint32m2_t maskedoff, vfloat32m2_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m2_tum(mask, maskedoff, op1, vl);
}

vuint32m4_t test_vfclass_v_u32m4_tum(vbool8_t mask, vuint32m4_t maskedoff, vfloat32m4_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m4_tum(mask, maskedoff, op1, vl);
}

vuint32m8_t test_vfclass_v_u32m8_tum(vbool4_t mask, vuint32m8_t maskedoff, vfloat32m8_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m8_tum(mask, maskedoff, op1, vl);
}

vuint64m1_t test_vfclass_v_u64m1_tum(vbool64_t mask, vuint64m1_t maskedoff, vfloat64m1_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m1_tum(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vfclass_v_u64m2_tum(vbool32_t mask, vuint64m2_t maskedoff, vfloat64m2_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m2_tum(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vfclass_v_u64m4_tum(vbool16_t mask, vuint64m4_t maskedoff, vfloat64m4_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m4_tum(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vfclass_v_u64m8_tum(vbool8_t mask, vuint64m8_t maskedoff, vfloat64m8_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m8_tum(mask, maskedoff, op1, vl);
}

vuint16mf4_t test_vfclass_v_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat16mf4_t op1, size_t vl) {
  return __riscv_vfclass_v_u16mf4_tumu(mask, maskedoff, op1, vl);
}

vuint16mf2_t test_vfclass_v_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat16mf2_t op1, size_t vl) {
  return __riscv_vfclass_v_u16mf2_tumu(mask, maskedoff, op1, vl);
}

vuint16m1_t test_vfclass_v_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vfloat16m1_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m1_tumu(mask, maskedoff, op1, vl);
}

vuint16m2_t test_vfclass_v_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vfloat16m2_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m2_tumu(mask, maskedoff, op1, vl);
}

vuint16m4_t test_vfclass_v_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vfloat16m4_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m4_tumu(mask, maskedoff, op1, vl);
}

vuint16m8_t test_vfclass_v_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vfloat16m8_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m8_tumu(mask, maskedoff, op1, vl);
}

vuint32mf2_t test_vfclass_v_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat32mf2_t op1, size_t vl) {
  return __riscv_vfclass_v_u32mf2_tumu(mask, maskedoff, op1, vl);
}

vuint32m1_t test_vfclass_v_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vfloat32m1_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m1_tumu(mask, maskedoff, op1, vl);
}

vuint32m2_t test_vfclass_v_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vfloat32m2_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m2_tumu(mask, maskedoff, op1, vl);
}

vuint32m4_t test_vfclass_v_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vfloat32m4_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m4_tumu(mask, maskedoff, op1, vl);
}

vuint32m8_t test_vfclass_v_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vfloat32m8_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m8_tumu(mask, maskedoff, op1, vl);
}

vuint64m1_t test_vfclass_v_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vfloat64m1_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m1_tumu(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vfclass_v_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vfloat64m2_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m2_tumu(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vfclass_v_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vfloat64m4_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m4_tumu(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vfclass_v_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vfloat64m8_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m8_tumu(mask, maskedoff, op1, vl);
}

vuint16mf4_t test_vfclass_v_u16mf4_mu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat16mf4_t op1, size_t vl) {
  return __riscv_vfclass_v_u16mf4_mu(mask, maskedoff, op1, vl);
}

vuint16mf2_t test_vfclass_v_u16mf2_mu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat16mf2_t op1, size_t vl) {
  return __riscv_vfclass_v_u16mf2_mu(mask, maskedoff, op1, vl);
}

vuint16m1_t test_vfclass_v_u16m1_mu(vbool16_t mask, vuint16m1_t maskedoff, vfloat16m1_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m1_mu(mask, maskedoff, op1, vl);
}

vuint16m2_t test_vfclass_v_u16m2_mu(vbool8_t mask, vuint16m2_t maskedoff, vfloat16m2_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m2_mu(mask, maskedoff, op1, vl);
}

vuint16m4_t test_vfclass_v_u16m4_mu(vbool4_t mask, vuint16m4_t maskedoff, vfloat16m4_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m4_mu(mask, maskedoff, op1, vl);
}

vuint16m8_t test_vfclass_v_u16m8_mu(vbool2_t mask, vuint16m8_t maskedoff, vfloat16m8_t op1, size_t vl) {
  return __riscv_vfclass_v_u16m8_mu(mask, maskedoff, op1, vl);
}

vuint32mf2_t test_vfclass_v_u32mf2_mu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat32mf2_t op1, size_t vl) {
  return __riscv_vfclass_v_u32mf2_mu(mask, maskedoff, op1, vl);
}

vuint32m1_t test_vfclass_v_u32m1_mu(vbool32_t mask, vuint32m1_t maskedoff, vfloat32m1_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m1_mu(mask, maskedoff, op1, vl);
}

vuint32m2_t test_vfclass_v_u32m2_mu(vbool16_t mask, vuint32m2_t maskedoff, vfloat32m2_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m2_mu(mask, maskedoff, op1, vl);
}

vuint32m4_t test_vfclass_v_u32m4_mu(vbool8_t mask, vuint32m4_t maskedoff, vfloat32m4_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m4_mu(mask, maskedoff, op1, vl);
}

vuint32m8_t test_vfclass_v_u32m8_mu(vbool4_t mask, vuint32m8_t maskedoff, vfloat32m8_t op1, size_t vl) {
  return __riscv_vfclass_v_u32m8_mu(mask, maskedoff, op1, vl);
}

vuint64m1_t test_vfclass_v_u64m1_mu(vbool64_t mask, vuint64m1_t maskedoff, vfloat64m1_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m1_mu(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vfclass_v_u64m2_mu(vbool32_t mask, vuint64m2_t maskedoff, vfloat64m2_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m2_mu(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vfclass_v_u64m4_mu(vbool16_t mask, vuint64m4_t maskedoff, vfloat64m4_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m4_mu(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vfclass_v_u64m8_mu(vbool8_t mask, vuint64m8_t maskedoff, vfloat64m8_t op1, size_t vl) {
  return __riscv_vfclass_v_u64m8_mu(mask, maskedoff, op1, vl);
}
