// Reconstructed from DWARF by pahole; not original source.

// src/thirdparty/json_parser/json_parser.c:121
struct JSON_parser_struct {
	JSON_parser_callback callback;  // +0x0
	void * ctx;  // +0x8
	signed char state;  // +0x10
	signed char before_comment_state;  // +0x11
	signed char type;  // +0x12
	signed char escaped;  // +0x13
	signed char comment;  // +0x14
	signed char allow_comments;  // +0x15
	signed char handle_floats_manually;  // +0x16
	signed char error;  // +0x17
	char decimal_point;  // +0x18

	UTF16 utf16_high_surrogate;  // +0x1a
	int current_char;  // +0x1c
	int depth;  // +0x20
	int top;  // +0x24
	int stack_capacity;  // +0x28

	signed char * stack;  // +0x30
	char * parse_buffer;  // +0x38
	size_t parse_buffer_capacity;  // +0x40
	size_t parse_buffer_count;  // +0x48
	signed char static_stack[128];  // +0x50
	char static_parse_buffer[3500];  // +0xd0

	JSON_malloc_t malloc;  // +0xe80
	JSON_free_t free;  // +0xe88

	// sizeof = 3728
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// set_error  (line 333, @0x0000000002f8ca20, libserver.so)
// callers: JSON_parser_char
// globals: jpt_2F8CA3C
void __fastcall set_error(JSON_parser jc)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx

  switch ( jc->state )
  {
    case 0:
      v1 = (jc->current_char - 91);
      if ( v1 <= 0x22 )
      {
        v2 = 0x500000005LL;
        if ( _bittest64(&v2, v1) )
          goto LABEL_6;
      }
      goto LABEL_5;
    case 2:
    case 3:
      jc->error = 8;
      break;
    case 4:
      jc->error = 9;
      break;
    case 6:
LABEL_6:
      jc->error = 7;
      break;
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0x22:
    case 0x23:
      jc->error = 4;
      break;
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      jc->error = 5;
      break;
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
      jc->error = 2;
      break;
    default:
LABEL_5:
      jc->error = 1;
      break;
  }
}


// push  (line 377, @0x0000000002f8c800, libserver.so)  // inlines: memcpy
// calls: memcpy
// callers: JSON_parser_reset, JSON_parser_char
int __fastcall push(JSON_parser jc, int mode)
{
  char v2; // r12
  int depth; // eax
  int top; // ecx
  char *v6; // rax
  int v7; // ecx
  int v9; // r14d
  size_t v10; // r15
  char *v11; // rax
  char *v12; // r13
  char *stack; // rsi

  v2 = mode;
  depth = jc->depth;
  top = jc->top;
  if ( depth < 0 )
  {
    if ( top != jc->stack_capacity )
      goto LABEL_3;
    v9 = 2 * top;
    v10 = top;
    v11 = jc->malloc(2 * top);
    v12 = v11;
    if ( v11 != 0 )
    {
      stack = jc->stack;
      jc->stack_capacity = v9;
      memcpy(v11, stack, v10);
      if ( jc->stack != jc->static_stack )
        (jc->free)();
      jc->stack = v12;
      top = jc->top;
      v6 = v12;
      goto LABEL_4;
    }
    jc->error = 10;
    return 0;
  }
  else
  {
    if ( depth != top )
    {
LABEL_3:
      v6 = jc->stack;
LABEL_4:
      v7 = top + 1;
      jc->top = v7;
      v6[v7] = v2;
      return 1;
    }
    jc->error = 6;
    return 0;
  }
}


// delete_JSON_parser  (line 442, @0x0000000002f8cad0, libserver.so)
// callers: ProtoBufHelper::ParseJSON, KeyValues::FromJSON
void __fastcall delete_JSON_parser(JSON_parser jc)
{
  if ( jc != 0 )
  {
    if ( jc->stack != jc->static_stack )
      (jc->free)();
    if ( jc->parse_buffer != jc->static_parse_buffer )
      (jc->free)();
    jc->free(jc);
  }
}


