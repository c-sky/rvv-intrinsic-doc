// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vle8_v_i8mf8(const int8_t *base, size_t vl) {
  return __riscv_vle8_v_i8mf8(base, vl);
}

vint8mf4_t test_vle8_v_i8mf4(const int8_t *base, size_t vl) {
  return __riscv_vle8_v_i8mf4(base, vl);
}

vint8mf2_t test_vle8_v_i8mf2(const int8_t *base, size_t vl) {
  return __riscv_vle8_v_i8mf2(base, vl);
}

vint8m1_t test_vle8_v_i8m1(const int8_t *base, size_t vl) {
  return __riscv_vle8_v_i8m1(base, vl);
}

vint8m2_t test_vle8_v_i8m2(const int8_t *base, size_t vl) {
  return __riscv_vle8_v_i8m2(base, vl);
}

vint8m4_t test_vle8_v_i8m4(const int8_t *base, size_t vl) {
  return __riscv_vle8_v_i8m4(base, vl);
}

vint8m8_t test_vle8_v_i8m8(const int8_t *base, size_t vl) {
  return __riscv_vle8_v_i8m8(base, vl);
}

vuint8mf8_t test_vle8_v_u8mf8(const uint8_t *base, size_t vl) {
  return __riscv_vle8_v_u8mf8(base, vl);
}

vuint8mf4_t test_vle8_v_u8mf4(const uint8_t *base, size_t vl) {
  return __riscv_vle8_v_u8mf4(base, vl);
}

vuint8mf2_t test_vle8_v_u8mf2(const uint8_t *base, size_t vl) {
  return __riscv_vle8_v_u8mf2(base, vl);
}

vuint8m1_t test_vle8_v_u8m1(const uint8_t *base, size_t vl) {
  return __riscv_vle8_v_u8m1(base, vl);
}

vuint8m2_t test_vle8_v_u8m2(const uint8_t *base, size_t vl) {
  return __riscv_vle8_v_u8m2(base, vl);
}

vuint8m4_t test_vle8_v_u8m4(const uint8_t *base, size_t vl) {
  return __riscv_vle8_v_u8m4(base, vl);
}

vuint8m8_t test_vle8_v_u8m8(const uint8_t *base, size_t vl) {
  return __riscv_vle8_v_u8m8(base, vl);
}

vint8mf8_t test_vle8_v_i8mf8_m(vbool64_t mask, const int8_t *base, size_t vl) {
  return __riscv_vle8_v_i8mf8_m(mask, base, vl);
}

vint8mf4_t test_vle8_v_i8mf4_m(vbool32_t mask, const int8_t *base, size_t vl) {
  return __riscv_vle8_v_i8mf4_m(mask, base, vl);
}

vint8mf2_t test_vle8_v_i8mf2_m(vbool16_t mask, const int8_t *base, size_t vl) {
  return __riscv_vle8_v_i8mf2_m(mask, base, vl);
}

vint8m1_t test_vle8_v_i8m1_m(vbool8_t mask, const int8_t *base, size_t vl) {
  return __riscv_vle8_v_i8m1_m(mask, base, vl);
}

vint8m2_t test_vle8_v_i8m2_m(vbool4_t mask, const int8_t *base, size_t vl) {
  return __riscv_vle8_v_i8m2_m(mask, base, vl);
}

vint8m4_t test_vle8_v_i8m4_m(vbool2_t mask, const int8_t *base, size_t vl) {
  return __riscv_vle8_v_i8m4_m(mask, base, vl);
}

vint8m8_t test_vle8_v_i8m8_m(vbool1_t mask, const int8_t *base, size_t vl) {
  return __riscv_vle8_v_i8m8_m(mask, base, vl);
}

vuint8mf8_t test_vle8_v_u8mf8_m(vbool64_t mask, const uint8_t *base, size_t vl) {
  return __riscv_vle8_v_u8mf8_m(mask, base, vl);
}

vuint8mf4_t test_vle8_v_u8mf4_m(vbool32_t mask, const uint8_t *base, size_t vl) {
  return __riscv_vle8_v_u8mf4_m(mask, base, vl);
}

vuint8mf2_t test_vle8_v_u8mf2_m(vbool16_t mask, const uint8_t *base, size_t vl) {
  return __riscv_vle8_v_u8mf2_m(mask, base, vl);
}

vuint8m1_t test_vle8_v_u8m1_m(vbool8_t mask, const uint8_t *base, size_t vl) {
  return __riscv_vle8_v_u8m1_m(mask, base, vl);
}

vuint8m2_t test_vle8_v_u8m2_m(vbool4_t mask, const uint8_t *base, size_t vl) {
  return __riscv_vle8_v_u8m2_m(mask, base, vl);
}

vuint8m4_t test_vle8_v_u8m4_m(vbool2_t mask, const uint8_t *base, size_t vl) {
  return __riscv_vle8_v_u8m4_m(mask, base, vl);
}

vuint8m8_t test_vle8_v_u8m8_m(vbool1_t mask, const uint8_t *base, size_t vl) {
  return __riscv_vle8_v_u8m8_m(mask, base, vl);
}
