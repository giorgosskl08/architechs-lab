// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.2 (64-bit)
// Tool Version Limit: 2019.12
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// ==============================================================
# 1 "C:/Users/PX/AppData/Roaming/Xilinx/Vitis/tb_MATRIX_MULT.c"
# 1 "C:/Users/PX/AppData/Roaming/Xilinx/Vitis/tb_MATRIX_MULT.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 147 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Users/PX/AppData/Roaming/Xilinx/Vitis/tb_MATRIX_MULT.c" 2
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 11 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 1 3
# 11 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 278 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 1 3
# 14 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 675 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h" 1 3
# 675 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3

# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
# 676 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 14 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 2 3


#pragma pack(push,_CRT_PACKING)








 typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 103 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
#pragma pack(pop)
# 278 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 371 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long size_t;
# 381 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ssize_t;
# 393 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long intptr_t;
# 406 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long uintptr_t;
# 419 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ptrdiff_t;
# 429 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef unsigned short wchar_t;







typedef unsigned short wint_t;
typedef unsigned short wctype_t;
# 457 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;







typedef __time64_t time_t;
# 608 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;







const char *__mingw_get_crt_info (void);





#pragma pack(pop)
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_push.h" 1 3
# 12 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 27 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;
# 85 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  typedef long _off_t;

  typedef long off_t;






  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;





  __attribute__ ((__dllimport__)) FILE *__cdecl __iob_func(void);
# 121 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __extension__ typedef long long fpos_t;
# 158 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) int __cdecl _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int __cdecl _flsbuf(int _Ch,FILE *_File);



  __attribute__ ((__dllimport__)) FILE *__cdecl _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);

  void __cdecl clearerr(FILE *_File);
  int __cdecl fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int __cdecl _fcloseall(void);



  __attribute__ ((__dllimport__)) FILE *__cdecl _fdopen(int _FileHandle,const char *_Mode);

  int __cdecl feof(FILE *_File);
  int __cdecl ferror(FILE *_File);
  int __cdecl fflush(FILE *_File);
  int __cdecl fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int __cdecl _fgetchar(void);
  int __cdecl fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char *__cdecl fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __cdecl _fileno(FILE *_File);



  __attribute__ ((__dllimport__)) char *__cdecl _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int __cdecl _flushall(void);
  FILE *__cdecl fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int __cdecl fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  int __cdecl fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int __cdecl _fputchar(int _Ch);
  int __cdecl fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t __cdecl fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE *__cdecl freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int __cdecl fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...) ;
  int __cdecl _fscanf_l(FILE * __restrict__ _File,const char * __restrict__ _Format,_locale_t locale,...) ;
  int __cdecl fsetpos(FILE *_File,const fpos_t *_Pos);
  int __cdecl fseek(FILE *_File,long _Offset,int _Origin);
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  long __cdecl ftell(FILE *_File);
  _off64_t ftello64(FILE * stream);
  __extension__ int __cdecl _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __extension__ long long __cdecl _ftelli64(FILE *_File);
  size_t __cdecl fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int __cdecl getc(FILE *_File);
  int __cdecl getchar(void);
  __attribute__ ((__dllimport__)) int __cdecl _getmaxstdio(void);
  char *__cdecl gets(char *_Buffer) ;
  int __cdecl _getw(FILE *_File);


  void __cdecl perror(const char *_ErrMsg);

  __attribute__ ((__dllimport__)) int __cdecl _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE *__cdecl _popen(const char *_Command,const char *_Mode);




  int __cdecl printf(const char * __restrict__ _Format,...);
  int __cdecl putc(int _Ch,FILE *_File);
  int __cdecl putchar(int _Ch);
  int __cdecl puts(const char *_Str);
  __attribute__ ((__dllimport__)) int __cdecl _putw(int _Word,FILE *_File);


  int __cdecl remove(const char *_Filename);
  int __cdecl rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int __cdecl _unlink(const char *_Filename);

  int __cdecl unlink(const char *_Filename) ;


  void __cdecl rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int __cdecl _rmtmp(void);
  int __cdecl scanf(const char * __restrict__ _Format,...) ;
  int __cdecl _scanf_l(const char * __restrict__ format,_locale_t locale,... ) ;
  void __cdecl setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int __cdecl _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int __cdecl _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int __cdecl _get_output_format(void);
  unsigned int __cdecl __mingw_set_output_format(unsigned int _Format);
  unsigned int __cdecl __mingw_get_output_format(void);




  int __cdecl setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
  __attribute__ ((__dllimport__)) int __cdecl _scprintf(const char * __restrict__ _Format,...);
  int __cdecl sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...) ;
  int __cdecl _sscanf_l(const char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _snscanf_l(const char * __restrict__ input,size_t length,const char * __restrict__ format,_locale_t locale,...) ;
  FILE *__cdecl tmpfile(void) ;
  char *__cdecl tmpnam(char *_Buffer);
  int __cdecl ungetc(int _Ch,FILE *_File);
  int __cdecl vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  int __cdecl vprintf(const char * __restrict__ _Format,va_list _ArgList);


  extern
    __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
    int __cdecl __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
      va_list _ArgList);
  extern
    __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
    int __cdecl __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
  extern
    __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
    int __cdecl __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
    int __cdecl __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __cdecl __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __cdecl __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __cdecl __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __cdecl __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));

  __attribute__ ((__dllimport__)) int __cdecl _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _snprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
  __attribute__ ((__dllimport__)) int __cdecl _vsnprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,va_list argptr) ;
  int __cdecl sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) ;
  int __cdecl _sprintf_l(char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  int __cdecl vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) ;







  int __cdecl vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,va_list _ArgList) ;

  int __cdecl snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
