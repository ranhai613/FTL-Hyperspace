---
layout: lua
title: freetype
lang: en
---

# Class "freetype"




## Static Methods
### easy_measurePrintLines ()
{: aria-label='StaticFunctions' }
#### [Pointf](../Hyperspace/Pointf) .easy_measurePrintLines (integer fontSize, number x, number y, integer line_length, string text)
{: aria-label='StaticFunctions' }
Return: The horizontal/vertical size of the text. Note that the augments `x` and `y` do not affect the return value.

______
### easy_measureWidth ()
{: aria-label='StaticFunctions' }
#### integer .easy_measureWidth (integer fontSize, string text)
{: aria-label='StaticFunctions' }
Return: The horizontal size of the text.

______
### easy_print ()
{: aria-label='StaticFunctions' }
#### [Pointf](../Hyperspace/Pointf) .easy_print (integer fontSize, number x, number y, string text)
{: aria-label='StaticFunctions' }
Return.`x`: The horizontal size of the text.
Return.`y`: Y position of the last letter.

______
### easy_printAutoNewlines ()
{: aria-label='StaticFunctions' }
#### [Pointf](../Hyperspace/Pointf) .easy_printAutoNewlines (integer fontSize, number x, number y, integer line_length, string text)
{: aria-label='StaticFunctions' }
Return.`x`: The horizontal size of the text.
Return.`y`: Y position of the last letter.

______
### easy_printAutoShrink ()
{: aria-label='StaticFunctions' }
#### void .easy_printAutoShrink (integer fontId, number x, number y, integer maxWidth, boolean centered, string text)
{: aria-label='StaticFunctions' }

______
### easy_printCenter ()
{: aria-label='StaticFunctions' }
#### [Pointf](../Hyperspace/Pointf) .easy_printCenter (integer fontSize, number x, number y, string text)
{: aria-label='StaticFunctions' }

______
### easy_printNewlinesCentered ()
{: aria-label='StaticFunctions' }
#### [Pointf](../Hyperspace/Pointf) .easy_printNewlinesCentered (integer fontSize, number x, number y, integer line_length, string text)
{: aria-label='StaticFunctions' }

______
### easy_printRightAlign ()
{: aria-label='StaticFunctions' }
#### [Pointf](../Hyperspace/Pointf) .easy_printRightAlign (integer fontSize, number x, number y, string text)
{: aria-label='StaticFunctions' }
Return.`x`: The value is somehow always fixed to 0.
Return.`y`: Y position of the last letter.

___


