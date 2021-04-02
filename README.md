# CE Fonts
Fonts for use with FontLibC for the TI-84 Plus CE

This has a few fonts available for the TI-84 Plus CE.
I actually had a fair bit of trouble finding any bitmap fonts from the 80s.
It seems suspiciously like people didn't start working on computized fonts until vector fonts came onto the scene.
Perhaps someone could dump fonts from an old laser or dot-matrix printer?

### Encoding

The Dr. Sans family uses a modified [Windows 1252](https://en.wikipedia.org/wiki/Windows-1252) codepage: there are a handful of characters changed and some added. The other fonts are more or less just straight Windows 1252, because I didn't feel like adapting them to have the additional characters.

The following characters are removed from Windows 1252: 
- All _combining_ diacritic marks, as FontLibC does not have support for combining marks: 
  - Circumflex ˆ 
  - Tilde ˜ (regular tilde ~ is still there)
  - Diaeresis ¨
  - Macron ¯
  - Acute accent ´
  - Cedilla ¸
- ƒ, because the florin is either rare or obsolete
- Ellipsis … because it's unnecessary
- ¥, because Japanese and Chinese aren't supported, so why bother?
- Broken bar ¦, because it's mostly pointless
- ™ © ®, because modern intellectual property law needs serious reform
- Soft hyphen (code point 0xAD), because you would need to implement that as a control code

The following additions have been made:
- A bunch of cursor characters
  - Codepoint 0 is the same width as other cursors, so it's a blank cursor in case your user interface needs that
- ▴ ▾ ◄ ► are also intended for cursors, specifically for pointing to things
- Some arrows ↑ ↓ ← →
- ↔, which did not display as an emoji in 1981
- ○ • for use in GUIs as either checkboxes or radio buttons
- Various math symbols: 
  - Integral ∫
  - There exists ∃
  - For all ∀
  - Therefore ∴
  - Root √
  - Inequality ≤ ≥ ≠ 
  - Approximately equal ≈
  - Infinity ∞
- Various Greek characters: α Γ γ Δ δ ε η θ Λ λ µ ξ Π π Σ σ φ Ω ω 
- You can do what everyone did in the 80s and pretend German [ß (ss ligature)](https://en.wikipedia.org/wiki/%C3%9F) is actually Greek beta β
- 0xAD `CALC1252_MINUS` − is the subtraction symbol, which is the same width as +, unlike 0x2D hypen-minus -
