---
layout: lua
title: freetype
lang: en
category: Class
---

# Class "freetype"




## Static Methods
{: #Static-Methods .lua-content-section}
### easy_measurePrintLines ()
{: #easy_measurePrintLines .lua-content-item aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .easy_measurePrintLines (integer fontSize, number x, number y, integer line_length, string text)
{: aria-label='StaticMethods' }
Return: The horizontal/vertical size of the text. Note that the augments `x` and `y` do not affect the return value.

___
### easy_measureWidth ()
{: #easy_measureWidth .lua-content-item aria-label='StaticMethods' }
#### integer .easy_measureWidth (integer fontSize, string text)
{: aria-label='StaticMethods' }
Return: The horizontal size of the text.

___
### easy_print ()
{: #easy_print .lua-content-item aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .easy_print (integer fontSize, number x, number y, string text)
{: aria-label='StaticMethods' }
Return.`x`: The horizontal size of the text.
Return.`y`: Y position of the last letter.

___
### easy_printAutoNewlines ()
{: #easy_printAutoNewlines .lua-content-item aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .easy_printAutoNewlines (integer fontSize, number x, number y, integer line_length, string text)
{: aria-label='StaticMethods' }
Return.`x`: The horizontal size of the text.
Return.`y`: Y position of the last letter.

___
### easy_printAutoShrink ()
{: #easy_printAutoShrink .lua-content-item aria-label='StaticMethods' }
#### void .easy_printAutoShrink (integer fontId, number x, number y, integer maxWidth, boolean centered, string text)
{: aria-label='StaticMethods' }

___
### easy_printCenter ()
{: #easy_printCenter .lua-content-item aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .easy_printCenter (integer fontSize, number x, number y, string text)
{: aria-label='StaticMethods' }

___
### easy_printNewlinesCentered ()
{: #easy_printNewlinesCentered .lua-content-item aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .easy_printNewlinesCentered (integer fontSize, number x, number y, integer line_length, string text)
{: aria-label='StaticMethods' }

___
### easy_printRightAlign ()
{: #easy_printRightAlign .lua-content-item aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .easy_printRightAlign (integer fontSize, number x, number y, string text)
{: aria-label='StaticMethods' }
Return.`x`: The value is somehow always fixed to 0.
Return.`y`: Y position of the last letter.

___


