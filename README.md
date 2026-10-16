# Dota 2 server (libserver.so): reconstructed C++ declarations and pseudocode

This is NOT the original source. It is rebuilt from the DWARF debug info of the Linux `libserver.so`
and a Hex-Rays decompile of the same binary.

- Types, class layouts, method signatures and file paths come from DWARF.
  Field comments `// +0x18` are byte offsets, `// sizeof = N` closes a class.
- Function bodies are decompiler pseudocode (`v4`, `LABEL_12`, `_DWORD` casts, `__fastcall` are decompiler noise).
  Each function starts with a title line `// Qualified::name  (line N, @0xADDR, lib)` and, when known,
  `// calls:`, `// callers:`, `// strings:` and `// globals:` lines.
- Layout: `src/<module>/...` follows the original build paths. Declarations are in `.h`/`.cpp`;
  functions defined in headers are in a sibling `.inl`; template instantiations are in `_templates/`.
  Functions that DWARF does not describe (third-party code built without debug info) are in `src/_no_dwarf/libserver.cpp`;
  their names come from the binary's symbols.
- An inlined constructor is annotated: `v = operator new(0xF8u);  // new CFoo` and `this->_vptr_X = off_N;  // vptr: CFoo`
  name the class from the real virtual table of the binary (`(size matches)` = sizeof equals the allocation;
  `[vptr stores: ...]` lists base to derived stores). Two names of one function body (identical code folding) are
  shown as `// also named: ...`.
- Virtual calls are written `obj->Method(args)` when the vtable slot is known; `JUMPOUT(addr)` marks control flow
  Hex-Rays could not structure (39 lines in the whole tree).
