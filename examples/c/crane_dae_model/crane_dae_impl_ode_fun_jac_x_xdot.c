/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) crane_dae_impl_ode_fun_jac_x_xdot_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[13] = {9, 1, 0, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8};
static const casadi_int casadi_s1[6] = {2, 1, 0, 2, 0, 1};
static const casadi_int casadi_s2[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s3[14] = {10, 1, 0, 10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
static const casadi_int casadi_s4[26] = {10, 9, 0, 0, 2, 5, 8, 9, 10, 12, 14, 14, 0, 1, 7, 8, 9, 2, 3, 7, 1, 3, 7, 9, 6, 7};
static const casadi_int casadi_s5[21] = {10, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8};

casadi_real casadi_sq(casadi_real x) { return x*x;}

/* crane_dae_impl_ode_fun_jac_x_xdot:(i0[9],i1[9],i2[2],i3)->(o0[10],o1[10x9,14nz],o2[10x9,9nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a10, a11, a12, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[0] ? arg[0][1] : 0;
  a1=arg[1] ? arg[1][0] : 0;
  a1=(a0-a1);
  if (res[0]!=0) res[0][0]=a1;
  a1=-7.8182378879940387e+01;
  a2=4.7418203070092001e-02;
  a3=arg[0] ? arg[0][4] : 0;
  a3=(a2*a3);
  a0=(a0-a3);
  a0=(a1*a0);
  a3=arg[1] ? arg[1][1] : 0;
  a0=(a0-a3);
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0] ? arg[0][3] : 0;
  a3=arg[1] ? arg[1][2] : 0;
  a3=(a0-a3);
  if (res[0]!=0) res[0][2]=a3;
  a3=-4.0493711676434543e+01;
  a4=3.4087337273385997e-02;
  a5=arg[0] ? arg[0][5] : 0;
  a4=(a4*a5);
  a4=(a0-a4);
  a4=(a3*a4);
  a5=arg[1] ? arg[1][3] : 0;
  a4=(a4-a5);
  if (res[0]!=0) res[0][3]=a4;
  a4=arg[2] ? arg[2][0] : 0;
  a5=arg[1] ? arg[1][4] : 0;
  a5=(a4-a5);
  if (res[0]!=0) res[0][4]=a5;
  a5=arg[2] ? arg[2][1] : 0;
  a6=arg[1] ? arg[1][5] : 0;
  a5=(a5-a6);
  if (res[0]!=0) res[0][5]=a5;
  a5=arg[0] ? arg[0][7] : 0;
  a6=arg[1] ? arg[1][6] : 0;
  a6=(a5-a6);
  if (res[0]!=0) res[0][6]=a6;
  a2=(a2*a4);
  a6=arg[0] ? arg[0][6] : 0;
  a7=cos(a6);
  a7=(a2*a7);
  a8=9.8100000000000005e+00;
  a9=sin(a6);
  a9=(a8*a9);
  a7=(a7+a9);
  a9=2.;
  a0=(a9*a0);
  a10=(a0*a5);
  a7=(a7+a10);
  a10=arg[0] ? arg[0][2] : 0;
  a7=(a7/a10);
  a11=arg[1] ? arg[1][7] : 0;
  a11=(a7+a11);
  a11=(-a11);
  if (res[0]!=0) res[0][7]=a11;
  a4=casadi_sq(a4);
  a11=casadi_sq(a10);
  a4=(a4+a11);
  a11=arg[1] ? arg[1][8] : 0;
  a4=(a4-a11);
  if (res[0]!=0) res[0][8]=a4;
  a4=arg[3] ? arg[3][0] : 0;
  a11=casadi_sq(a6);
  a12=8.;
  a11=(a11/a12);
  a11=(a11+a10);
  a4=(a4-a11);
  if (res[0]!=0) res[0][9]=a4;
  a4=1.;
  if (res[1]!=0) res[1][0]=a4;
  if (res[1]!=0) res[1][1]=a1;
  a7=(a7/a10);
  if (res[1]!=0) res[1][2]=a7;
  a7=(a10+a10);
  if (res[1]!=0) res[1][3]=a7;
  a7=-1.;
  if (res[1]!=0) res[1][4]=a7;
  if (res[1]!=0) res[1][5]=a4;
  if (res[1]!=0) res[1][6]=a3;
  a9=(a9*a5);
  a9=(a9/a10);
  a9=(-a9);
  if (res[1]!=0) res[1][7]=a9;
  a9=3.7072679182318851e+00;
  if (res[1]!=0) res[1][8]=a9;
  a9=1.3803228073658729e+00;
  if (res[1]!=0) res[1][9]=a9;
  a9=cos(a6);
  a8=(a8*a9);
  a9=sin(a6);
  a2=(a2*a9);
  a8=(a8-a2);
  a8=(a8/a10);
  a8=(-a8);
  if (res[1]!=0) res[1][10]=a8;
  a8=1.2500000000000000e-01;
  a6=(a6+a6);
  a8=(a8*a6);
  a8=(-a8);
  if (res[1]!=0) res[1][11]=a8;
  if (res[1]!=0) res[1][12]=a4;
  a0=(a0/a10);
  a0=(-a0);
  if (res[1]!=0) res[1][13]=a0;
  if (res[2]!=0) res[2][0]=a7;
  if (res[2]!=0) res[2][1]=a7;
  if (res[2]!=0) res[2][2]=a7;
  if (res[2]!=0) res[2][3]=a7;
  if (res[2]!=0) res[2][4]=a7;
  if (res[2]!=0) res[2][5]=a7;
  if (res[2]!=0) res[2][6]=a7;
  if (res[2]!=0) res[2][7]=a7;
  if (res[2]!=0) res[2][8]=a7;
  return 0;
}

CASADI_SYMBOL_EXPORT int crane_dae_impl_ode_fun_jac_x_xdot(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void crane_dae_impl_ode_fun_jac_x_xdot_incref(void) {
}

CASADI_SYMBOL_EXPORT void crane_dae_impl_ode_fun_jac_x_xdot_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int crane_dae_impl_ode_fun_jac_x_xdot_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int crane_dae_impl_ode_fun_jac_x_xdot_n_out(void) { return 3;}

CASADI_SYMBOL_EXPORT const char* crane_dae_impl_ode_fun_jac_x_xdot_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* crane_dae_impl_ode_fun_jac_x_xdot_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* crane_dae_impl_ode_fun_jac_x_xdot_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    case 3: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* crane_dae_impl_ode_fun_jac_x_xdot_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s3;
    case 1: return casadi_s4;
    case 2: return casadi_s5;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int crane_dae_impl_ode_fun_jac_x_xdot_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 3;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
