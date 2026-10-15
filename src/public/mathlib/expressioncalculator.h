// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/expressioncalculator.h:25
struct VarNameHash_t {
	unsigned int operator()(const CUtlStringToken &);

	// sizeof = 1
};

// src/public/mathlib/expressioncalculator.h:35
class CExpressionCalculator {
	enum TokenType_t {
		TOK_LPAREN = 0,
		TOK_RPAREN = 0x1,
		TOK_COMPARE_EQUAL = 0x2,
		TOK_COMPARE_NOT_EQUAL = 0x3,
		TOK_COMPARE_GREATER_EQUAL = 0x4,
		TOK_COMPARE_LESS_EQUAL = 0x5,
		TOK_COMPARE_GREATER = 0x6,
		TOK_COMPARE_LESS = 0x7,
		TOK_CONDITIONAL_OR = 0x8,
		TOK_CONDITIONAL_AND = 0x9,
		TOK_CONDITIONAL_NOT = 0xa,
		TOK_ADD = 0xb,
		TOK_SUBTRACT = 0xc,
		TOK_MULTIPLY = 0xd,
		TOK_DIVIDE = 0xe,
		TOK_MODULUS = 0xf,
		TOK_QUESTION = 0x10,
		TOK_COLON = 0x11,
		TOK_COMMA = 0x12,
		TOK_NUMBER = 0x13,
		TOK_FUNCTION_1_ARGS = 0x14,
		TOK_FUNCTION_2_ARGS = 0x15,
		TOK_FUNCTION_3_ARGS = 0x16,
		TOK_FUNCTION_4_ARGS = 0x17,
		TOK_FUNCTION_5_ARGS = 0x18,
		TOK_IDENTIFIER = 0x19,
		TOK_COUNT = 0x1a,
	};

	struct Token_t {
		union {
			float m_flValue;  // +0x0
			uint32 m_nIdentifierId;  // +0x0
		};

		union {
			float m_flValue;  // +0x4
			uint32 m_nIdentifierId;  // +0x4
		};

		// sizeof = 8
	};

	struct EvalContext_t {
		int m_nTokenIndex;  // +0x20
		EvalContext_t();

		// sizeof = 40
	};

private:

	int m_nTokenCount;  // +0x0

	CExpressionCalculator(const char *, bool);
	~CExpressionCalculator();
	void SetExpression(const char *, bool);
	void SetVariable(const char *, float);
	void SetVariable(CUtlStringToken, float);
	void SetVariable(ExprVarHandle_t, float);
	bool Evaluate(float &);
	int VariableCount();
	const char * VariableName(int);
	ExprVarHandle_t FirstVariable();
	ExprVarHandle_t NextVariable(ExprVarHandle_t);
	ExprVarHandle_t InvalidVariable();
	CUtlStringToken VariableName(ExprVarHandle_t);
	bool ParseToken(const char * &, TokenType_t *);
	TokenType_t ComputeIdentifierType(CUtlStringToken, uint32 *);
	bool NextToken(EvalContext_t &, Token_t *);
	bool EvalToken(EvalContext_t &, TokenType_t);
	bool EvalTokenList(EvalContext_t &, TokenType_t *, int &);
	bool EvalLiteral(EvalContext_t &, float *);
	bool EvalIdentifier(EvalContext_t &, float *);
	bool EvalFunction(EvalContext_t &, TokenType_t, uint32 *);
	bool EvalExpr(EvalContext_t &);
	bool EvalConditional(EvalContext_t &);
	bool EvalOr(EvalContext_t &);
	bool EvalAnd(EvalContext_t &);
	bool EvalEquality(EvalContext_t &);
	bool EvalLessGreater(EvalContext_t &);
	bool EvalAddSub(EvalContext_t &);
	bool EvalDivMul(EvalContext_t &);
	bool EvalUnary(EvalContext_t &);
	bool EvalPrimary(EvalContext_t &);
	bool Eval1ArgFunc(EvalContext_t &);
	bool Eval2ArgFunc(EvalContext_t &);
	bool Eval3ArgFunc(EvalContext_t &);
	bool Eval5ArgFunc(EvalContext_t &);
	CExpressionCalculator(const CExpressionCalculator &);
	CExpressionCalculator & operator=(const CExpressionCalculator &);

