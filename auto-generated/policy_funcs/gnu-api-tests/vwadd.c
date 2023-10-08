/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf4_t test_vwadd_vv_i16mf4_tu(vint16mf4_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16mf4_tu(maskedoff, op1, op2, vl);
}

vint16mf4_t test_vwadd_vx_i16mf4_tu(vint16mf4_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16mf4_tu(maskedoff, op1, op2, vl);
}

vint16mf4_t test_vwadd_wv_i16mf4_tu(vint16mf4_t maskedoff, vint16mf4_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16mf4_tu(maskedoff, op1, op2, vl);
}

vint16mf4_t test_vwadd_wx_i16mf4_tu(vint16mf4_t maskedoff, vint16mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16mf4_tu(maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_vv_i16mf2_tu(vint16mf2_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16mf2_tu(maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_vx_i16mf2_tu(vint16mf2_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16mf2_tu(maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_wv_i16mf2_tu(vint16mf2_t maskedoff, vint16mf2_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16mf2_tu(maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_wx_i16mf2_tu(vint16mf2_t maskedoff, vint16mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16mf2_tu(maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_vv_i16m1_tu(vint16m1_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m1_tu(maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_vx_i16m1_tu(vint16m1_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m1_tu(maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_wv_i16m1_tu(vint16m1_t maskedoff, vint16m1_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m1_tu(maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_wx_i16m1_tu(vint16m1_t maskedoff, vint16m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m1_tu(maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_vv_i16m2_tu(vint16m2_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m2_tu(maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_vx_i16m2_tu(vint16m2_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m2_tu(maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_wv_i16m2_tu(vint16m2_t maskedoff, vint16m2_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m2_tu(maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_wx_i16m2_tu(vint16m2_t maskedoff, vint16m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m2_tu(maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_vv_i16m4_tu(vint16m4_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m4_tu(maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_vx_i16m4_tu(vint16m4_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m4_tu(maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_wv_i16m4_tu(vint16m4_t maskedoff, vint16m4_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m4_tu(maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_wx_i16m4_tu(vint16m4_t maskedoff, vint16m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m4_tu(maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_vv_i16m8_tu(vint16m8_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m8_tu(maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_vx_i16m8_tu(vint16m8_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m8_tu(maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_wv_i16m8_tu(vint16m8_t maskedoff, vint16m8_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m8_tu(maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_wx_i16m8_tu(vint16m8_t maskedoff, vint16m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m8_tu(maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_vv_i32mf2_tu(vint32mf2_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32mf2_tu(maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_vx_i32mf2_tu(vint32mf2_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32mf2_tu(maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_wv_i32mf2_tu(vint32mf2_t maskedoff, vint32mf2_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32mf2_tu(maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_wx_i32mf2_tu(vint32mf2_t maskedoff, vint32mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32mf2_tu(maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_vv_i32m1_tu(vint32m1_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m1_tu(maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_vx_i32m1_tu(vint32m1_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m1_tu(maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_wv_i32m1_tu(vint32m1_t maskedoff, vint32m1_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m1_tu(maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_wx_i32m1_tu(vint32m1_t maskedoff, vint32m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m1_tu(maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_vv_i32m2_tu(vint32m2_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m2_tu(maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_vx_i32m2_tu(vint32m2_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m2_tu(maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_wv_i32m2_tu(vint32m2_t maskedoff, vint32m2_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m2_tu(maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_wx_i32m2_tu(vint32m2_t maskedoff, vint32m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m2_tu(maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_vv_i32m4_tu(vint32m4_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m4_tu(maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_vx_i32m4_tu(vint32m4_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m4_tu(maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_wv_i32m4_tu(vint32m4_t maskedoff, vint32m4_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m4_tu(maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_wx_i32m4_tu(vint32m4_t maskedoff, vint32m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m4_tu(maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_vv_i32m8_tu(vint32m8_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m8_tu(maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_vx_i32m8_tu(vint32m8_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m8_tu(maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_wv_i32m8_tu(vint32m8_t maskedoff, vint32m8_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m8_tu(maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_wx_i32m8_tu(vint32m8_t maskedoff, vint32m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m8_tu(maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_vv_i64m1_tu(vint64m1_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m1_tu(maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_vx_i64m1_tu(vint64m1_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m1_tu(maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_wv_i64m1_tu(vint64m1_t maskedoff, vint64m1_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m1_tu(maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_wx_i64m1_tu(vint64m1_t maskedoff, vint64m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m1_tu(maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_vv_i64m2_tu(vint64m2_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m2_tu(maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_vx_i64m2_tu(vint64m2_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m2_tu(maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_wv_i64m2_tu(vint64m2_t maskedoff, vint64m2_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m2_tu(maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_wx_i64m2_tu(vint64m2_t maskedoff, vint64m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m2_tu(maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_vv_i64m4_tu(vint64m4_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m4_tu(maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_vx_i64m4_tu(vint64m4_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m4_tu(maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_wv_i64m4_tu(vint64m4_t maskedoff, vint64m4_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m4_tu(maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_wx_i64m4_tu(vint64m4_t maskedoff, vint64m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m4_tu(maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_vv_i64m8_tu(vint64m8_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m8_tu(maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_vx_i64m8_tu(vint64m8_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m8_tu(maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_wv_i64m8_tu(vint64m8_t maskedoff, vint64m8_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m8_tu(maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_wx_i64m8_tu(vint64m8_t maskedoff, vint64m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m8_tu(maskedoff, op1, op2, vl);
}

vint16mf4_t test_vwadd_vv_i16mf4_tum(vbool64_t mask, vint16mf4_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16mf4_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vwadd_vx_i16mf4_tum(vbool64_t mask, vint16mf4_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16mf4_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vwadd_wv_i16mf4_tum(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16mf4_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vwadd_wx_i16mf4_tum(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16mf4_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_vv_i16mf2_tum(vbool32_t mask, vint16mf2_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16mf2_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_vx_i16mf2_tum(vbool32_t mask, vint16mf2_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16mf2_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_wv_i16mf2_tum(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16mf2_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_wx_i16mf2_tum(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16mf2_tum(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_vv_i16m1_tum(vbool16_t mask, vint16m1_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m1_tum(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_vx_i16m1_tum(vbool16_t mask, vint16m1_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m1_tum(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_wv_i16m1_tum(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m1_tum(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_wx_i16m1_tum(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m1_tum(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_vv_i16m2_tum(vbool8_t mask, vint16m2_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m2_tum(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_vx_i16m2_tum(vbool8_t mask, vint16m2_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m2_tum(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_wv_i16m2_tum(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m2_tum(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_wx_i16m2_tum(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m2_tum(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_vv_i16m4_tum(vbool4_t mask, vint16m4_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m4_tum(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_vx_i16m4_tum(vbool4_t mask, vint16m4_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m4_tum(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_wv_i16m4_tum(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m4_tum(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_wx_i16m4_tum(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m4_tum(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_vv_i16m8_tum(vbool2_t mask, vint16m8_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m8_tum(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_vx_i16m8_tum(vbool2_t mask, vint16m8_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m8_tum(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_wv_i16m8_tum(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m8_tum(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_wx_i16m8_tum(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m8_tum(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_vv_i32mf2_tum(vbool64_t mask, vint32mf2_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32mf2_tum(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_vx_i32mf2_tum(vbool64_t mask, vint32mf2_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32mf2_tum(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_wv_i32mf2_tum(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32mf2_tum(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_wx_i32mf2_tum(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32mf2_tum(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_vv_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m1_tum(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_vx_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m1_tum(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_wv_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m1_tum(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_wx_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m1_tum(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_vv_i32m2_tum(vbool16_t mask, vint32m2_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m2_tum(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_vx_i32m2_tum(vbool16_t mask, vint32m2_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m2_tum(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_wv_i32m2_tum(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m2_tum(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_wx_i32m2_tum(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m2_tum(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_vv_i32m4_tum(vbool8_t mask, vint32m4_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m4_tum(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_vx_i32m4_tum(vbool8_t mask, vint32m4_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m4_tum(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_wv_i32m4_tum(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m4_tum(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_wx_i32m4_tum(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m4_tum(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_vv_i32m8_tum(vbool4_t mask, vint32m8_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m8_tum(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_vx_i32m8_tum(vbool4_t mask, vint32m8_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m8_tum(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_wv_i32m8_tum(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m8_tum(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_wx_i32m8_tum(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m8_tum(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_vv_i64m1_tum(vbool64_t mask, vint64m1_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m1_tum(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_vx_i64m1_tum(vbool64_t mask, vint64m1_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m1_tum(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_wv_i64m1_tum(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m1_tum(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_wx_i64m1_tum(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m1_tum(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_vv_i64m2_tum(vbool32_t mask, vint64m2_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m2_tum(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_vx_i64m2_tum(vbool32_t mask, vint64m2_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m2_tum(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_wv_i64m2_tum(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m2_tum(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_wx_i64m2_tum(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m2_tum(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_vv_i64m4_tum(vbool16_t mask, vint64m4_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m4_tum(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_vx_i64m4_tum(vbool16_t mask, vint64m4_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m4_tum(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_wv_i64m4_tum(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m4_tum(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_wx_i64m4_tum(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m4_tum(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_vv_i64m8_tum(vbool8_t mask, vint64m8_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m8_tum(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_vx_i64m8_tum(vbool8_t mask, vint64m8_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m8_tum(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_wv_i64m8_tum(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m8_tum(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_wx_i64m8_tum(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m8_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vwadd_vv_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16mf4_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vwadd_vx_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16mf4_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vwadd_wv_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16mf4_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vwadd_wx_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16mf4_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_vv_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16mf2_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_vx_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16mf2_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_wv_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16mf2_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_wx_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16mf2_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_vv_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m1_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_vx_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m1_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_wv_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m1_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_wx_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m1_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_vv_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m2_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_vx_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m2_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_wv_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m2_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_wx_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m2_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_vv_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m4_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_vx_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m4_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_wv_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m4_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_wx_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m4_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_vv_i16m8_tumu(vbool2_t mask, vint16m8_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m8_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_vx_i16m8_tumu(vbool2_t mask, vint16m8_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m8_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_wv_i16m8_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m8_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_wx_i16m8_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m8_tumu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_vv_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32mf2_tumu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_vx_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32mf2_tumu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_wv_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32mf2_tumu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_wx_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32mf2_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_vv_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m1_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_vx_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m1_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_wv_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m1_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_wx_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m1_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_vv_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m2_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_vx_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m2_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_wv_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m2_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_wx_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m2_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_vv_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m4_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_vx_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m4_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_wv_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m4_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_wx_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m4_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_vv_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m8_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_vx_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m8_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_wv_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m8_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_wx_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m8_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_vv_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m1_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_vx_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m1_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_wv_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m1_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_wx_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m1_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_vv_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m2_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_vx_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m2_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_wv_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m2_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_wx_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m2_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_vv_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m4_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_vx_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m4_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_wv_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m4_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_wx_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m4_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_vv_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m8_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_vx_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m8_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_wv_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m8_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_wx_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m8_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vwadd_vv_i16mf4_mu(vbool64_t mask, vint16mf4_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16mf4_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vwadd_vx_i16mf4_mu(vbool64_t mask, vint16mf4_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16mf4_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vwadd_wv_i16mf4_mu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16mf4_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vwadd_wx_i16mf4_mu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16mf4_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_vv_i16mf2_mu(vbool32_t mask, vint16mf2_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16mf2_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_vx_i16mf2_mu(vbool32_t mask, vint16mf2_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16mf2_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_wv_i16mf2_mu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16mf2_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vwadd_wx_i16mf2_mu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16mf2_mu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_vv_i16m1_mu(vbool16_t mask, vint16m1_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m1_mu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_vx_i16m1_mu(vbool16_t mask, vint16m1_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m1_mu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_wv_i16m1_mu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m1_mu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vwadd_wx_i16m1_mu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m1_mu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_vv_i16m2_mu(vbool8_t mask, vint16m2_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m2_mu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_vx_i16m2_mu(vbool8_t mask, vint16m2_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m2_mu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_wv_i16m2_mu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m2_mu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vwadd_wx_i16m2_mu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m2_mu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_vv_i16m4_mu(vbool4_t mask, vint16m4_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m4_mu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_vx_i16m4_mu(vbool4_t mask, vint16m4_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m4_mu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_wv_i16m4_mu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m4_mu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vwadd_wx_i16m4_mu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m4_mu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_vv_i16m8_mu(vbool2_t mask, vint16m8_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i16m8_mu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_vx_i16m8_mu(vbool2_t mask, vint16m8_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_vx_i16m8_mu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_wv_i16m8_mu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i16m8_mu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vwadd_wx_i16m8_mu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vwadd_wx_i16m8_mu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_vv_i32mf2_mu(vbool64_t mask, vint32mf2_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32mf2_mu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_vx_i32mf2_mu(vbool64_t mask, vint32mf2_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32mf2_mu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_wv_i32mf2_mu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32mf2_mu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vwadd_wx_i32mf2_mu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32mf2_mu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_vv_i32m1_mu(vbool32_t mask, vint32m1_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m1_mu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_vx_i32m1_mu(vbool32_t mask, vint32m1_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m1_mu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_wv_i32m1_mu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m1_mu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vwadd_wx_i32m1_mu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m1_mu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_vv_i32m2_mu(vbool16_t mask, vint32m2_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m2_mu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_vx_i32m2_mu(vbool16_t mask, vint32m2_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m2_mu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_wv_i32m2_mu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m2_mu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vwadd_wx_i32m2_mu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m2_mu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_vv_i32m4_mu(vbool8_t mask, vint32m4_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m4_mu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_vx_i32m4_mu(vbool8_t mask, vint32m4_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m4_mu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_wv_i32m4_mu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m4_mu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vwadd_wx_i32m4_mu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m4_mu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_vv_i32m8_mu(vbool4_t mask, vint32m8_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i32m8_mu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_vx_i32m8_mu(vbool4_t mask, vint32m8_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_vx_i32m8_mu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_wv_i32m8_mu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i32m8_mu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vwadd_wx_i32m8_mu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vwadd_wx_i32m8_mu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_vv_i64m1_mu(vbool64_t mask, vint64m1_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m1_mu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_vx_i64m1_mu(vbool64_t mask, vint64m1_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m1_mu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_wv_i64m1_mu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m1_mu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vwadd_wx_i64m1_mu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m1_mu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_vv_i64m2_mu(vbool32_t mask, vint64m2_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m2_mu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_vx_i64m2_mu(vbool32_t mask, vint64m2_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m2_mu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_wv_i64m2_mu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m2_mu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vwadd_wx_i64m2_mu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m2_mu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_vv_i64m4_mu(vbool16_t mask, vint64m4_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m4_mu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_vx_i64m4_mu(vbool16_t mask, vint64m4_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m4_mu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_wv_i64m4_mu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m4_mu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vwadd_wx_i64m4_mu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m4_mu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_vv_i64m8_mu(vbool8_t mask, vint64m8_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vwadd_vv_i64m8_mu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_vx_i64m8_mu(vbool8_t mask, vint64m8_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_vx_i64m8_mu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_wv_i64m8_mu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vwadd_wv_i64m8_mu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vwadd_wx_i64m8_mu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vwadd_wx_i64m8_mu(mask, maskedoff, op1, op2, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+v[w]?add\.[ivxfswum.]+\s+} 240 } } */