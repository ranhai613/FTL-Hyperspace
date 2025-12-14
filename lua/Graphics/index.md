---
layout: lua
title: Graphics
lang: en
category: Module
---

# Module "Graphics"

<!-- Head content to be pulled from "lua-source-parts-inject/Graphics/Graphics/_head.md" -->



## Constants
{: #Constants .lua-content-section}
### Graphics.STENCIL_IGNORE
{: #STENCIL_IGNORE .lua-content-item aria-label='Constants' }
#### integer .STENCIL_IGNORE
{: aria-label='Constants' }
Equivalent to `0`.
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/STENCIL_IGNORE.md" -->

___
### Graphics.STENCIL_SET
{: #STENCIL_SET .lua-content-item aria-label='Constants' }
#### integer .STENCIL_SET
{: aria-label='Constants' }
Equivalent to `1`.
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/STENCIL_SET.md" -->

___
### Graphics.STENCIL_USE
{: #STENCIL_USE .lua-content-item aria-label='Constants' }
#### integer .STENCIL_USE
{: aria-label='Constants' }
Equivalent to `2`.
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/STENCIL_USE.md" -->

___


## Static Methods
{: #Static-Methods .lua-content-section}
### CSurface_AddTexVertices ()
{: #CSurface_AddTexVertices .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_AddTexVertices (vector\<[GL_TexVertex](GL_TexVertex)\> vec, number x1, number y1, number u1, number v1, number x2, number y2, number u2, number v2)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_AddTexVertices(vector_Graphics.GL_TexVertex_,number,number,number,number,number,number,number,number).md" -->
**Warning**: operations with `std::vector` are not yet implemented
<!-- End of content -->

___
### CSurface_GL_BlitImage ()
{: #CSurface_GL_BlitImage .lua-content-item aria-label='StaticMethods' }
#### boolean .CSurface_GL_BlitImage ([GL_Texture](GL_Texture) tex, number x, number y, number x2, number y2, number rotation, [GL_Color](GL_Color) color, boolean mirror)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_BlitImage(Graphics.GL_Texture,number,number,number,number,number,Graphics.GL_Color,boolean).md" -->
Renders an image texture
`float x, float y` -- starting point (top-left corner)
`float x2, float y2` -- width and length
<!-- End of content -->

___
### CSurface_GL_BlitImagePartial ()
{: #CSurface_GL_BlitImagePartial .lua-content-item aria-label='StaticMethods' }
#### boolean .CSurface_GL_BlitImagePartial ([GL_Texture](GL_Texture) tex, number x, number y, number size_x, number size_y, number start_x, number end_x, number start_y, number end_y, number alpha, [GL_Color](GL_Color) color, boolean mirror)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_BlitImagePartial(Graphics.GL_Texture,number,number,number,number,number,number,number,number,number,Graphics.GL_Color,boolean).md" -->
Renders a portion of an image texture
`float x, float y` -- starting point (top-left corner)
`float x2, float y2` -- width and length
`float start_x, float end_x, float start_y, float end_y` -- normalized coordinates of the portion of the texture to render
Example:
<!-- End of content -->

___
### CSurface_GL_BlitMultiColorImage ()
{: #CSurface_GL_BlitMultiColorImage .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_BlitMultiColorImage ([GL_Texture](GL_Texture) tex, vector\<[GL_ColorTexVertex](GL_ColorTexVertex)\> texVertices, boolean antialias)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_BlitMultiColorImage(Graphics.GL_Texture,vector_Graphics.GL_ColorTexVertex_,boolean).md" -->

___
### CSurface_GL_BlitMultiImage ()
{: #CSurface_GL_BlitMultiImage .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_BlitMultiImage ([GL_Texture](GL_Texture) tex, vector\<[GL_TexVertex](GL_TexVertex)\> texVertices, boolean antialias)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_BlitMultiImage(Graphics.GL_Texture,vector_Graphics.GL_TexVertex_,boolean).md" -->

___
### CSurface_GL_BlitPixelImage ()
{: #CSurface_GL_BlitPixelImage .lua-content-item aria-label='StaticMethods' }
#### boolean .CSurface_GL_BlitPixelImage ([GL_Texture](GL_Texture) tex, number x, number y, number x2, number y2, number rotation, [GL_Color](GL_Color) color, boolean mirror)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_BlitPixelImage(Graphics.GL_Texture,number,number,number,number,number,Graphics.GL_Color,boolean).md" -->

___
### CSurface_GL_BlitPixelImageWide ()
{: #CSurface_GL_BlitPixelImageWide .lua-content-item aria-label='StaticMethods' }
#### boolean .CSurface_GL_BlitPixelImageWide ([GL_Texture](GL_Texture) tex, number x, number y, integer x2, integer y2, number opacity, [GL_Color](GL_Color) color, boolean mirror)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_BlitPixelImageWide(Graphics.GL_Texture,number,number,integer,integer,number,Graphics.GL_Color,boolean).md" -->

___
### CSurface_GL_ClearAll ()
{: #CSurface_GL_ClearAll .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_ClearAll ()
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_ClearAll().md" -->
Remove everything that has been drawn.
<!-- End of content -->

___
### CSurface_GL_ClearColor ()
{: #CSurface_GL_ClearColor .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_ClearColor ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_ClearColor().md" -->

___
### CSurface_GL_CreateImagePrimitive ()
{: #CSurface_GL_CreateImagePrimitive .lua-content-item aria-label='StaticMethods' }
#### [GL_Primitive](GL_Primitive) .CSurface_GL_CreateImagePrimitive ([GL_Texture](GL_Texture) tex, number x, number y, number size_x, number size_y, number rotate, [GL_Color](GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_CreateImagePrimitive(Graphics.GL_Texture,number,number,number,number,number,Graphics.GL_Color).md" -->

___
### CSurface_GL_CreateMultiImagePrimitive ()
{: #CSurface_GL_CreateMultiImagePrimitive .lua-content-item aria-label='StaticMethods' }
#### [GL_Primitive](GL_Primitive) .CSurface_GL_CreateMultiImagePrimitive ([GL_Texture](GL_Texture) tex, vector\<[GL_TexVertex](GL_TexVertex)\> vec, [GL_Color](GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_CreateMultiImagePrimitive(Graphics.GL_Texture,vector_Graphics.GL_TexVertex_,Graphics.GL_Color).md" -->

___
### CSurface_GL_CreateMultiLinePrimitive ()
{: #CSurface_GL_CreateMultiLinePrimitive .lua-content-item aria-label='StaticMethods' }
#### [GL_Primitive](GL_Primitive) .CSurface_GL_CreateMultiLinePrimitive (vector\<[GL_Line](GL_Line)\> vec, [GL_Color](GL_Color) color, number thickness)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_CreateMultiLinePrimitive(vector_Graphics.GL_Line_,Graphics.GL_Color,number).md" -->

___
### CSurface_GL_CreateMultiRectPrimitive ()
{: #CSurface_GL_CreateMultiRectPrimitive .lua-content-item aria-label='StaticMethods' }
#### [GL_Primitive](GL_Primitive) .CSurface_GL_CreateMultiRectPrimitive (vector\<[Rect](../Hyperspace/Rect)\> vec, [GL_Color](GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_CreateMultiRectPrimitive(vector_Hyperspace.Rect_,Graphics.GL_Color).md" -->

___
### CSurface_GL_CreatePixelImagePrimitive ()
{: #CSurface_GL_CreatePixelImagePrimitive .lua-content-item aria-label='StaticMethods' }
#### [GL_Primitive](GL_Primitive) .CSurface_GL_CreatePixelImagePrimitive ([GL_Texture](GL_Texture) tex, number x, number y, number size_x, number size_y, number rotate, [GL_Color](GL_Color) color, boolean unk)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_CreatePixelImagePrimitive(Graphics.GL_Texture,number,number,number,number,number,Graphics.GL_Color,boolean).md" -->

___
### CSurface_GL_CreateRectOutlinePrimitive ()
{: #CSurface_GL_CreateRectOutlinePrimitive .lua-content-item aria-label='StaticMethods' }
#### [GL_Primitive](GL_Primitive) .CSurface_GL_CreateRectOutlinePrimitive (integer x, integer y, integer w, integer h, [GL_Color](GL_Color) color, number lineWidth)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_CreateRectOutlinePrimitive(integer,integer,integer,integer,Graphics.GL_Color,number).md" -->

___
### CSurface_GL_CreateRectPrimitive ()
{: #CSurface_GL_CreateRectPrimitive .lua-content-item aria-label='StaticMethods' }
#### [GL_Primitive](GL_Primitive) .CSurface_GL_CreateRectPrimitive (number x, number y, number w, number h, [GL_Color](GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_CreateRectPrimitive(number,number,number,number,Graphics.GL_Color).md" -->

___
### CSurface_GL_DestroyPrimitive ()
{: #CSurface_GL_DestroyPrimitive .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_DestroyPrimitive ([GL_Primitive](GL_Primitive) primitive)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_DestroyPrimitive(Graphics.GL_Primitive).md" -->

___
### CSurface_GL_DisableBlend ()
{: #CSurface_GL_DisableBlend .lua-content-item aria-label='StaticMethods' }
#### boolean .CSurface_GL_DisableBlend ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_DisableBlend().md" -->

___
### CSurface_GL_DrawCircle ()
{: #CSurface_GL_DrawCircle .lua-content-item aria-label='StaticMethods' }
#### boolean .CSurface_GL_DrawCircle (number x, number y, number radius, [GL_Color](GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_DrawCircle(number,number,number,Graphics.GL_Color).md" -->
Renders a full circle
`float x, float y` -- center point
`radius` -- the radius of the circle
<!-- End of content -->

___
### CSurface_GL_DrawEllipse ()
{: #CSurface_GL_DrawEllipse .lua-content-item aria-label='StaticMethods' }
#### boolean .CSurface_GL_DrawEllipse (integer x, integer y, integer a1, integer b1, [GL_Color](GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_DrawEllipse(integer,integer,integer,integer,Graphics.GL_Color).md" -->
Draws a full ellipse.
`int x, int y` -- The coordinates of the ellipse's center
`int a1` -- The horizontal radius.
`int a2` -- The vertical radius.
`GL_Color color` -- The color of the ellipse, normalized to RGBA values within the range [0, 1]
<!-- End of content -->

___
### CSurface_GL_DrawLaser ()
{: #CSurface_GL_DrawLaser .lua-content-item aria-label='StaticMethods' }
#### boolean .CSurface_GL_DrawLaser (integer x, integer y, integer w, integer h, [GL_Color](GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_DrawLaser(integer,integer,integer,integer,Graphics.GL_Color).md" -->
Renders a beam.
`int x, int y` -- origin point
`int w` -- beam length
`int h` -- beam thickness
<!-- End of content -->

___
### CSurface_GL_DrawLine ()
{: #CSurface_GL_DrawLine .lua-content-item aria-label='StaticMethods' }
#### boolean .CSurface_GL_DrawLine (number x1, number y1, number x2, number y2, number lineWidth, [GL_Color](GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_DrawLine(number,number,number,number,number,Graphics.GL_Color).md" -->
Renders a line
`float x1, float y1` -- starting point
`float x2, float y2` -- end point
<!-- End of content -->

___
### CSurface_GL_DrawRect ()
{: #CSurface_GL_DrawRect .lua-content-item aria-label='StaticMethods' }
#### boolean .CSurface_GL_DrawRect (number x1, number y1, number x2, number y2, [GL_Color](GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_DrawRect(number,number,number,number,Graphics.GL_Color).md" -->
Renders a rectangle
`float x1, float y1` -- starting point (top-left corner)
`float x2, float y2` -- width and length
<!-- End of content -->

___
### CSurface_GL_DrawRectOutline ()
{: #CSurface_GL_DrawRectOutline .lua-content-item aria-label='StaticMethods' }
#### boolean .CSurface_GL_DrawRectOutline (integer x1, integer y1, integer x2, integer y2, [GL_Color](GL_Color) color, number lineWidth)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_DrawRectOutline(integer,integer,integer,integer,Graphics.GL_Color,number).md" -->
Renders a rectange, no fill
`float x1, float y1` -- starting point (top-left corner)
`float x2, float y2` -- width and length
<!-- End of content -->

___
### CSurface_GL_DrawShield ()
{: #CSurface_GL_DrawShield .lua-content-item aria-label='StaticMethods' }
#### boolean .CSurface_GL_DrawShield (integer x, integer y, number a1, number b1, integer angle1, integer angle2, [GL_Color](GL_Color) color, number thickness)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_DrawShield(integer,integer,number,number,integer,integer,Graphics.GL_Color,number).md" -->
Renders a gradient shield effect. (like how a portion of the shield turns white when a beam hits it)
`int x, int y` -- center point
`float a1, float b1` -- radius X, radius Y
`int angle1, int angle2` -- start direction, end direction
<!-- End of content -->

___
### CSurface_GL_DrawTriangle ()
{: #CSurface_GL_DrawTriangle .lua-content-item aria-label='StaticMethods' }
#### boolean .CSurface_GL_DrawTriangle ([Point](../Hyperspace/Point) vertex1, [Point](../Hyperspace/Point) vertex2, [Point](../Hyperspace/Point) vertex3, [GL_Color](GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_DrawTriangle(Hyperspace.Point,Hyperspace.Point,Hyperspace.Point,Graphics.GL_Color).md" -->
Renders a triangle. The verticies are constructed with `Hyperspace.Point(x, y)`
<!-- End of content -->

___
### CSurface_GL_EnableBlend ()
{: #CSurface_GL_EnableBlend .lua-content-item aria-label='StaticMethods' }
#### boolean .CSurface_GL_EnableBlend ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_EnableBlend().md" -->

___
### CSurface_GL_GetColor ()
{: #CSurface_GL_GetColor .lua-content-item aria-label='StaticMethods' }
#### [GL_Color](GL_Color) .CSurface_GL_GetColor ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_GetColor().md" -->

___
### CSurface_GL_LoadIdentity ()
{: #CSurface_GL_LoadIdentity .lua-content-item aria-label='StaticMethods' }
#### integer .CSurface_GL_LoadIdentity ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_LoadIdentity().md" -->

___
### CSurface_GL_OrthoProjection ()
{: #CSurface_GL_OrthoProjection .lua-content-item aria-label='StaticMethods' }
#### integer .CSurface_GL_OrthoProjection (number mx1, number mx2, number mx3, number mx4, number mx5, number mx6)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_OrthoProjection(number,number,number,number,number,number).md" -->

___
### CSurface_GL_PopMatrix ()
{: #CSurface_GL_PopMatrix .lua-content-item aria-label='StaticMethods' }
#### integer .CSurface_GL_PopMatrix ()
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_PopMatrix().md" -->
Remove the current graphic from the selected stack.
<!-- End of content -->

___
### CSurface_GL_PopScissor ()
{: #CSurface_GL_PopScissor .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_PopScissor ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_PopScissor().md" -->

___
### CSurface_GL_PopStencilMode ()
{: #CSurface_GL_PopStencilMode .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_PopStencilMode ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_PopStencilMode().md" -->

___
### CSurface_GL_PushMatrix ()
{: #CSurface_GL_PushMatrix .lua-content-item aria-label='StaticMethods' }
#### integer .CSurface_GL_PushMatrix ()
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_PushMatrix().md" -->
Push the current graphic, that is about to be drawn, onto the selected stack. Which can later be modified with other `CSurface` methods.
<!-- End of content -->

___
### CSurface_GL_PushStencilMode ()
{: #CSurface_GL_PushStencilMode .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_PushStencilMode ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_PushStencilMode().md" -->

___
### CSurface_GL_RemoveColorTint ()
{: #CSurface_GL_RemoveColorTint .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_RemoveColorTint ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_RemoveColorTint().md" -->

___
### CSurface_GL_RenderPrimitive ()
{: #CSurface_GL_RenderPrimitive .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_RenderPrimitive ([GL_Primitive](GL_Primitive) primitive)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_RenderPrimitive(Graphics.GL_Primitive).md" -->

___
### CSurface_GL_RenderPrimitiveWithAlpha ()
{: #CSurface_GL_RenderPrimitiveWithAlpha .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_RenderPrimitiveWithAlpha ([GL_Primitive](GL_Primitive) primitive, number alpha)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_RenderPrimitiveWithAlpha(Graphics.GL_Primitive,number).md" -->

___
### CSurface_GL_RenderPrimitiveWithColor ()
{: #CSurface_GL_RenderPrimitiveWithColor .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_RenderPrimitiveWithColor ([GL_Primitive](GL_Primitive) primitive, [GL_Color](GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_RenderPrimitiveWithColor(Graphics.GL_Primitive,Graphics.GL_Color).md" -->

___
### CSurface_GL_Rotate ()
{: #CSurface_GL_Rotate .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_Rotate (number angle, number x, number y, number z=1.f)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_Rotate(number,number,number,number).md" -->

___
### CSurface_GL_Scale ()
{: #CSurface_GL_Scale .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_Scale (number x, number y, number z)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_Scale(number,number,number).md" -->

___
### CSurface_GL_SetColor ()
{: #CSurface_GL_SetColor .lua-content-item aria-label='StaticMethods' }
#### integer .CSurface_GL_SetColor ([GL_Color](GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_SetColor(Graphics.GL_Color).md" -->

___
### CSurface_GL_SetColorTint ()
{: #CSurface_GL_SetColorTint .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_SetColorTint ([GL_Color](GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_SetColorTint(Graphics.GL_Color).md" -->

___
### CSurface_GL_SetStencilMode ()
{: #CSurface_GL_SetStencilMode .lua-content-item aria-label='StaticMethods' }
#### void .CSurface_GL_SetStencilMode (GL_StencilMode stencilMode, integer ref, integer mask)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_SetStencilMode(GL_StencilMode,integer,integer).md" -->

___
### CSurface_GL_Translate ()
{: #CSurface_GL_Translate .lua-content-item aria-label='StaticMethods' }
#### boolean .CSurface_GL_Translate (number x, number y, number z=0.f)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GL_Translate(number,number,number).md" -->

___
### CSurface_GetColorTint ()
{: #CSurface_GetColorTint .lua-content-item aria-label='StaticMethods' }
#### [GL_Color](GL_Color) .CSurface_GetColorTint ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/CSurface_GetColorTint().md" -->

___
### GL_Color_FromHSV ()
{: #GL_Color_FromHSV .lua-content-item aria-label='StaticMethods' }
#### [GL_Color](GL_Color) .GL_Color_FromHSV (number fH, number fS, number fV, number fA)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/GL_Color_FromHSV(number,number,number,number).md" -->

___
### freetype_easy_measurePrintLines ()
{: #freetype_easy_measurePrintLines .lua-content-item aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .freetype_easy_measurePrintLines (integer fontSize, number x, number y, integer line_length, string text)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/freetype_easy_measurePrintLines(integer,number,number,integer,string).md" -->
Return: The horizontal/vertical size of the text. Note that the augments `x` and `y` do not affect the return value.
<!-- End of content -->

___
### freetype_easy_measureWidth ()
{: #freetype_easy_measureWidth .lua-content-item aria-label='StaticMethods' }
#### integer .freetype_easy_measureWidth (integer fontSize, string text)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/freetype_easy_measureWidth(integer,string).md" -->
Return: The horizontal size of the text.
<!-- End of content -->

___
### freetype_easy_print ()
{: #freetype_easy_print .lua-content-item aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .freetype_easy_print (integer fontSize, number x, number y, string text)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/freetype_easy_print(integer,number,number,string).md" -->
Return.`x`: The horizontal size of the text.
Return.`y`: Y position of the last letter.
<!-- End of content -->

___
### freetype_easy_printAutoNewlines ()
{: #freetype_easy_printAutoNewlines .lua-content-item aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .freetype_easy_printAutoNewlines (integer fontSize, number x, number y, integer line_length, string text)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/freetype_easy_printAutoNewlines(integer,number,number,integer,string).md" -->
Return.`x`: The horizontal size of the text.
Return.`y`: Y position of the last letter.
<!-- End of content -->

___
### freetype_easy_printAutoShrink ()
{: #freetype_easy_printAutoShrink .lua-content-item aria-label='StaticMethods' }
#### void .freetype_easy_printAutoShrink (integer fontId, number x, number y, integer maxWidth, boolean centered, string text)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/freetype_easy_printAutoShrink(integer,number,number,integer,boolean,string).md" -->

___
### freetype_easy_printCenter ()
{: #freetype_easy_printCenter .lua-content-item aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .freetype_easy_printCenter (integer fontSize, number x, number y, string text)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/freetype_easy_printCenter(integer,number,number,string).md" -->

___
### freetype_easy_printNewlinesCentered ()
{: #freetype_easy_printNewlinesCentered .lua-content-item aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .freetype_easy_printNewlinesCentered (integer fontSize, number x, number y, integer line_length, string text)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/Graphics/freetype_easy_printNewlinesCentered(integer,number,number,integer,string).md" -->

___
### freetype_easy_printRightAlign ()
{: #freetype_easy_printRightAlign .lua-content-item aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .freetype_easy_printRightAlign (integer fontSize, number x, number y, string text)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/Graphics/freetype_easy_printRightAlign(integer,number,number,string).md" -->
Return.`x`: The value is somehow always fixed to 0.
Return.`y`: Y position of the last letter.
<!-- End of content -->

___


