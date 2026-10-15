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
  `src/_unknown/functions.cpp` holds compiler-generated functions with no known source file.