	// sizeof = 56
};

// src/public/mathlib/expressioncalculator.h:35
class CExpressionCalculator {
	enum TokenType_t {
		TOK_LPAREN = 0,
		TOK_RPAREN = 0x1,
		TOK_COMPARE_EQUAL = 0x2,
		TOK_COMPARE_NOT_EQUAL = 0x3,
		TOK_COMPARE_GREATER_EQUAL = 0x4,
		TOK_COMPARE_LESS_EQUAL = 0x5,
		TOK_COMPARE_GREATER = 0x6,
		TOK_COMPARE_LESS = 0x7,
		TOK_CONDITIONAL_OR = 0x8,
		TOK_CONDITIONAL_AND = 0x9,
		TOK_CONDITIONAL_NOT = 0xa,
		TOK_ADD = 0xb,
		TOK_SUBTRACT = 0xc,
		TOK_MULTIPLY = 0xd,
		TOK_DIVIDE = 0xe,
		TOK_MODULUS = 0xf,
		TOK_QUESTION = 0x10,
		TOK_COLON = 0x11,
		TOK_COMMA = 0x12,
		TOK_NUMBER = 0x13,
		TOK_FUNCTION_1_ARGS = 0x14,
		TOK_FUNCTION_2_ARGS = 0x15,
		TOK_FUNCTION_3_ARGS = 0x16,
		TOK_FUNCTION_4_ARGS = 0x17,
		TOK_FUNCTION_5_ARGS = 0x18,
		TOK_IDENTIFIER = 0x19,
		TOK_COUNT = 0x1a,
	};

	struct Token_t {
		union {
			float m_flValue;  // +0x0
			uint32 m_nIdentifierId;  // +0x0
		};

		union {
			float m_flValue;  // +0x4
			uint32 m_nIdentifierId;  // +0x4
		};

		// sizeof = 8
	};

	struct EvalContext_t {
		int m_nTokenIndex;  // +0x20
		EvalContext_t();
		~EvalContext_t();

		// sizeof = 40
	};

private:

	int m_nTokenCount;  // +0x0

	CExpressionCalculator(const char *, bool);
	~CExpressionCalculator();
	void SetExpression(const char *, bool);
	void SetVariable(const char *, float);
	void SetVariable(CUtlStringToken, float);
	void SetVariable(ExprVarHandle_t, float);
	bool Evaluate(float &);
	int VariableCount();
	const char * VariableName(int);
	ExprVarHandle_t FirstVariable();
	ExprVarHandle_t NextVariable(ExprVarHandle_t);
	ExprVarHandle_t InvalidVariable();
	CUtlStringToken VariableName(ExprVarHandle_t);
	bool ParseToken(const char * &, TokenType_t *);
	TokenType_t ComputeIdentifierType(CUtlStringToken, uint32 *);
	bool NextToken(EvalContext_t &, Token_t *);
	bool EvalToken(EvalContext_t &, TokenType_t);
	bool EvalTokenList(EvalContext_t &, TokenType_t *, int &);
	bool EvalLiteral(EvalContext_t &, float *);
	bool EvalIdentifier(EvalContext_t &, float *);
	bool EvalFunction(EvalContext_t &, TokenType_t, uint32 *);
	bool EvalExpr(EvalContext_t &);
	bool EvalConditional(EvalContext_t &);
	bool EvalOr(EvalContext_t &);
	bool EvalAnd(EvalContext_t &);
	bool EvalEquality(EvalContext_t &);
	bool EvalLessGreater(EvalContext_t &);
	bool EvalAddSub(EvalContext_t &);
	bool EvalDivMul(EvalContext_t &);
	bool EvalUnary(EvalContext_t &);
	bool EvalPrimary(EvalContext_t &);
	bool Eval1ArgFunc(EvalContext_t &);
	bool Eval2ArgFunc(EvalContext_t &);
	bool Eval3ArgFunc(EvalContext_t &);
	bool Eval5ArgFunc(EvalContext_t &);
	CExpressionCalculator(const CExpressionCalculator &);
	CExpressionCalculator & operator=(const CExpressionCalculator &);
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 56
};
