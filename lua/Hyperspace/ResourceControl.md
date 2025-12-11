---
layout: lua
title: ResourceControl
lang: en
---

# Class "ResourceControl"





## Methods
### CreateImagePrimitive ()
{: aria-label='Methods' }
#### [GL_Primitive](../Graphics/GL_Primitive) :CreateImagePrimitive ([GL_Texture](../Graphics/GL_Texture) tex, integer unk1, integer unk2, integer unk3, [GL_Color](../Graphics/GL_Color) color, number alpha, boolean mirror)
{: aria-label='Methods' }

______
### CreateImagePrimitiveString ()
{: aria-label='Methods' }
#### [GL_Primitive](../Graphics/GL_Primitive) :CreateImagePrimitiveString (string tex, integer x, integer y, integer rotation, [GL_Color](../Graphics/GL_Color) color, number alpha, boolean mirror)
{: aria-label='Methods' }

______
### GetFontData ()
{: aria-label='Methods' }
#### [freetype.font_data](../Graphics/freetype.font_data) :GetFontData (integer size, boolean ignoreLanguage)
{: aria-label='Methods' }

______
### GetImageId ()
{: aria-label='Methods' }
#### [GL_Texture](../Graphics/GL_Texture) :GetImageId (string dir)
{: aria-label='Methods' }

______
### ImageExists ()
{: aria-label='Methods' }
#### boolean :ImageExists (string name)
{: aria-label='Methods' }

______
### LoadFile ()
{: aria-label='Methods' }
#### string :LoadFile (string fileName)
{: aria-label='Methods' }

______
### RenderImage ()
{: aria-label='Methods' }
#### integer :RenderImage ([GL_Texture](../Graphics/GL_Texture) tex, integer x, integer y, integer rotation, [GL_Color](../Graphics/GL_Color) color, number opacity, boolean mirror)
{: aria-label='Methods' }

______
### RenderImageString ()
{: aria-label='Methods' }
#### integer :RenderImageString (string tex, integer x, integer y, integer rotation, [GL_Color](../Graphics/GL_Color) color, number opacity, boolean mirror)
{: aria-label='Methods' }

___

