---
layout: lua
title: ResourceControl
lang: en
---

# Class "ResourceControl"





## Methods
### CreateImagePrimitive ()
{: aria-label='Functions' }
#### [GL_Primitive](../Graphics/GL_Primitive) :CreateImagePrimitive ([GL_Texture](../Graphics/GL_Texture) tex, integer unk1, integer unk2, integer unk3, [GL_Color](../Graphics/GL_Color) color, number alpha, boolean mirror)
{: aria-label='Functions' }

______
### CreateImagePrimitiveString ()
{: aria-label='Functions' }
#### [GL_Primitive](../Graphics/GL_Primitive) :CreateImagePrimitiveString (string tex, integer x, integer y, integer rotation, [GL_Color](../Graphics/GL_Color) color, number alpha, boolean mirror)
{: aria-label='Functions' }

______
### GetFontData ()
{: aria-label='Functions' }
#### [freetype.font_data](../Graphics/freetype.font_data) :GetFontData (integer size, boolean ignoreLanguage)
{: aria-label='Functions' }

______
### GetImageId ()
{: aria-label='Functions' }
#### [GL_Texture](../Graphics/GL_Texture) :GetImageId (string dir)
{: aria-label='Functions' }

______
### ImageExists ()
{: aria-label='Functions' }
#### boolean :ImageExists (string name)
{: aria-label='Functions' }

______
### LoadFile ()
{: aria-label='Functions' }
#### string :LoadFile (string fileName)
{: aria-label='Functions' }

______
### RenderImage ()
{: aria-label='Functions' }
#### integer :RenderImage ([GL_Texture](../Graphics/GL_Texture) tex, integer x, integer y, integer rotation, [GL_Color](../Graphics/GL_Color) color, number opacity, boolean mirror)
{: aria-label='Functions' }

______
### RenderImageString ()
{: aria-label='Functions' }
#### integer :RenderImageString (string tex, integer x, integer y, integer rotation, [GL_Color](../Graphics/GL_Color) color, number opacity, boolean mirror)
{: aria-label='Functions' }

___