// JSON_parser_reset  (line 455, @0x0000000002f8cb30, libserver.so)
// calls: push
// callers: new_JSON_parser
int __fastcall JSON_parser_reset(JSON_parser jc)
{
  bool v2; // zf
  char *parse_buffer; // rax
  int depth; // edi
  char *v6; // rax

  if ( jc != 0 )
  {
    v2 = jc->parse_buffer == 0;
    jc->state = 0;
    jc->top = -1;
    if ( !v2 )
    {
LABEL_3:
      push(jc, 2);
      parse_buffer = jc->parse_buffer;
      jc->parse_buffer_count = 0;
      *parse_buffer = 0;
      return 1;
    }
    depth = jc->depth;
    if ( depth <= 0 )
    {
      jc->stack_capacity = 128;
      jc->depth = -1;
      goto LABEL_6;
    }
    jc->stack_capacity = depth;
    if ( depth <= 128 )
    {
LABEL_6:
      jc->stack = jc->static_stack;
LABEL_7:
      jc->parse_buffer_capacity = 3500;
      jc->parse_buffer = jc->static_parse_buffer;
      goto LABEL_3;
    }
    v6 = (jc->malloc)();
    jc->stack = v6;
    if ( v6 != 0 )
      goto LABEL_7;
  }
  return 0;
}


// new_JSON_parser  (line 498, @0x0000000002f8d7a0, libserver.so)  // inlines: memset
// calls: memset, V_localeconv, JSON_parser_reset, init_JSON_config
// callers: ProtoBufHelper::ParseJSON, KeyValues::FromJSON
JSON_parser __fastcall new_JSON_parser(const JSON_config *config)
{
  const JSON_config *p_default_config; // r12
  void *(*malloc)(size_t); // r13
  int v3; // r14d
  JSON_parser_struct *v4; // rax
  JSON_parser_struct *v5; // rbx
  void (*free)(void *); // rax
  int depth; // eax
  JSON_config default_config; // [rsp+0h] [rbp-50h] BYREF

  p_default_config = config;
  if ( config == 0 )
  {
    p_default_config = &default_config;
    init_JSON_config(&default_config);
  }
  malloc = p_default_config->malloc;
  if ( malloc != 0 && p_default_config->free != 0 )
  {
    v3 = 0;
    v4 = malloc(3728);
  }
  else
  {
    v3 = 1;
    malloc = &MemAlloc_AllocFunc;
    v4 = (MemAlloc_AllocFunc)(3728);
  }
  v5 = v4;
  if ( v4 == 0 )
    return 0;
  memset(v4, 0, sizeof(JSON_parser_struct));
  v5->malloc = malloc;
  if ( v3 != 0 )
    free = &MemAlloc_FreeFunc;
  else
    free = p_default_config->free;
  v5->free = free;
  v5->callback = p_default_config->callback;
  v5->ctx = p_default_config->callback_ctx;
  v5->allow_comments = p_default_config->allow_comments != 0;
  v5->handle_floats_manually = p_default_config->handle_floats_manually != 0;
  v5->decimal_point = **V_localeconv();
  depth = 1;
  if ( p_default_config->depth != 0 )
    depth = p_default_config->depth;
  v5->depth = depth;
  if ( JSON_parser_reset(v5) == 0 )
  {
    v5->free(v5);
    return 0;
  }
  return v5;
}


// parse_buffer_grow  (line 559, @0x0000000002f8c8c0, libserver.so)  // inlines: memcpy
// calls: memcpy
// callers: JSON_parser_char, JSON_parser_string
int __fastcall parse_buffer_grow(JSON_parser jc)
{
  size_t parse_buffer_count; // r14
  size_t v3; // r13
  char *v4; // rax
  char *v5; // r12

  parse_buffer_count = jc->parse_buffer_count;
  v3 = 2 * jc->parse_buffer_capacity;
  v4 = jc->malloc(v3);
  v5 = v4;
  if ( v4 != 0 )
  {
    memcpy(v4, jc->parse_buffer, parse_buffer_count);
    if ( jc->parse_buffer != jc->static_parse_buffer )
      (jc->free)();
    jc->parse_buffer = v5;
    jc->parse_buffer_capacity = v3;
    return 1;
  }
  else
  {
    jc->error = 10;
    return 0;
  }
}


