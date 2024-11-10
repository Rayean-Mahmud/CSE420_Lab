%option noyywrap

%{
#include<bits/stdc++.h>
using namespace std;

ofstream yyoutlog; //output filestream for log file

string loglist = ""; //list of tokens along with line numbers

// define necessary c++ variables and functions here (if any)
int lines = 1;

%}

/* Regular Definitions */

delim	 [ \t\v\r]

/* write regular expressions for whitespace and newline */

ws [" "]	 

newline  [\n]

letter_	 [A-Za-z_]
digit	 [0-9]

/* write regular expressions for id, float and integers */		 

id {letter_}({letter_}|{digit})*

float_const {digit}*"."{digit}+([eE][+-]?{digit}+)?

int_const {digit}+

%%

{ws} { /* ignore whitespace */ }

{newline} {
		lines ++;

		}

"if" {
			loglist="Line no "+to_string(lines)+": Token <IF> Lexeme "+yytext+" found"+"\n"+"\n";
			yyoutlog<<loglist;

		}
"else" {                loglist = "Line No. " + to_string(lines) + ": Token <ELSE> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist;
		}

"while" {
			loglist="Line no "+to_string(lines)+": Token <WHILE> Lexeme "+yytext+" found"+"\n"+"\n";
			yyoutlog<<loglist;
		}


"for" {                 loglist = "Line No. " + to_string(lines) + ": Token <FOR> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist;
		}

 
"do" {               
                        loglist = "Line No. " + to_string(lines) + ": Token <DO> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
"break" {           
                        loglist = "Line No. " + to_string(lines) + ": Token <BREAK> Lexeme " + yytext + " found\n";
			yyoutlog << loglist; 
		}
"int" { 
                        loglist = "Line No. " + to_string(lines) + ": Token <INT> Lexeme " + yytext + " found\n"; 
			yyoutlog << loglist; 
		}
"char" {                loglist = "Line No. " + to_string(lines) + ": Token <CHAR> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
"float" {               loglist = "Line No. " + to_string(lines) + ": Token <FLOAT> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist;
		}
"double" {              loglist = "Line No. " + to_string(lines) + ": Token <DOUBLE> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}

"void" {                loglist = "Line No. " + to_string(lines) + ": Token <VOID> Lexeme " + yytext + " found\n"; 
                        yyoutlog << loglist; 
		}
"return" {              loglist = "Line No. " + to_string(lines) + ": Token <RETURN> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}

"switch" {              loglist = "Line No. " + to_string(lines) + ": Token <SWITCH> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
"case" {                loglist = "Line No. " + to_string(lines) + ": Token <CASE> Lexeme " + yytext + " found\n"; 
                        yyoutlog << loglist; 
		}
"default" {             loglist = "Line No. " + to_string(lines) + ": Token <DEFAULT> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
"continue" {            loglist = "Line No. " + to_string(lines) + ": Token <CONTINUE> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist;
		}
"goto" {                loglist = "Line No. " + to_string(lines) + ": Token <GOTO> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
"printf" {              loglist = "Line No. " + to_string(lines) + ": Token <PRINTF> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}

{id} {                  loglist = "Line No. " + to_string(lines) + ": Token <ID> Lexeme " + yytext + " found\n"; 
                        yyoutlog << loglist; 
		}

{int_const} {           loglist = "Line No. " + to_string(lines) + ": Token <CONST_INT> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
{float_const} {         loglist = "Line No. " + to_string(lines) + ": Token <CONST_FLOAT> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}

"+"|"-" {               loglist = "Line No. " + to_string(lines) + ": Token <ADDOP> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
"*"|"/"|"%" {           loglist = "Line No. " + to_string(lines) + ": Token <MULOP> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
"++"|"--" {             loglist = "Line No. " + to_string(lines) + ": Token <INCOP> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
"<"|">"|"=="|"<="|">="|"!=" { 
                        loglist = "Line No. " + to_string(lines) + ": Token <RELOP> Lexeme " + yytext + " found\n";
			yyoutlog << loglist; 
		}
"=" {                   loglist = "Line No. " + to_string(lines) + ": Token <ASSIGNOP> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
"&&"|"||" {             loglist = "Line No. " + to_string(lines) + ": Token <LOGICOP> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
"!"  {                  loglist = "Line No. " + to_string(lines) + ": Token <NOT> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
"(" {                   loglist = "Line No. " + to_string(lines) + ": Token <LPAREN> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist;
		}
")" {                   loglist = "Line No. " + to_string(lines) + ": Token <RPAREN> Lexeme " + yytext + " found\n"; 
                        yyoutlog << loglist; 
		}
"{" {                   
                        loglist = "Line No. " + to_string(lines) + ": Token <LCURL> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
"}" {                   loglist = "Line No. " + to_string(lines) + ": Token <RCURL> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
"[" {                   loglist = "Line No. " + to_string(lines) + ": Token <LTHIRD> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist;
		}
"]" {                   loglist = "Line No. " + to_string(lines) + ": Token <RTHIRD> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
"," {                   loglist = "Line No. " + to_string(lines) + ": Token <COMMA> Lexeme " + yytext + " found\n";
                        yyoutlog << loglist; 
		}
":" {                       
                        loglist = "Line No. " + to_string(lines) + ": Token <COLON> Lexeme " + yytext + " found\n";
		        yyoutlog << loglist;
		}
";" {  
                        loglist = "Line No. " + to_string(lines) + ": Token <SEMICOLON> Lexeme " + yytext + " found\n";
			yyoutlog << loglist;
		}


%%

int main(int argc, char *argv[])
{

	if(argc != 2) //check if file name is given
	{
		cout<<"Please input file name"<<endl;
		return 0;
	}

	yyin = fopen(argv[1], "r"); //the file to be read must be assigned to yyin

	yyoutlog.open("20101612_log.txt", ios::trunc); // remember to rename the log file as mentioned in the spec
	
	if(yyin == NULL) // file does not exist
	{
		cout << "Error: Could not open file " << argv[1] << endl;
		return 1;
	}
	
	yylex(); // start reading the input file in a loop
	
	yyoutlog << "Total lines: " << lines << endl;
	
	yyoutlog.close();  // close the log file
	
	fclose(yyin); // close the input file
}
