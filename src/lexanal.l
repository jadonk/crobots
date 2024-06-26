D			[0-9]
L			[a-zA-Z_]

%{

/*****************************************************************************/
/*                                                                           */
/*  CROBOTS                                                                  */
/*                                                                           */
/*  (C) Copyright Tom Poindexter, 1985, all rights reserved.                 */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

/* lexical analyzer for crobots */

#include "tokens.h"
#include "crobots.h"
#include "compiler.h"

/* redefine i/o */
/* the i/o routines depend on yyin and yyout to be opened elsewhere */
#undef ECHO
#define ECHO fprintf(yyout,"%s",yytext)
#define YY_INPUT(buf,result,max_size) \
{ \
  int c; \
  c = fgetc(yyin); \
  result = (c == EOF) ? YY_NULL : (buf[0] = c, 1); \
}
#define output(c) putc(c,yyout)

long atol();
void count();
void comment();
int yywrap();
void allprint();
void sprint();


%}

%%
"/*"			{ comment(); }

"auto"			{ count(); return(AUTO); }
"break"			{ count(); return(BREAK); }
"else"			{ count(); return(ELSE); }
"extern"		{ count(); return(EXTERN); }
"for"			{ count(); return(FOR); }
"if"			{ count(); return(IF); }
"int"			{ count(); return(INT); }
"long"			{ count(); return(LONG); }
"register"		{ count(); return(REGISTER); }
"return"		{ count(); return(RETURN); }
"while"			{ count(); return(WHILE); }

{L}({L}|{D})*		{ count(); 
				strncpy(last_ident,yytext,ILEN-1);
				last_ident[ILEN-1] = '\0';
				return(IDENTIFIER); }

{D}+     		{ count(); 
				kk = atol(yytext);
				return(CONSTANT); }

">>="			{ count(); return(RIGHT_ASSIGN); }
"<<="			{ count(); return(LEFT_ASSIGN); }
"+="			{ count(); return(ADD_ASSIGN); }
"-="			{ count(); return(SUB_ASSIGN); }
"*="			{ count(); return(MUL_ASSIGN); }
"/="			{ count(); return(DIV_ASSIGN); }
"%="			{ count(); return(MOD_ASSIGN); }
"&="			{ count(); return(AND_ASSIGN); }
"^="			{ count(); return(XOR_ASSIGN); }
"|="			{ count(); return(OR_ASSIGN); }
">>"			{ count(); return(RIGHT_OP); }
"<<"			{ count(); return(LEFT_OP); }
"++"			{ count(); return(INC_OP); }
"--"			{ count(); return(DEC_OP); }
"&&"			{ count(); return(AND_OP); }
"||"			{ count(); return(OR_OP); }
"<="			{ count(); return(LE_OP); }
">="			{ count(); return(GE_OP); }
"=="			{ count(); return(EQ_OP); }
"!="			{ count(); return(NE_OP); }
";"			{ count(); return(';'); }
"{"			{ count(); return('{'); }
"}"			{ count(); return('}'); }
","			{ count(); return(','); }
"="			{ count(); return('='); }
"("			{ count(); return('('); }
")"			{ count(); return(')'); }
"."			{ count(); return('.'); }
"&"			{ count(); return('&'); }
"!"			{ count(); return('!'); }
"~"			{ count(); return('~'); }
"-"			{ count(); return('-'); }
"+"			{ count(); return('+'); }
"*"			{ count(); return('*'); }
"/"			{ count(); return('/'); }
"%"			{ count(); return('%'); }
"<"			{ count(); return('<'); }
">"			{ count(); return('>'); }
"^"			{ count(); return('^'); }
"|"			{ count(); return('|'); }

[ \t\v\n\f]		{ count(); }
.			{ /* ignore bad characters */ }

%%

int yywrap()
{
	return(1);
}

void comment()
{
	char c, c1;

	output('/');
	output('*');

loop:
	while ((c = input()) != '*' && c != 0)
		output(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0) {
		output('*');
		output(c1);
	}
}


void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}


/* these two dummy routines for lex's debug options */
void allprint() {}

void sprint() {} 