// parse_parse_buffer  (line 616, @0x0000000002f8c940, libserver.so)
// calls: V_sscanf, V_strtod
// callers: JSON_parser_char
// strings: "%ld"
int __fastcall parse_parse_buffer(JSON_parser jc)
{
  JSON_parser_callback callback; // rax
  __int64 type; // rsi
  int result; // eax
  char *parse_buffer; // rax
  void *ctx; // rdi
  double v7; // xmm0_8
  JSON_parser_callback v8; // rax
  JSON_value value; // [rsp+0h] [rbp-20h] BYREF

  callback = jc->callback;
  if ( jc->callback == 0 )
    goto LABEL_8;
  type = jc->type;
  switch ( jc->type )
  {
    case 0:
      goto LABEL_8;
    case 6:
      if ( jc->handle_floats_manually == 0 )
      {
        v7 = V_strtod(jc->parse_buffer, 0);
        v8 = jc->callback;
        value.vu.float_value = v7;
        result = v8(jc->ctx, jc->type, &value);
LABEL_7:
        if ( result == 0 )
          return result;
        goto LABEL_8;
      }
LABEL_13:
      ctx = jc->ctx;
      value.vu.integer_value = jc->parse_buffer;
      value.vu.str.length = jc->parse_buffer_count;
      result = callback(ctx, type, &value);
      if ( result == 0 )
        return result;
LABEL_8:
      parse_buffer = jc->parse_buffer;
      jc->parse_buffer_count = 0;
      *parse_buffer = 0;
      return 1;
    case 0xA:
      goto LABEL_13;
    default:
      break;
  }
  if ( jc->type != 5 )
  {
    result = callback(jc->ctx, type, 0);
    goto LABEL_7;
  }
  V_sscanf(jc->parse_buffer, "%ld", &value);
  result = jc->callback(jc->ctx, jc->type, &value);
  if ( result != 0 )
    goto LABEL_8;
  return result;
}


