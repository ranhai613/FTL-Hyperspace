---
layout: lua
title: TextString
lang: en
---

# Class "TextString"


## Constructors
{: #Constructors .section}
### TextString ()
{: #TextString aria-label='Constructors' }
#### [TextString](../Hyperspace/TextString) TextString ()
{: aria-label='Constructors' }

___
### TextString ()
{: #TextString aria-label='Constructors' }
#### [TextString](../Hyperspace/TextString) TextString (string str, boolean literal)
{: aria-label='Constructors' }

___




## Methods
{: #Methods .section}
### GetText ()
{: #GetText aria-label='Methods' }
#### string :GetText ()
{: aria-label='Methods' }
If `.isLiteral` is true, this gets the value of `.data`, otherwise it gets the text referring to the text id from the value of `.data`.

___


## Fields
{: #Fields .section}
### data
{: #data aria-label='Fields' }
#### string .data
{: aria-label='Fields' }
You can change the text by setting this value.
If `.isLiteral` is true, this stores the text itself, otherwise it stores the text id.

___
### isLiteral
{: #isLiteral aria-label='Fields' }
#### boolean .isLiteral
{: aria-label='Fields' }
If true, the game will display the value of `.data`, otherwise it will refer to the text id from the value of `.data`.

___