# 313 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  int __cdecl vscanf(const char * __restrict__ Format, va_list argp);
  int __cdecl vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);
  int __cdecl vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);

  __attribute__ ((__dllimport__)) int __cdecl _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int __cdecl _get_printf_count_output(void);
# 331 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) FILE *__cdecl _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t __cdecl fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __cdecl _fgetwchar(void);
  wint_t __cdecl fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __cdecl _fputwchar(wchar_t _Ch);
  wint_t __cdecl getwc(FILE *_File);
  wint_t __cdecl getwchar(void);
  wint_t __cdecl putwc(wchar_t _Ch,FILE *_File);
  wint_t __cdecl putwchar(wchar_t _Ch);
  wint_t __cdecl ungetwc(wint_t _Ch,FILE *_File);
  wchar_t *__cdecl fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int __cdecl fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int __cdecl _putws(const wchar_t *_Str);
  int __cdecl fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int __cdecl wprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _scwprintf(const wchar_t * __restrict__ _Format,...);
  int __cdecl vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int __cdecl vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...) ;
  __attribute__ ((__dllimport__)) int __cdecl _swprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,... ) ;
  __attribute__ ((__dllimport__)) int __cdecl vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list) ;
  __attribute__ ((__dllimport__)) int __cdecl _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;





  int __cdecl snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int __cdecl vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
# 374 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  int __cdecl vwscanf (const wchar_t * __restrict__ , va_list);
  int __cdecl vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int __cdecl vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);

  __attribute__ ((__dllimport__)) int __cdecl _fwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _wprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _vfwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _vwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _swprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _vswprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _scwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _vscwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _wprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _wprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _vwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _vwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _fwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _fwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _vfwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _vfwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _swprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _swprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _vswprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _vswprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _scwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _scwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _vscwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _snwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _vsnwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int __cdecl _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __cdecl __swprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _vswprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,va_list argptr) ;
  __attribute__ ((__dllimport__)) int __cdecl __vswprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,va_list _Args) ;
# 418 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int __cdecl _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _vscwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  int __cdecl fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _fwscanf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  int __cdecl swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _swscanf_l(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _snwscanf_l(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  int __cdecl wscanf(const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _wscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE *__cdecl _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE *__cdecl _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE *__cdecl _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void __cdecl _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE *__cdecl _wpopen(const wchar_t *_Command,const wchar_t *_Mode);




  __attribute__ ((__dllimport__)) int __cdecl _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t __cdecl _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __cdecl _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __cdecl _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 476 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) void __cdecl _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void __cdecl _unlock_file(FILE *_File);
  __attribute__ ((__dllimport__)) int __cdecl _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int __cdecl _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __cdecl _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __cdecl _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long __cdecl _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int __cdecl _fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long __cdecl _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __cdecl _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __cdecl _ungetc_nolock(int _Ch,FILE *_File);





  char *__cdecl tempnam(const char *_Directory,const char *_FilePrefix) ;
  int __cdecl fcloseall(void) ;
  FILE *__cdecl fdopen(int _FileHandle,const char *_Format) ;
  int __cdecl fgetchar(void) ;
  int __cdecl fileno(FILE *_File) ;
  int __cdecl flushall(void) ;
  int __cdecl fputchar(int _Ch) ;
  int __cdecl getw(FILE *_File) ;
  int __cdecl putw(int _Ch,FILE *_File) ;
  int __cdecl rmtmp(void) ;