// JSON_parser_char  (line 803, @0x0000000002f8cbe0, libserver.so)  // inlines: add_char_to_parse_buffer, add_escaped_char_to_parse_buffer, decode_unicode_char, parse_buffer_reserve_for, pop
// calls: parse_buffer_grow, parse_parse_buffer, set_error, push
// callers: ProtoBufHelper::ParseJSON, KeyValues::FromJSON, JSON_parser_string
// globals: ascii_class, state_transition_table, jpt_2F8CD60, jpt_2F8CD99, utf8_lead_bits
int __fastcall JSON_parser_char(JSON_parser jc, int next_char)
{
  __int64 v4; // r13
  size_t parse_buffer_count; // rax
  char *v6; // rdx
  char before_comment_state; // al
  int result; // eax
  size_t v9; // rax
  int v10; // eax
  size_t v11; // rax
  char *v12; // rdx
  size_t v13; // rax
  char *v14; // rdx
  size_t v15; // rax
  char *v16; // rdx
  size_t v17; // rax
  char *v18; // rdx
  size_t v19; // rax
  char *v20; // rdx
  size_t v21; // rax
  char *v22; // rdx
  size_t v23; // rax
  char *v24; // rdx
  size_t v25; // rax
  char *v26; // rdx
  size_t v27; // rax
  char *v28; // rdx
  size_t v29; // rax
  char *parse_buffer; // rdx
  size_t v31; // rax
  int v32; // eax
  char v33; // dl
  size_t v34; // rax
  char v35; // al
  size_t v36; // rax
  size_t v37; // rax
  size_t v38; // rax
  size_t v39; // rax
  char v40; // al
  char *v41; // rax
  int top; // eax
  char *v43; // rax
  char *v44; // r9
  unsigned int v45; // edx
  int v46; // ecx
  size_t v47; // r8
  char *v48; // rax
  unsigned int v49; // esi
  unsigned int v50; // edi
  unsigned int v51; // edi
  UTF16 utf16_high_surrogate; // ax
  size_t v53; // rax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  char v57; // cl
  __int64 v58; // rsi
  size_t v59; // rdi
  char *v60; // r8
  size_t v61; // rsi
  char *v62; // rdi
  unsigned int v63; // ecx
  JSON_parser_callback callback; // rax
  void *ctx; // rdi
  char *v66; // rax
  char state; // al
  JSON_value value; // [rsp+0h] [rbp-30h] BYREF

  jc->current_char = next_char;
  if ( next_char < 0 )
  {
    jc->error = 1;
    return 0;
  }
  if ( next_char > 127 )
  {
    v4 = 30;
LABEL_6:
    while ( 1 )
    {
      parse_buffer_count = jc->parse_buffer_count;
      if ( parse_buffer_count + 2 <= jc->parse_buffer_capacity )
        break;
      if ( parse_buffer_grow(jc) == 0 )
        return 0;
    }
    if ( jc->escaped != 0 )
    {
      jc->escaped = 0;
      jc->parse_buffer_count = parse_buffer_count - 1;
      jc->parse_buffer[parse_buffer_count - 1] = 0;
      switch ( next_char )
      {
        case '"':
          v29 = jc->parse_buffer_count;
          parse_buffer = jc->parse_buffer;
          jc->parse_buffer_count = v29 + 1;
          parse_buffer[v29] = 34;
          jc->parse_buffer[jc->parse_buffer_count] = 0;
          goto LABEL_11;
        case '/':
          v27 = jc->parse_buffer_count;
          v28 = jc->parse_buffer;
          jc->parse_buffer_count = v27 + 1;
          v28[v27] = 47;
          jc->parse_buffer[jc->parse_buffer_count] = 0;
          goto LABEL_11;
        case '\\':
          v25 = jc->parse_buffer_count;
          v26 = jc->parse_buffer;
          jc->parse_buffer_count = v25 + 1;
          v26[v25] = 92;
          jc->parse_buffer[jc->parse_buffer_count] = 0;
          goto LABEL_11;
        case 'b':
          v23 = jc->parse_buffer_count;
          v24 = jc->parse_buffer;
          jc->parse_buffer_count = v23 + 1;
          v24[v23] = 8;
          jc->parse_buffer[jc->parse_buffer_count] = 0;
          goto LABEL_11;
        case 'f':
          v21 = jc->parse_buffer_count;
          v22 = jc->parse_buffer;
          jc->parse_buffer_count = v21 + 1;
          v22[v21] = 12;
          jc->parse_buffer[jc->parse_buffer_count] = 0;
          goto LABEL_11;
        case 'n':
          v19 = jc->parse_buffer_count;
          v20 = jc->parse_buffer;
          jc->parse_buffer_count = v19 + 1;
          v20[v19] = 10;
          jc->parse_buffer[jc->parse_buffer_count] = 0;
          goto LABEL_11;
        case 'r':
          v17 = jc->parse_buffer_count;
          v18 = jc->parse_buffer;
          jc->parse_buffer_count = v17 + 1;
          v18[v17] = 13;
          jc->parse_buffer[jc->parse_buffer_count] = 0;
          goto LABEL_11;
        case 't':
          v15 = jc->parse_buffer_count;
          v16 = jc->parse_buffer;
          jc->parse_buffer_count = v15 + 1;
          v16[v15] = 9;
          jc->parse_buffer[jc->parse_buffer_count] = 0;
          goto LABEL_11;
        case 'u':
          v11 = jc->parse_buffer_count;
          v12 = jc->parse_buffer;
          jc->parse_buffer_count = v11 + 1;
          v12[v11] = 92;
          jc->parse_buffer[jc->parse_buffer_count] = 0;
          v13 = jc->parse_buffer_count;
          v14 = jc->parse_buffer;
          jc->parse_buffer_count = v13 + 1;
          v14[v13] = 117;
          jc->parse_buffer[jc->parse_buffer_count] = 0;
          goto LABEL_11;
        default:
          jc->error = 3;
          return 0;
      }
    }
    if ( jc->comment == 0 && (v4 > 1 || jc->type != 0) )
    {
      v6 = jc->parse_buffer;
      jc->parse_buffer_count = parse_buffer_count + 1;
      v6[parse_buffer_count] = next_char;
      jc->parse_buffer[jc->parse_buffer_count] = 0;
    }
LABEL_11:
    before_comment_state = state_transition_table[32 * jc->state + v4];
    if ( before_comment_state >= 0 )
    {
LABEL_12:
      jc->state = before_comment_state;
      return 1;
    }
    switch ( before_comment_state )
    {
      case -22:
        v44 = jc->parse_buffer;
        v45 = 0;
        v46 = 12;
        v47 = jc->parse_buffer_count;
        v48 = &v44[v47 - 4];
        do
        {
          v49 = *v48;
          v50 = v49 - 87;
          if ( v49 <= 0x60 )
          {
            v50 = v49 - 55;
            if ( v49 < 0x41 )
              v50 = v49 & 0xFFFFFFCF;
          }
          v51 = v50 << v46;
          v46 -= 4;
          ++v48;
          v45 |= v51;
        }
        while ( v46 != -4 );
        jc->parse_buffer_count = v47 - 6;
        v44[v47 - 6] = 0;
        utf16_high_surrogate = jc->utf16_high_surrogate;
        if ( utf16_high_surrogate != 0 )
        {
          if ( (v45 & 0xFC00) != 0xDC00 )
          {
LABEL_94:
            jc->error = 4;
            return 0;
          }
          v57 = 18;
          v58 = 3;
          v45 = (v45 & 0x3FF) + ((utf16_high_surrogate & 0x3FF) << 10) + 0x10000;
          jc->utf16_high_surrogate = 0;
          v56 = 12;
        }
        else if ( v45 <= 0x7F )
        {
          v56 = -6;
          v57 = 0;
          v58 = 0;
        }
        else if ( v45 <= 0x7FF )
        {
          v56 = 0;
          v57 = 6;
          v58 = 1;
        }
        else
        {
          v55 = v45 & 0xFC00;
          if ( v55 == 55296 )
          {
            jc->utf16_high_surrogate = v45;
            goto LABEL_108;
          }
          if ( v55 == 56320 )
            goto LABEL_94;
          v56 = 6;
          v57 = 12;
          v58 = 2;
        }
        v59 = jc->parse_buffer_count;
        v60 = jc->parse_buffer;
        jc->parse_buffer_count = v59 + 1;
        for ( v60[v59] = utf8_lead_bits[v58] | (v45 >> v57); v56 >= 0; v62[v61] = v63 )
        {
          v61 = jc->parse_buffer_count;
          v62 = jc->parse_buffer;
          jc->parse_buffer_count = v61 + 1;
          v63 = (v45 >> v56) & 0x3F | 0xFFFFFF80;
          v56 -= 6;
        }
        jc->parse_buffer[jc->parse_buffer_count] = 0;
LABEL_108:
        if ( jc->utf16_high_surrogate != 0 )
        {
          jc->state = 34;
          return 1;
        }
        else
        {
LABEL_82:
          jc->state = 7;
          return 1;
        }
      case -21:
        jc->escaped = 1;
        result = 1;
        jc->state = 8;
        return result;
      case -20:
        jc->type = 5;
        result = 1;
        jc->state = 15;
        return result;
      case -19:
        jc->type = 5;
        result = 1;
        jc->state = 14;
        return result;
      case -18:
        jc->type = 5;
        result = 1;
        jc->state = 13;
        return result;
      case -17:
        v43 = jc->parse_buffer;
        jc->parse_buffer_count = 0;
        *v43 = 0;
        jc->type = 10;
        goto LABEL_82;
      case -16:
        if ( jc->handle_floats_manually == 0 )
          jc->parse_buffer[jc->parse_buffer_count - 1] = jc->decimal_point;
        jc->type = 6;
        jc->state = 33;
        return 1;
      case -15:
        jc->type = 6;
        result = 1;
        jc->state = 17;
        return result;
      case -14:
        jc->type = 7;
        result = 1;
        jc->state = 27;
        return result;
      case -13:
        jc->type = 8;
        result = 1;
        jc->state = 20;
        return result;
      case -12:
        jc->type = 9;
        result = 1;
        jc->state = 23;
        return result;
      case -11:
        jc->comment = 0;
        before_comment_state = jc->before_comment_state;
        goto LABEL_12;
      case -10:
        if ( jc->allow_comments == 0 )
          return 0;
        v39 = jc->parse_buffer_count;
        jc->parse_buffer_count = v39 - 1;
        jc->parse_buffer[v39 - 1] = 0;
        if ( parse_parse_buffer(jc) == 0 )
          return 0;
        v40 = jc->stack[jc->top];
        if ( v40 == 1 || v40 == 4 )
        {
          state = 1;
          if ( (jc->state - 5) <= 1u )
            state = jc->state;
          jc->before_comment_state = state;
        }
        else
        {
          jc->before_comment_state = jc->state;
        }
        jc->type = 0;
        jc->state = 30;
        jc->comment = 1;
        return 1;
      case -9:
        v41 = jc->parse_buffer;
        jc->parse_buffer_count = 0;
        *v41 = 0;
        if ( jc->callback != 0 && jc->callback(jc->ctx, 4, 0) == 0 )
          return 0;
        top = jc->top;
        if ( top < 0 || jc->stack[top] != 3 )
          return 0;
        jc->state = 1;
        jc->top = top - 1;
        return 1;
      case -8:
        v38 = jc->parse_buffer_count;
        jc->parse_buffer_count = v38 - 1;
        jc->parse_buffer[v38 - 1] = 0;
        if ( parse_parse_buffer(jc) == 0 || jc->callback != 0 && jc->callback(jc->ctx, 4, 0) == 0 )
          return 0;
        v10 = jc->top;
        if ( v10 >= 0 && jc->stack[v10] == 4 )
          goto LABEL_61;
        goto LABEL_18;
      case -7:
        v9 = jc->parse_buffer_count;
        jc->parse_buffer_count = v9 - 1;
        jc->parse_buffer[v9 - 1] = 0;
        if ( parse_parse_buffer(jc) == 0 || jc->callback != 0 && jc->callback(jc->ctx, 2, 0) == 0 )
          return 0;
        v10 = jc->top;
        if ( v10 < 0 || jc->stack[v10] != 1 )
        {
LABEL_18:
          jc->error = 7;
          return 0;
        }
LABEL_61:
        jc->type = 0;
        jc->top = v10 - 1;
        jc->state = 1;
        return 1;
      case -6:
        v36 = jc->parse_buffer_count;
        jc->parse_buffer_count = v36 - 1;
        jc->parse_buffer[v36 - 1] = 0;
        if ( jc->callback != 0 && jc->callback(jc->ctx, 3, 0) == 0 || push(jc, 3) == 0 )
          return 0;
        jc->state = 2;
        return 1;
      case -5:
        v37 = jc->parse_buffer_count;
        jc->parse_buffer_count = v37 - 1;
        jc->parse_buffer[v37 - 1] = 0;
        if ( jc->callback != 0 && jc->callback(jc->ctx, 1, 0) == 0 || push(jc, 1) == 0 )
          return 0;
        jc->state = 6;
        return 1;
      case -4:
        v34 = jc->parse_buffer_count;
        jc->parse_buffer_count = v34 - 1;
        jc->parse_buffer[v34 - 1] = 0;
        v35 = jc->stack[jc->top];
        if ( v35 == 3 )
        {
          callback = jc->callback;
          jc->type = 0;
          jc->state = 4;
          if ( callback == 0
            || (ctx = jc->ctx,
                value.vu.integer_value = jc->parse_buffer,
                value.vu.str.length = jc->parse_buffer_count,
                (result = callback(ctx, 11, &value)) != 0) )
          {
            v66 = jc->parse_buffer;
            jc->parse_buffer_count = 0;
            *v66 = 0;
            return 1;
          }
          return result;
        }
        if ( (v35 == 4 || v35 == 1) && parse_parse_buffer(jc) != 0 )
        {
          jc->type = 0;
          jc->state = 1;
          return 1;
        }
        return 0;
      case -3:
        v31 = jc->parse_buffer_count;
        jc->parse_buffer_count = v31 - 1;
        jc->parse_buffer[v31 - 1] = 0;
        if ( parse_parse_buffer(jc) == 0 )
          return 0;
        v32 = jc->top;
        v33 = jc->stack[v32];
        if ( v33 == 1 )
        {
          jc->type = 0;
          jc->state = 5;
          return 1;
        }
        if ( v33 == 4 && v32 >= 0 )
        {
          jc->top = v32 - 1;
          if ( push(jc, 3) != 0 )
          {
            jc->type = 0;
            jc->state = 3;
            return 1;
          }
        }
        return 0;
      case -2:
        v53 = jc->parse_buffer_count;
        jc->parse_buffer_count = v53 - 1;
        jc->parse_buffer[v53 - 1] = 0;
        v54 = jc->top;
        if ( v54 < 0 )
          return 0;
        if ( jc->stack[v54] != 3 )
          return 0;
        jc->top = v54 - 1;
        if ( push(jc, 4) == 0 )
          return 0;
        jc->state = 5;
        return 1;
      default:
        goto LABEL_27;
    }
  }
  v4 = ascii_class[next_char];
  if ( v4 >= 0 )
    goto LABEL_6;
LABEL_27:
  set_error(jc);
  return 0;
}


