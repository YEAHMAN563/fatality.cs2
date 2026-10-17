#pragma once

// The original external xorstr dependency is not part of this checkout.
// Keep the same macro interface so Release builds remain self-contained.
#ifndef xorstr_
#define xorstr_(value) (value)
#endif
