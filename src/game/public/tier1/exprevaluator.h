// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/exprevaluator.h:19
struct ExprNode {
	union {
		char cond;  // +0x0
		bool value;  // +0x0
	};

	union {
		char cond;  // +0x14
		bool value;  // +0x14
	} data;

	// sizeof = 24
};

// src/game/public/tier1/exprevaluator.h:37
class CExpressionEvaluator {
private:

	ExprTree m_ExprTree;  // +0x0
	char m_CurToken;  // +0x8

	const char * m_pExpression;  // +0x10
	int m_CurPosition;  // +0x18
	char m_Identifier[128];  // +0x1c

	GetSymbolProc_t m_pGetSymbolProc;  // +0xa0
	SyntaxErrorProc_t m_pSyntaxErrorProc;  // +0xa8
	bool m_bSetup;  // +0xb0
	CExpressionEvaluator();
	~CExpressionEvaluator();
	bool Evaluate(bool &, const char *, GetSymbolProc_t, SyntaxErrorProc_t);
	CExpressionEvaluator(CExpressionEvaluator &);
	char GetNextToken();
	void FreeNode(ExprNode *);
	ExprNode * AllocateNode();
	void FreeTree(ExprTree &);
	bool IsConditional(bool &, char);
	bool IsNotOp(char);
	bool IsIdentifierOrConstant(char);
	bool MakeExprNode(ExprTree &, char, Kind, ExprTree, ExprTree);
	bool MakeFactor(ExprTree &);
	bool MakeTerm(ExprTree &);
	bool MakeExpression(ExprTree &);
	bool BuildExpression();
	bool SimplifyNode(ExprTree &);

	// sizeof = 184
};