// JSON_parser_string  (line 1126, @0x0000000002f8d520, libserver.so)  // inlines: parse_buffer_reserve_for
// calls: parse_buffer_grow, JSON_parser_char
// callers: KeyValues::FromJSON
int __fastcall JSON_parser_string(JSON_parser jc, const char *str, int maxchars)
{
  int v3; // ebx
  const char *v4; // r12
  int v5; // esi
  char *v7; // rcx
  int i; // r13d
  char v9; // al
  size_t parse_buffer_count; // rax
  size_t v11; // r15
  char *v12; // r15
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rax

  v3 = maxchars;
  if ( maxchars != 0 )
  {
    v4 = str;
    v5 = *str;
    if ( v5 != 0 )
    {
      while ( 1 )
      {
        if ( jc->state == 7 && v3 != 0 && v5 > 0x1Fu && v5 != 92 )
        {
          if ( v5 == 34 )
          {
            v5 = 34;
          }
          else
          {
            v7 = (v4 + 1);
            for ( i = 0; i + 1 < v3 || v3 < 0; ++i )
            {
              v9 = *v7;
              if ( *v7 <= 0x1Fu )
                break;
              if ( v9 == 92 )
                break;
              ++v7;
              if ( v9 == 34 )
                break;
            }
            if ( i != 0 )
            {
              while ( 1 )
              {
                parse_buffer_count = jc->parse_buffer_count;
                if ( parse_buffer_count + i + 1 <= jc->parse_buffer_capacity )
                  break;
                if ( parse_buffer_grow(jc) == 0 )
                  goto LABEL_26;
              }
              v4 += i;
              v11 = parse_buffer_count + i;
              v3 -= i;
              jc->parse_buffer_count = v11;
              v12 = &jc->parse_buffer[v11];
              v13 = -i;
              v14 = 0;
              do
              {
                v12[v13 + v14] = v4[v13 + v14];
                ++v14;
              }
              while ( v14 != ~v13 + 1LL );
              *v12 = 0;
              v5 = *v4;
            }
          }
        }
        if ( JSON_parser_char(jc, v5) == 0 )
          break;
        if ( --v3 == 0 )
          goto LABEL_27;
        v5 = *(v4 + 1);
        if ( v5 == 0 )
          return v3 <= 1;
        ++v4;
      }
LABEL_26:
      LODWORD(v15) = 0;
    }
    else
    {
      return v3 <= 1;
    }
  }
  else
  {
LABEL_27:
    LODWORD(v15) = 1;
  }
  return v15;
}


