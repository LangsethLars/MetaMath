#include "Test.h"
#include "Parser.h"
#include "Parser_MetaMathCFG.h"

#include <cstdio>
#include <cstdlib>


bool readFile(const char *filename, RawText &rawText)
{
	bool ok = false;
	FILE *fp = nullptr;
	long pos = 0L;
	size_t lenText = 0;

	fp = fopen(filename, "rb");
	if (!fp) goto Finished;

	if (fseek(fp, 0, SEEK_END) != 0) goto Finished;
	pos = ftell(fp);
	if (pos < 0) goto Finished;
	rewind(fp);

	lenText = size_t(pos);
	rawText.resize(lenText);
	if (fread(&rawText[0], lenText, 1, fp) < 1) goto Finished;

	ok = true;

Finished:
	if (fp) fclose(fp);
	return ok;
}



int test(const char *argv)
{
	Parser parser(Parser_MetaMathCFG::g_TokenClasses, Parser_MetaMathCFG::g_VariableClasses, Parser_MetaMathCFG::g_LexerTable, Parser_MetaMathCFG::g_Productions, Parser_MetaMathCFG::g_ParsingTable);

	bool ok =
		readFile(argv, parser.m_RawText) &&
		parser.lexAndParseRawText();

	parser.debug();

	return ok ? 0 : -1;
}