#pragma pack(pop)


# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 2 3
# 510 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_pop.h" 1 3
# 512 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
# 2 "C:/Users/PX/AppData/Roaming/Xilinx/Vitis/tb_MATRIX_MULT.c" 2
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stdint.h" 1 3 4
# 34 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stdint.h" 3 4
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 1 3 4
# 29 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 3 4
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
# 29 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 2 3 4




# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 32 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;




typedef unsigned short wchar_t;
# 33 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 2 3 4



typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned uint32_t;
__extension__ typedef long long int64_t;
__extension__ typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short int_least16_t;
typedef unsigned short uint_least16_t;
typedef int int_least32_t;
typedef unsigned uint_least32_t;
__extension__ typedef long long int_least64_t;
__extension__ typedef unsigned long long uint_least64_t;





typedef signed char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef short int_fast16_t;
typedef unsigned short uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
__extension__ typedef long long int_fast64_t;
__extension__ typedef unsigned long long uint_fast64_t;


__extension__ typedef long long intmax_t;
__extension__ typedef unsigned long long uintmax_t;
# 34 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stdint.h" 2 3 4
# 3 "C:/Users/PX/AppData/Roaming/Xilinx/Vitis/tb_MATRIX_MULT.c" 2
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3

# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 1 3 4
# 39 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 3 4
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\limits.h" 1 3 4






# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
# 7 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\limits.h" 2 3 4
# 39 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 2 3 4
# 11 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 37 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 typedef int (__cdecl *_onexit_t)(void);
# 47 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  typedef struct _div_t {
    int quot;
    int rem;
  } div_t;

  typedef struct _ldiv_t {
    long quot;
    long rem;
  } ldiv_t;





#pragma pack(4)
 typedef struct {
    unsigned char ld[10];
  } _LDOUBLE;
#pragma pack()



 typedef struct {
    double x;
  } _CRT_DOUBLE;

  typedef struct {
    float f;
  } _CRT_FLOAT;




  typedef struct {
    long double x;
  } _LONGDOUBLE;



#pragma pack(4)
 typedef struct {
    unsigned char ld12[12];
  } _LDBL12;
#pragma pack()
# 101 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 extern int * __imp___mb_cur_max;







  extern int* __imp___mbcur_max;
# 133 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  typedef void (__cdecl *_purecall_handler)(void);

  __attribute__ ((__dllimport__)) _purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler);
  __attribute__ ((__dllimport__)) _purecall_handler __cdecl _get_purecall_handler(void);

  typedef void (__cdecl *_invalid_parameter_handler)(const wchar_t *,const wchar_t *,const wchar_t *,unsigned int,uintptr_t);
  _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler _Handler);
  _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void);



  __attribute__ ((__dllimport__)) extern int *__cdecl _errno(void);

  errno_t __cdecl _set_errno(int _Value);
  errno_t __cdecl _get_errno(int *_Value);

  __attribute__ ((__dllimport__)) unsigned long *__cdecl __doserrno(void);

  errno_t __cdecl _set_doserrno(unsigned long _Value);
  errno_t __cdecl _get_doserrno(unsigned long *_Value);




  extern __attribute__ ((__dllimport__)) char *_sys_errlist[1];
  extern __attribute__ ((__dllimport__)) int _sys_nerr;
# 173 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern int * __imp___argc;







  extern char *** __imp___argv;







  extern wchar_t *** __imp___wargv;
# 201 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern char *** __imp__environ;
# 210 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern wchar_t *** __imp__wenviron;
# 219 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern char ** __imp__pgmptr;
# 228 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern wchar_t ** __imp__wpgmptr;



  errno_t __cdecl _get_pgmptr(char **_Value);
  errno_t __cdecl _get_wpgmptr(wchar_t **_Value);




  extern int * __imp__fmode;



  __attribute__ ((__dllimport__)) errno_t __cdecl _set_fmode(int _Mode);
  __attribute__ ((__dllimport__)) errno_t __cdecl _get_fmode(int *_PMode);





  extern unsigned int * __imp__osplatform;
