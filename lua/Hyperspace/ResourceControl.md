---
layout: lua
title: ResourceControl
lang: en
---

# Class "ResourceControl"





## Methods
{: #Methods .section}
### CreateImagePrimitive ()
{: #CreateImagePrimitive aria-label='Methods' }
#### [GL_Primitive](../Graphics/GL_Primitive) :CreateImagePrimitive ([GL_Texture](../Graphics/GL_Texture) tex, integer unk1, integer unk2, integer unk3, [GL_Color](../Graphics/GL_Color) color, number alpha, boolean mirror)
{: aria-label='Methods' }

___
### CreateImagePrimitiveString ()
{: #CreateImagePrimitiveString aria-label='Methods' }
#### [GL_Primitive](../Graphics/GL_Primitive) :CreateImagePrimitiveString (string tex, integer x, integer y, integer rotation, [GL_Color](../Graphics/GL_Color) color, number alpha, boolean mirror)
{: aria-label='Methods' }

___
### GetFontData ()
{: #GetFontData aria-label='Methods' }
#### [freetype.font_data](../Graphics/freetype.font_data) :GetFontData (integer size, boolean ignoreLanguage)
{: aria-label='Methods' }

___
### GetImageId ()
{: #GetImageId aria-label='Methods' }
#### [GL_Texture](../Graphics/GL_Texture) :GetImageId (string dir)
{: aria-label='Methods' }

___
### ImageExists ()
{: #ImageExists aria-label='Methods' }
#### boolean :ImageExists (string name)
{: aria-label='Methods' }

___
### LoadFile ()
{: #LoadFile aria-label='Methods' }
#### string :LoadFile (string fileName)
{: aria-label='Methods' }

___
### RenderImage ()
{: #RenderImage aria-label='Methods' }
#### integer :RenderImage ([GL_Texture](../Graphics/GL_Texture) tex, integer x, integer y, integer rotation, [GL_Color](../Graphics/GL_Color) color, number opacity, boolean mirror)
{: aria-label='Methods' }

___
### RenderImageString ()
{: #RenderImageString aria-label='Methods' }
#### integer :RenderImageString (string tex, integer x, integer y, integer rotation, [GL_Color](../Graphics/GL_Color) color, number opacity, boolean mirror)
{: aria-label='Methods' }

___

