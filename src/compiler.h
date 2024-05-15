

/*****************************************************************************/
/*                                                                           */
/*  CROBOTS                                                                  */
/*                                                                           */
/*  (C) Copyright Tom Poindexter, 1985, all rights reserved.                 */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

/* compiler variables */

/* note-the EXT flag (or lack of it) causes the extern in all but one module */

#define MAXSYM    64    /* maximum number of symbol table entries per pool */
#define NESTLEVEL 16	/* maximum nest level for ifs, whiles, and fcalls */

int yyparse (void);
void yyerror (char *s);
extern char *yytext;	/* from lexical analyzer */

extern FILE *yyin,	/* the comiler input source file */
            *yyout;	/* the compiler diagnostic file, assumed opened */

int poolsize(char *pool);
int new_func();
int findvar(char s[],char *pool);
int allocvar(char s[],char *pool);
void end_func();
void dumpoff(char *pool);
int stackid(char id[],char *stack,int *ptr);
int popid(char id[],char *stack,int *ptr);
int efetch(int offset);
int estore(int offset, int operator);
int econst(long c);
int ebinop(int c);
int efcall(int c);
int eretsub();
int ebranch();
int echop();
int eframe();
int new_if();
int else_part();
int close_if();
int new_while();
int while_expr();
int close_while();
void decompile(struct instr *code);
void decinstr(struct instr *code);
void printop(int op);

#ifndef EXT
extern
#endif
char last_ident[ILEN],	/* last identifier recognized */
     func_ident[ILEN];	/* used on function definitions */

#ifndef EXT
extern
#endif
struct instr *last_ins,	/* last instruction compiled */
             *instruct;	/* current instruction */

#ifndef EXT
extern
#endif
long kk;		/* constant */

#ifndef EXT
extern
#endif
int num_parm,		/* number of parameters in a function definition */
    un_op,		/* for special unary operators */
    num_instr,		/* counts number of instructions */
    column,		/* from lexical analyzer */
    if_nest,		/* current if nest level */
    undeclared,		/* count variables that are implicit */
    postfix;		/* count the usage of postfix operators */

#ifndef EXT
extern
#endif
struct fix_if {
  struct instr *fix_true; /* where true branches around else */
  struct instr *fix_false;/* where if-false goes to */
} *ifs;


#ifndef EXT
extern
#endif
struct fix_while {
  struct instr *loop;	/* where end-of-while should loop to */
  struct instr *fix_br;	/* where while expr should branch on false */
} *whiles;



#ifndef EXT
extern
#endif
char *ext_tab,		/* external symbol table */
     *var_tab,		/* local symbol table */
     *func_tab,		/* function table */
     *func_stack,	/* function call stack */
     *var_stack;	/* variable stack */

#ifndef EXT
extern
#endif
int  func_off,		/* function stack offset */
     var_off,		/* variable stack offset */
     *op_stack,		/* assignment operator stack */
     op_off,		/* assignment operator offset */
     work,		/* integer work value */
     while_nest,	/* current while nest level */
     in_func;		/* in or not in function body, for variable declares */

#ifndef EXT
extern
#endif
struct func *new;	/* current function header */

/* end of compiler.h */