// JSON_parser_done  (line 1177, @0x0000000002f8d6b0, libserver.so)  // inlines: pop
// callers: ProtoBufHelper::ParseJSON, KeyValues::FromJSON
int __fastcall JSON_parser_done(JSON_parser jc)
{
  int top; // eax

  if ( jc->state <= 1u && (top = jc->top) >= 0 && jc->stack[top] == 2 )
  {
    jc->top = top - 1;
    return 1;
  }
  else
  {
    jc->error = 7;
    return 0;
  }
}


// JSON_parser_is_legal_white_space_string  (line 1189, @0x0000000002f8d6f0, libserver.so)
// globals: ascii_class
int __fastcall JSON_parser_is_legal_white_space_string(const char *s)
{
  if ( s == 0 )
    return 0;
  if ( *s == 0 )
    return 1;
  if ( *s <= 0x7F && ascii_class[*s] <= 1 )
  {
    while ( *++s != 0 )
    {
      if ( *s > 0x7F || ascii_class[*s] > 1 )
        return 0;
    }
    return 1;
  }
  return 0;
}


// JSON_parser_get_last_error  (line 1214, @0x0000000002f8d750, libserver.so)
int __fastcall JSON_parser_get_last_error(JSON_parser jc)
{
  return jc->error;
}


// init_JSON_config  (line 1220, @0x0000000002f8d760, libserver.so)  // inlines: memset
// callers: ProtoBufHelper::ParseJSON, KeyValues::FromJSON, new_JSON_parser
void __fastcall init_JSON_config(JSON_config *config)
{
  if ( config != 0 )
  {
    memset(config, 0, sizeof(JSON_config));
    config->depth = 127;
    config->malloc = &MemAlloc_AllocFunc;
    config->free = &MemAlloc_FreeFunc;
  }
}