# 258 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__osver;
# 267 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__winver;
# 276 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__winmajor;
# 285 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__winminor;




  errno_t __cdecl _get_osplatform(unsigned int *_Value);
  errno_t __cdecl _get_osver(unsigned int *_Value);
  errno_t __cdecl _get_winver(unsigned int *_Value);
  errno_t __cdecl _get_winmajor(unsigned int *_Value);
  errno_t __cdecl _get_winminor(unsigned int *_Value);
# 308 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  void __cdecl __attribute__ ((__nothrow__)) exit(int _Code) __attribute__ ((__noreturn__));
  __attribute__ ((__dllimport__)) void __cdecl __attribute__ ((__nothrow__)) _exit(int _Code) __attribute__ ((__noreturn__));



  void __cdecl _Exit(int) __attribute__ ((__noreturn__));
# 322 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  void __cdecl __attribute__((noreturn)) abort(void);




  __attribute__ ((__dllimport__)) unsigned int __cdecl _set_abort_behavior(unsigned int _Flags,unsigned int _Mask);



  int __cdecl abs(int _X);
  long __cdecl labs(long _X);


  __extension__ long long __cdecl _abs64(long long);
  int __cdecl atexit(void (__cdecl *)(void));


  double __cdecl atof(const char *_String);
  double __cdecl _atof_l(const char *_String,_locale_t _Locale);

  int __cdecl atoi(const char *_Str);
  __attribute__ ((__dllimport__)) int __cdecl _atoi_l(const char *_Str,_locale_t _Locale);
  long __cdecl atol(const char *_Str);
  __attribute__ ((__dllimport__)) long __cdecl _atol_l(const char *_Str,_locale_t _Locale);


  void *__cdecl bsearch(const void *_Key,const void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__cdecl *_PtFuncCompare)(const void *,const void *));
  void __cdecl qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__cdecl *_PtFuncCompare)(const void *,const void *));

  unsigned short __cdecl _byteswap_ushort(unsigned short _Short);

  __extension__ unsigned long long __cdecl _byteswap_uint64(unsigned long long _Int64);
  div_t __cdecl div(int _Numerator,int _Denominator);
  char *__cdecl getenv(const char *_VarName) ;
  __attribute__ ((__dllimport__)) char *__cdecl _itoa(int _Value,char *_Dest,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) char *__cdecl _i64toa(long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) char *__cdecl _ui64toa(unsigned long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long long __cdecl _atoi64(const char *_String);
  __extension__ __attribute__ ((__dllimport__)) long long __cdecl _atoi64_l(const char *_String,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long __cdecl _strtoi64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long __cdecl _strtoi64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __cdecl _strtoui64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __cdecl _strtoui64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  ldiv_t __cdecl ldiv(long _Numerator,long _Denominator);
  __attribute__ ((__dllimport__)) char *__cdecl _ltoa(long _Value,char *_Dest,int _Radix) ;
  int __cdecl mblen(const char *_Ch,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __cdecl _mblen_l(const char *_Ch,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t __cdecl _mbstrlen(const char *_Str);
  __attribute__ ((__dllimport__)) size_t __cdecl _mbstrlen_l(const char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t __cdecl _mbstrnlen(const char *_Str,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __cdecl _mbstrnlen_l(const char *_Str,size_t _MaxCount,_locale_t _Locale);
  int __cdecl mbtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes);
  __attribute__ ((__dllimport__)) int __cdecl _mbtowc_l(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
  size_t __cdecl mbstowcs(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __cdecl _mbstowcs_l(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale);
  int __cdecl rand(void);
  __attribute__ ((__dllimport__)) int __cdecl _set_error_mode(int _Mode);
  void __cdecl srand(unsigned int _Seed);



  double __cdecl __attribute__ ((__nothrow__)) strtod(const char * __restrict__ _Str,char ** __restrict__ _EndPtr);
  float __cdecl __attribute__ ((__nothrow__)) strtof(const char * __restrict__ nptr, char ** __restrict__ endptr);
  long double __cdecl __attribute__ ((__nothrow__)) strtold(const char * __restrict__ , char ** __restrict__ );


  extern double __cdecl __attribute__ ((__nothrow__))
  __strtod (const char * __restrict__ , char ** __restrict__);
# 401 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  float __cdecl __mingw_strtof (const char * __restrict__, char ** __restrict__);
  long double __cdecl __mingw_strtold(const char * __restrict__, char ** __restrict__);

  __attribute__ ((__dllimport__)) double __cdecl _strtod_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,_locale_t _Locale);
  long __cdecl strtol(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long __cdecl _strtol_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __cdecl strtoul(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long __cdecl _strtoul_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);


  int __cdecl system(const char *_Command);

  __attribute__ ((__dllimport__)) char *__cdecl _ultoa(unsigned long _Value,char *_Dest,int _Radix) ;
  int __cdecl wctomb(char *_MbCh,wchar_t _WCh) ;
  __attribute__ ((__dllimport__)) int __cdecl _wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale) ;
  size_t __cdecl wcstombs(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) size_t __cdecl _wcstombs_l(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale) ;



  void *__cdecl calloc(size_t _NumOfElements,size_t _SizeOfElements);
  void __cdecl free(void *_Memory);
  void *__cdecl malloc(size_t _Size);
  void *__cdecl realloc(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) void *__cdecl _recalloc(void *_Memory,size_t _Count,size_t _Size);






  __attribute__ ((__dllimport__)) void __cdecl _aligned_free(void *_Memory);
  __attribute__ ((__dllimport__)) void *__cdecl _aligned_malloc(size_t _Size,size_t _Alignment);



  __attribute__ ((__dllimport__)) void *__cdecl _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void *__cdecl _aligned_realloc(void *_Memory,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void *__cdecl _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void *__cdecl _aligned_offset_realloc(void *_Memory,size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void *__cdecl _aligned_offset_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment,size_t _Offset);





  __attribute__ ((__dllimport__)) wchar_t *__cdecl _itow(int _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _ltow(long _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) ;
  double __cdecl wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  float __cdecl wcstof(const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);

  float __cdecl wcstof( const wchar_t * __restrict__, wchar_t ** __restrict__);
  long double __cdecl wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);

  __attribute__ ((__dllimport__)) double __cdecl _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  long __cdecl wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long __cdecl _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __cdecl wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long __cdecl _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wgetenv(const wchar_t *_VarName) ;


  __attribute__ ((__dllimport__)) int __cdecl _wsystem(const wchar_t *_Command);

  __attribute__ ((__dllimport__)) double __cdecl _wtof(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) double __cdecl _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __cdecl _wtoi(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) int __cdecl _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) long __cdecl _wtol(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) long __cdecl _wtol_l(const wchar_t *_Str,_locale_t _Locale);

  __extension__ __attribute__ ((__dllimport__)) wchar_t *__cdecl _i64tow(long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) wchar_t *__cdecl _ui64tow(unsigned long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long long __cdecl _wtoi64(const wchar_t *_Str);
  __extension__ __attribute__ ((__dllimport__)) long long __cdecl _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long __cdecl _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long __cdecl _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __cdecl _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __cdecl _wcstoui64_l(const wchar_t *_Str ,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);




  __attribute__ ((__dllimport__)) char *__cdecl _fullpath(char *_FullPath,const char *_Path,size_t _SizeInBytes);
  __attribute__ ((__dllimport__)) char *__cdecl _ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char *__cdecl _fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char *__cdecl _gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  __attribute__ ((__dllimport__)) int __cdecl _atodbl(_CRT_DOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int __cdecl _atoldbl(_LDOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int __cdecl _atoflt(_CRT_FLOAT *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int __cdecl _atodbl_l(_CRT_DOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __cdecl _atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __cdecl _atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);





  __extension__ unsigned long long __cdecl _lrotl(unsigned long long _Val,int _Shift);
  __extension__ unsigned long long __cdecl _lrotr(unsigned long long _Val,int _Shift);







  __attribute__ ((__dllimport__)) void __cdecl _makepath(char *_Path,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  _onexit_t __cdecl _onexit(_onexit_t _Func);





  __attribute__ ((__dllimport__)) int __cdecl _putenv(const char *_EnvString);




  __extension__ unsigned long long __cdecl _rotl64(unsigned long long _Val,int _Shift);
  __extension__ unsigned long long __cdecl _rotr64(unsigned long long Value,int Shift);






  unsigned int __cdecl _rotr(unsigned int _Val,int _Shift);
  unsigned int __cdecl _rotl(unsigned int _Val,int _Shift);


  __extension__ unsigned long long __cdecl _rotr64(unsigned long long _Val,int _Shift);
  __attribute__ ((__dllimport__)) void __cdecl _searchenv(const char *_Filename,const char *_EnvVar,char *_ResultPath) ;
  __attribute__ ((__dllimport__)) void __cdecl _splitpath(const char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext) ;
  __attribute__ ((__dllimport__)) void __cdecl _swab(char *_Buf1,char *_Buf2,int _SizeInBytes);



  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) void __cdecl _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);




  __attribute__ ((__dllimport__)) int __cdecl _wputenv(const wchar_t *_EnvString);
  __attribute__ ((__dllimport__)) void __cdecl _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) ;
  __attribute__ ((__dllimport__)) void __cdecl _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) ;


  __attribute__ ((__dllimport__)) void __cdecl _beep(unsigned _Frequency,unsigned _Duration) __attribute__ ((__deprecated__));

  __attribute__ ((__dllimport__)) void __cdecl _seterrormode(int _Mode) __attribute__ ((__deprecated__));
  __attribute__ ((__dllimport__)) void __cdecl _sleep(unsigned long _Duration) __attribute__ ((__deprecated__));
# 575 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  char *__cdecl ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  char *__cdecl fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  char *__cdecl gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  char *__cdecl itoa(int _Val,char *_DstBuf,int _Radix) ;
  char *__cdecl ltoa(long _Val,char *_DstBuf,int _Radix) ;
  int __cdecl putenv(const char *_EnvString) ;
  void __cdecl swab(char *_Buf1,char *_Buf2,int _SizeInBytes) ;
  char *__cdecl ultoa(unsigned long _Val,char *_Dstbuf,int _Radix) ;
  _onexit_t __cdecl onexit(_onexit_t _Func);





  typedef struct { __extension__ long long quot, rem; } lldiv_t;

  __extension__ lldiv_t __cdecl lldiv(long long, long long);

  __extension__ long long __cdecl llabs(long long);




  __extension__ long long __cdecl strtoll(const char * __restrict__, char ** __restrict, int);
  __extension__ unsigned long long __cdecl strtoull(const char * __restrict__, char ** __restrict__, int);


  __extension__ long long __cdecl atoll (const char *);


  __extension__ long long __cdecl wtoll (const wchar_t *);
  __extension__ char *__cdecl lltoa (long long, char *, int);
  __extension__ char *__cdecl ulltoa (unsigned long long , char *, int);
  __extension__ wchar_t *__cdecl lltow (long long, wchar_t *, int);
  __extension__ wchar_t *__cdecl ulltow (unsigned long long, wchar_t *, int);
# 628 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
#pragma pack(pop)


# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdlib_s.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdlib_s.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdlib_s.h" 2 3
# 630 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3

# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 47 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
 typedef struct _heapinfo {
    int *_pentry;
    size_t _size;
    int _useflag;
  } _HEAPINFO;


  extern unsigned int _amblksiz;
# 100 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
void * __mingw_aligned_malloc (size_t _Size, size_t _Alignment);
void __mingw_aligned_free (void *_Memory);
void * __mingw_aligned_offset_realloc (void *_Memory, size_t _Size, size_t _Alignment, size_t _Offset);
void * __mingw_aligned_realloc (void *_Memory, size_t _Size, size_t _Offset);



  __attribute__ ((__dllimport__)) int __cdecl _resetstkoflw (void);
  __attribute__ ((__dllimport__)) unsigned long __cdecl _set_malloc_crt_max_wait(unsigned long _NewValue);

  __attribute__ ((__dllimport__)) void *__cdecl _expand(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) size_t __cdecl _msize(void *_Memory);






  __attribute__ ((__dllimport__)) size_t __cdecl _get_sbh_threshold(void);
  __attribute__ ((__dllimport__)) int __cdecl _set_sbh_threshold(size_t _NewValue);
  __attribute__ ((__dllimport__)) errno_t __cdecl _set_amblksiz(size_t _Value);
  __attribute__ ((__dllimport__)) errno_t __cdecl _get_amblksiz(size_t *_Value);
  __attribute__ ((__dllimport__)) int __cdecl _heapadd(void *_Memory,size_t _Size);
  __attribute__ ((__dllimport__)) int __cdecl _heapchk(void);
  __attribute__ ((__dllimport__)) int __cdecl _heapmin(void);
  __attribute__ ((__dllimport__)) int __cdecl _heapset(unsigned int _Fill);
  __attribute__ ((__dllimport__)) int __cdecl _heapwalk(_HEAPINFO *_EntryInfo);
  __attribute__ ((__dllimport__)) size_t __cdecl _heapused(size_t *_Used,size_t *_Commit);
  __attribute__ ((__dllimport__)) intptr_t __cdecl _get_heap_handle(void);
# 141 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
  static __inline void *_MarkAllocaS(void *_Ptr,unsigned int _Marker) {
    if(_Ptr) {
      *((unsigned int*)_Ptr) = _Marker;
      _Ptr = (char*)_Ptr + 16;
    }
    return _Ptr;
  }
# 160 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
  static __inline void __cdecl _freea(void *_Memory) {
    unsigned int _Marker;
    if(_Memory) {
      _Memory = (char*)_Memory - 16;
      _Marker = *(unsigned int *)_Memory;
      if(_Marker==0xDDDD) {
 free(_Memory);
      }





    }
  }
# 206 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
#pragma pack(pop)
# 631 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3
# 4 "C:/Users/PX/AppData/Roaming/Xilinx/Vitis/tb_MATRIX_MULT.c" 2
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 2 3






#pragma pack(push,_CRT_PACKING)
# 52 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
 typedef long clock_t;
# 89 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
  struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
  };




  extern __attribute__ ((__dllimport__)) int _daylight;
  extern __attribute__ ((__dllimport__)) long _dstbias;
  extern __attribute__ ((__dllimport__)) long _timezone;
  extern __attribute__ ((__dllimport__)) char * _tzname[2];

  __attribute__ ((__dllimport__)) errno_t __cdecl _get_daylight(int *_Daylight);
  __attribute__ ((__dllimport__)) errno_t __cdecl _get_dstbias(long *_Daylight_savings_bias);
  __attribute__ ((__dllimport__)) errno_t __cdecl _get_timezone(long *_Timezone);
  __attribute__ ((__dllimport__)) errno_t __cdecl _get_tzname(size_t *_ReturnValue,char *_Buffer,size_t _SizeInBytes,int _Index);
  char *__cdecl asctime(const struct tm *_Tm) ;
  char *__cdecl _ctime32(const __time32_t *_Time) ;
  clock_t __cdecl clock(void);
  double __cdecl _difftime32(__time32_t _Time1,__time32_t _Time2);
  struct tm *__cdecl _gmtime32(const __time32_t *_Time) ;
  struct tm *__cdecl _localtime32(const __time32_t *_Time) ;
  size_t __cdecl strftime(char * __restrict__ _Buf,size_t _SizeInBytes,const char * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t __cdecl _strftime_l(char * __restrict__ _Buf,size_t _Max_size,const char * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) char *__cdecl _strdate(char *_Buffer) ;
  __attribute__ ((__dllimport__)) char *__cdecl _strtime(char *_Buffer) ;
  __time32_t __cdecl _time32(__time32_t *_Time);
  __time32_t __cdecl _mktime32(struct tm *_Tm);
  __time32_t __cdecl _mkgmtime32(struct tm *_Tm);

  void __cdecl tzset(void) ;


  __attribute__ ((__dllimport__)) void __cdecl _tzset(void);


  double __cdecl _difftime64(__time64_t _Time1,__time64_t _Time2);
  __attribute__ ((__dllimport__)) char *__cdecl _ctime64(const __time64_t *_Time) ;
  __attribute__ ((__dllimport__)) struct tm *__cdecl _gmtime64(const __time64_t *_Time) ;
  __attribute__ ((__dllimport__)) struct tm *__cdecl _localtime64(const __time64_t *_Time) ;
  __attribute__ ((__dllimport__)) __time64_t __cdecl _mktime64(struct tm *_Tm);
  __attribute__ ((__dllimport__)) __time64_t __cdecl _mkgmtime64(struct tm *_Tm);
  __attribute__ ((__dllimport__)) __time64_t __cdecl _time64(__time64_t *_Time);
  unsigned __cdecl _getsystime(struct tm *_Tm);
  unsigned __cdecl _setsystime(struct tm *_Tm,unsigned _MilliSec);


  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wasctime(const struct tm *_Tm);
  wchar_t *__cdecl _wctime32(const __time32_t *_Time) ;
  size_t __cdecl wcsftime(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t __cdecl _wcsftime_l(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wstrdate(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wstrtime(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wctime64(const __time64_t *_Time) ;



  wchar_t *__cdecl _wctime(const time_t *) ;
# 168 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
double __cdecl difftime(time_t _Time1,time_t _Time2);
char *__cdecl ctime(const time_t *_Time) ;
struct tm *__cdecl gmtime(const time_t *_Time) ;
struct tm *__cdecl localtime(const time_t *_Time) ;
# 221 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
time_t __cdecl mktime(struct tm *_Tm);
time_t __cdecl _mkgmtime(struct tm *_Tm);
time_t __cdecl time(time_t *_Time);
# 251 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
  __attribute__ ((__dllimport__)) extern int daylight;
  __attribute__ ((__dllimport__)) extern long timezone;
  __attribute__ ((__dllimport__)) extern char *tzname[2];
  void __cdecl tzset(void) ;



# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_timeval.h" 1 3
# 11 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_timeval.h" 3
struct timeval
{
 long tv_sec;
 long tv_usec;
};
# 257 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 2 3




struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};

  extern int __cdecl mingw_gettimeofday (struct timeval *p, struct timezone *z);






#pragma pack(pop)


# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/time_s.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/time_s.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/time_s.h" 2 3
# 275 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 2 3



# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 10 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 2 3






#pragma pack(push,_CRT_PACKING)
# 54 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 3
 struct __timeb32 {
    __time32_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
  };


  struct timeb {
    time_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
  };


  struct __timeb64 {
    __time64_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
  };



  __attribute__ ((__dllimport__)) void __cdecl _ftime64(struct __timeb64 *_Time);
  __attribute__ ((__dllimport__)) void __cdecl _ftime(struct __timeb32 *);





struct timespec {
  time_t tv_sec;
  long tv_nsec;
};

struct itimerspec {
  struct timespec it_interval;
  struct timespec it_value;
};



  void __cdecl ftime (struct timeb *);
# 118 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 3
#pragma pack(pop)


# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/sys/timeb_s.h" 1 3
# 11 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/sys/timeb_s.h" 3
# 1 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 1 3
# 11 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/sys/timeb_s.h" 2 3
# 120 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 2 3
# 278 "C:/Xilinx/Vitis_HLS/2022.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 2 3
# 5 "C:/Users/PX/AppData/Roaming/Xilinx/Vitis/tb_MATRIX_MULT.c" 2
# 16 "C:/Users/PX/AppData/Roaming/Xilinx/Vitis/tb_MATRIX_MULT.c"
void initializeMatrixA(uint8_t A[(1 << 6)][(1 << 6)]);
void initializeMatrixB(uint8_t B[(1 << 6)][(1 << 6)]);

#ifndef HLS_FASTSIM
#ifdef __cplusplus
extern "C"
#endif
void apatb_matrixMultiplication_sw(unsigned char (*)[64], unsigned char (*)[64], unsigned int (*)[64]);
#endif
# 18 "C:/Users/PX/AppData/Roaming/Xilinx/Vitis/tb_MATRIX_MULT.c"
void matrixMultiplication(uint8_t A[(1 << 6)][(1 << 6)], uint8_t B[(1 << 6)][(1 << 6)], uint32_t AB[(1 << 6)][(1 << 6)]);


#ifndef HLS_FASTSIM
# 20 "C:/Users/PX/AppData/Roaming/Xilinx/Vitis/tb_MATRIX_MULT.c"
int main()
{
    uint8_t A[(1 << 6)][(1 << 6)] = {0};
    uint8_t B[(1 << 6)][(1 << 6)] = {0};
    uint32_t AB[(1 << 6)][(1 << 6)] = {0};

    srand(time(0));

    initializeMatrixA(A);
    initializeMatrixB(B);
    
#ifndef HLS_FASTSIM
#define matrixMultiplication apatb_matrixMultiplication_sw
#endif
# 30 "C:/Users/PX/AppData/Roaming/Xilinx/Vitis/tb_MATRIX_MULT.c"
matrixMultiplication(A, B, AB);
#undef matrixMultiplication
# 30 "C:/Users/PX/AppData/Roaming/Xilinx/Vitis/tb_MATRIX_MULT.c"


    for (int i = 0; i < (1 << 6); i++) {
            for (int j = 0; j < (1 << 6); j++) {
                printf("%u ", AB[i][j]);
            }
            printf("\n");
        }
    printf("Test passed");
    return 0;
}
#endif
# 40 "C:/Users/PX/AppData/Roaming/Xilinx/Vitis/tb_MATRIX_MULT.c"

