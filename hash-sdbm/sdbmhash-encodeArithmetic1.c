/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern int scanf(char const   *format  , ...) ;
extern int fclose(void *stream ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
int main(int argc , char **argv ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void abort() ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern int rand() ;
extern int raise(int sig ) ;
extern int gettimeofday(struct timeval *tv , void *tz  , ...) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern void signal(int sig , void *func ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
unsigned int SDBMHash(char *str , unsigned int len ) ;
extern void *malloc(unsigned long size ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
typedef unsigned long size_t;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
typedef struct _IO_FILE FILE;
extern void exit(int status ) ;
void megaInit(void) ;
unsigned int SDBMHash(char *str , unsigned int len ) 
{ 
  unsigned int hash ;
  unsigned int i ;

  {
  hash = 0U;
  i = 0U;
  i = 0U;
  while ((int )(((~ i & len) | (~ (i ^ len) & (i - len))) >> 31U)) {
    hash = (((((((unsigned int )*str | (hash << 6)) + ((unsigned int )*str & (hash << 6))) ^ ~ (hash << 16)) + (((((unsigned int )*str | (hash << 6)) + ((unsigned int )*str & (hash << 6))) | (hash << 16)) << 1U)) + 1U) + ~ hash) + 1U;
    str ++;
    i = (i | 1U) + (i & 1U);
  }
  return (hash);
}
}
int main(int argc , char **argv ) 
{ 
  unsigned char *str ;
  unsigned int hash ;
  size_t tmp ;
  unsigned int tmp___0 ;

  {
  megaInit();
  str = (unsigned char *)*(argv + 1);
  tmp = strlen((char const   *)str);
  tmp___0 = SDBMHash((char *)str, (unsigned int )tmp);
  hash = tmp___0;
  if (hash == 2312951406U) {
    printf((char const   */* __restrict  */)"The license key is correct!\n");
  } else {
    printf((char const   */* __restrict  */)"The license key is incorrect!\n");
  }
  return (0);
}
}
void megaInit(void) 
{ 


  {

}
}