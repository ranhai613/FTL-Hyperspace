---
layout: lua
title: CSurface
lang: en
category: Class
---

# Class "CSurface"

<!-- Head content to be pulled from "lua-source-parts-inject/Graphics/CSurface/_head.md" -->




## Static Methods
{: #Static-Methods .lua-content-section}
### AddTexVertices ()
{: #AddTexVertices .lua-content-item aria-label='StaticMethods' }
#### void .AddTexVertices (vector\<[GL_TexVertex](../Graphics/GL_TexVertex)\> vec, number x1, number y1, number u1, number v1, number x2, number y2, number u2, number v2)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/CSurface/AddTexVertices(vector_Graphics.GL_TexVertex_,number,number,number,number,number,number,number,number).md" -->
**Warning**: operations with `std::vector` are not yet implemented
<!-- End of content -->

___
### GL_BlitImage ()
{: #GL_BlitImage .lua-content-item aria-label='StaticMethods' }
#### boolean .GL_BlitImage ([GL_Texture](../Graphics/GL_Texture) tex, number x, number y, number x2, number y2, number rotation, [GL_Color](../Graphics/GL_Color) color, boolean mirror)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/CSurface/GL_BlitImage(Graphics.GL_Texture,number,number,number,number,number,Graphics.GL_Color,boolean).md" -->
Renders an image texture
`float x, float y` -- starting point (top-left corner)
`float x2, float y2` -- width and length
<!-- End of content -->

___
### GL_BlitImagePartial ()
{: #GL_BlitImagePartial .lua-content-item aria-label='StaticMethods' }
#### boolean .GL_BlitImagePartial ([GL_Texture](../Graphics/GL_Texture) tex, number x, number y, number size_x, number size_y, number start_x, number end_x, number start_y, number end_y, number alpha, [GL_Color](../Graphics/GL_Color) color, boolean mirror)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/CSurface/GL_BlitImagePartial(Graphics.GL_Texture,number,number,number,number,number,number,number,number,number,Graphics.GL_Color,boolean).md" -->
Renders a portion of an image texture
`float x, float y` -- starting point (top-left corner)
`float x2, float y2` -- width and length
`float start_x, float end_x, float start_y, float end_y` -- normalized coordinates of the portion of the texture to render
Example:
<!-- End of content -->

___
### GL_BlitMultiColorImage ()
{: #GL_BlitMultiColorImage .lua-content-item aria-label='StaticMethods' }
#### void .GL_BlitMultiColorImage ([GL_Texture](../Graphics/GL_Texture) tex, vector\<[GL_ColorTexVertex](../Graphics/GL_ColorTexVertex)\> texVertices, boolean antialias)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_BlitMultiColorImage(Graphics.GL_Texture,vector_Graphics.GL_ColorTexVertex_,boolean).md" -->

___
### GL_BlitMultiImage ()
{: #GL_BlitMultiImage .lua-content-item aria-label='StaticMethods' }
#### void .GL_BlitMultiImage ([GL_Texture](../Graphics/GL_Texture) tex, vector\<[GL_TexVertex](../Graphics/GL_TexVertex)\> texVertices, boolean antialias)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_BlitMultiImage(Graphics.GL_Texture,vector_Graphics.GL_TexVertex_,boolean).md" -->

___
### GL_BlitPixelImage ()
{: #GL_BlitPixelImage .lua-content-item aria-label='StaticMethods' }
#### boolean .GL_BlitPixelImage ([GL_Texture](../Graphics/GL_Texture) tex, number x, number y, number x2, number y2, number rotation, [GL_Color](../Graphics/GL_Color) color, boolean mirror)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_BlitPixelImage(Graphics.GL_Texture,number,number,number,number,number,Graphics.GL_Color,boolean).md" -->

___
### GL_BlitPixelImageWide ()
{: #GL_BlitPixelImageWide .lua-content-item aria-label='StaticMethods' }
#### boolean .GL_BlitPixelImageWide ([GL_Texture](../Graphics/GL_Texture) tex, number x, number y, integer x2, integer y2, number opacity, [GL_Color](../Graphics/GL_Color) color, boolean mirror)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_BlitPixelImageWide(Graphics.GL_Texture,number,number,integer,integer,number,Graphics.GL_Color,boolean).md" -->

___
### GL_ClearAll ()
{: #GL_ClearAll .lua-content-item aria-label='StaticMethods' }
#### void .GL_ClearAll ()
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/CSurface/GL_ClearAll().md" -->
Remove everything that has been drawn.
<!-- End of content -->

___
### GL_ClearColor ()
{: #GL_ClearColor .lua-content-item aria-label='StaticMethods' }
#### void .GL_ClearColor ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_ClearColor().md" -->

___
### GL_CreateImagePrimitive ()
{: #GL_CreateImagePrimitive .lua-content-item aria-label='StaticMethods' }
#### [GL_Primitive](../Graphics/GL_Primitive) .GL_CreateImagePrimitive ([GL_Texture](../Graphics/GL_Texture) tex, number x, number y, number size_x, number size_y, number rotate, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_CreateImagePrimitive(Graphics.GL_Texture,number,number,number,number,number,Graphics.GL_Color).md" -->

___
### GL_CreateMultiImagePrimitive ()
{: #GL_CreateMultiImagePrimitive .lua-content-item aria-label='StaticMethods' }
#### [GL_Primitive](../Graphics/GL_Primitive) .GL_CreateMultiImagePrimitive ([GL_Texture](../Graphics/GL_Texture) tex, vector\<[GL_TexVertex](../Graphics/GL_TexVertex)\> vec, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_CreateMultiImagePrimitive(Graphics.GL_Texture,vector_Graphics.GL_TexVertex_,Graphics.GL_Color).md" -->

___
### GL_CreateMultiLinePrimitive ()
{: #GL_CreateMultiLinePrimitive .lua-content-item aria-label='StaticMethods' }
#### [GL_Primitive](../Graphics/GL_Primitive) .GL_CreateMultiLinePrimitive (vector\<[GL_Line](../Graphics/GL_Line)\> vec, [GL_Color](../Graphics/GL_Color) color, number thickness)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_CreateMultiLinePrimitive(vector_Graphics.GL_Line_,Graphics.GL_Color,number).md" -->

___
### GL_CreateMultiRectPrimitive ()
{: #GL_CreateMultiRectPrimitive .lua-content-item aria-label='StaticMethods' }
#### [GL_Primitive](../Graphics/GL_Primitive) .GL_CreateMultiRectPrimitive (vector\<[Rect](../Hyperspace/Rect)\> vec, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_CreateMultiRectPrimitive(vector_Hyperspace.Rect_,Graphics.GL_Color).md" -->

___
### GL_CreatePixelImagePrimitive ()
{: #GL_CreatePixelImagePrimitive .lua-content-item aria-label='StaticMethods' }
#### [GL_Primitive](../Graphics/GL_Primitive) .GL_CreatePixelImagePrimitive ([GL_Texture](../Graphics/GL_Texture) tex, number x, number y, number size_x, number size_y, number rotate, [GL_Color](../Graphics/GL_Color) color, boolean unk)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_CreatePixelImagePrimitive(Graphics.GL_Texture,number,number,number,number,number,Graphics.GL_Color,boolean).md" -->

___
### GL_CreateRectOutlinePrimitive ()
{: #GL_CreateRectOutlinePrimitive .lua-content-item aria-label='StaticMethods' }
#### [GL_Primitive](../Graphics/GL_Primitive) .GL_CreateRectOutlinePrimitive (integer x, integer y, integer w, integer h, [GL_Color](../Graphics/GL_Color) color, number lineWidth)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_CreateRectOutlinePrimitive(integer,integer,integer,integer,Graphics.GL_Color,number).md" -->

___
### GL_CreateRectPrimitive ()
{: #GL_CreateRectPrimitive .lua-content-item aria-label='StaticMethods' }
#### [GL_Primitive](../Graphics/GL_Primitive) .GL_CreateRectPrimitive (number x, number y, number w, number h, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_CreateRectPrimitive(number,number,number,number,Graphics.GL_Color).md" -->

___
### GL_DestroyPrimitive ()
{: #GL_DestroyPrimitive .lua-content-item aria-label='StaticMethods' }
#### void .GL_DestroyPrimitive ([GL_Primitive](../Graphics/GL_Primitive) primitive)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_DestroyPrimitive(Graphics.GL_Primitive).md" -->

___
### GL_DisableBlend ()
{: #GL_DisableBlend .lua-content-item aria-label='StaticMethods' }
#### boolean .GL_DisableBlend ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_DisableBlend().md" -->

___
### GL_DrawCircle ()
{: #GL_DrawCircle .lua-content-item aria-label='StaticMethods' }
#### boolean .GL_DrawCircle (number x, number y, number radius, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/CSurface/GL_DrawCircle(number,number,number,Graphics.GL_Color).md" -->
Renders a full circle
`float x, float y` -- center point
`radius` -- the radius of the circle
<!-- End of content -->

___
### GL_DrawEllipse ()
{: #GL_DrawEllipse .lua-content-item aria-label='StaticMethods' }
#### boolean .GL_DrawEllipse (integer x, integer y, integer a1, integer b1, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/CSurface/GL_DrawEllipse(integer,integer,integer,integer,Graphics.GL_Color).md" -->
Draws a full ellipse.
`int x, int y` -- The coordinates of the ellipse's center
`int a1` -- The horizontal radius.
`int a2` -- The vertical radius.
`GL_Color color` -- The color of the ellipse, normalized to RGBA values within the range [0, 1]
<!-- End of content -->

___
### GL_DrawLaser ()
{: #GL_DrawLaser .lua-content-item aria-label='StaticMethods' }
#### boolean .GL_DrawLaser (integer x, integer y, integer w, integer h, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/CSurface/GL_DrawLaser(integer,integer,integer,integer,Graphics.GL_Color).md" -->
Renders a beam.
`int x, int y` -- origin point
`int w` -- beam length
`int h` -- beam thickness
<!-- End of content -->

___
### GL_DrawLine ()
{: #GL_DrawLine .lua-content-item aria-label='StaticMethods' }
#### boolean .GL_DrawLine (number x1, number y1, number x2, number y2, number lineWidth, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/CSurface/GL_DrawLine(number,number,number,number,number,Graphics.GL_Color).md" -->
Renders a line
`float x1, float y1` -- starting point
`float x2, float y2` -- end point
<!-- End of content -->

___
### GL_DrawRect ()
{: #GL_DrawRect .lua-content-item aria-label='StaticMethods' }
#### boolean .GL_DrawRect (number x1, number y1, number x2, number y2, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/CSurface/GL_DrawRect(number,number,number,number,Graphics.GL_Color).md" -->
Renders a rectangle
`float x1, float y1` -- starting point (top-left corner)
`float x2, float y2` -- width and length
<!-- End of content -->

___
### GL_DrawRectOutline ()
{: #GL_DrawRectOutline .lua-content-item aria-label='StaticMethods' }
#### boolean .GL_DrawRectOutline (integer x1, integer y1, integer x2, integer y2, [GL_Color](../Graphics/GL_Color) color, number lineWidth)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/CSurface/GL_DrawRectOutline(integer,integer,integer,integer,Graphics.GL_Color,number).md" -->
Renders a rectange, no fill
`float x1, float y1` -- starting point (top-left corner)
`float x2, float y2` -- width and length
<!-- End of content -->

___
### GL_DrawShield ()
{: #GL_DrawShield .lua-content-item aria-label='StaticMethods' }
#### boolean .GL_DrawShield (integer x, integer y, number a1, number b1, integer angle1, integer angle2, [GL_Color](../Graphics/GL_Color) color, number thickness)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/CSurface/GL_DrawShield(integer,integer,number,number,integer,integer,Graphics.GL_Color,number).md" -->
Renders a gradient shield effect. (like how a portion of the shield turns white when a beam hits it)
`int x, int y` -- center point
`float a1, float b1` -- radius X, radius Y
`int angle1, int angle2` -- start direction, end direction
<!-- End of content -->

___
### GL_DrawTriangle ()
{: #GL_DrawTriangle .lua-content-item aria-label='StaticMethods' }
#### boolean .GL_DrawTriangle ([Point](../Hyperspace/Point) vertex1, [Point](../Hyperspace/Point) vertex2, [Point](../Hyperspace/Point) vertex3, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/CSurface/GL_DrawTriangle(Hyperspace.Point,Hyperspace.Point,Hyperspace.Point,Graphics.GL_Color).md" -->
Renders a triangle. The verticies are constructed with `Hyperspace.Point(x, y)`
<!-- End of content -->

___
### GL_EnableBlend ()
{: #GL_EnableBlend .lua-content-item aria-label='StaticMethods' }
#### boolean .GL_EnableBlend ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_EnableBlend().md" -->

___
### GL_GetColor ()
{: #GL_GetColor .lua-content-item aria-label='StaticMethods' }
#### [GL_Color](../Graphics/GL_Color) .GL_GetColor ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_GetColor().md" -->

___
### GL_LoadIdentity ()
{: #GL_LoadIdentity .lua-content-item aria-label='StaticMethods' }
#### integer .GL_LoadIdentity ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_LoadIdentity().md" -->

___
### GL_OrthoProjection ()
{: #GL_OrthoProjection .lua-content-item aria-label='StaticMethods' }
#### integer .GL_OrthoProjection (number mx1, number mx2, number mx3, number mx4, number mx5, number mx6)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_OrthoProjection(number,number,number,number,number,number).md" -->

___
### GL_PopMatrix ()
{: #GL_PopMatrix .lua-content-item aria-label='StaticMethods' }
#### integer .GL_PopMatrix ()
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/CSurface/GL_PopMatrix().md" -->
Remove the current graphic from the selected stack.
<!-- End of content -->

___
### GL_PopScissor ()
{: #GL_PopScissor .lua-content-item aria-label='StaticMethods' }
#### void .GL_PopScissor ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_PopScissor().md" -->

___
### GL_PopStencilMode ()
{: #GL_PopStencilMode .lua-content-item aria-label='StaticMethods' }
#### void .GL_PopStencilMode ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_PopStencilMode().md" -->

___
### GL_PushMatrix ()
{: #GL_PushMatrix .lua-content-item aria-label='StaticMethods' }
#### integer .GL_PushMatrix ()
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Graphics/CSurface/GL_PushMatrix().md" -->
Push the current graphic, that is about to be drawn, onto the selected stack. Which can later be modified with other `CSurface` methods.
<!-- End of content -->

___
### GL_PushStencilMode ()
{: #GL_PushStencilMode .lua-content-item aria-label='StaticMethods' }
#### void .GL_PushStencilMode ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_PushStencilMode().md" -->

___
### GL_RemoveColorTint ()
{: #GL_RemoveColorTint .lua-content-item aria-label='StaticMethods' }
#### void .GL_RemoveColorTint ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_RemoveColorTint().md" -->

___
### GL_RenderPrimitive ()
{: #GL_RenderPrimitive .lua-content-item aria-label='StaticMethods' }
#### void .GL_RenderPrimitive ([GL_Primitive](../Graphics/GL_Primitive) primitive)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_RenderPrimitive(Graphics.GL_Primitive).md" -->

___
### GL_RenderPrimitiveWithAlpha ()
{: #GL_RenderPrimitiveWithAlpha .lua-content-item aria-label='StaticMethods' }
#### void .GL_RenderPrimitiveWithAlpha ([GL_Primitive](../Graphics/GL_Primitive) primitive, number alpha)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_RenderPrimitiveWithAlpha(Graphics.GL_Primitive,number).md" -->

___
### GL_RenderPrimitiveWithColor ()
{: #GL_RenderPrimitiveWithColor .lua-content-item aria-label='StaticMethods' }
#### void .GL_RenderPrimitiveWithColor ([GL_Primitive](../Graphics/GL_Primitive) primitive, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_RenderPrimitiveWithColor(Graphics.GL_Primitive,Graphics.GL_Color).md" -->

___
### GL_Rotate ()
{: #GL_Rotate .lua-content-item aria-label='StaticMethods' }
#### void .GL_Rotate (number angle, number x, number y, number z=1.f)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_Rotate(number,number,number,number).md" -->

___
### GL_Scale ()
{: #GL_Scale .lua-content-item aria-label='StaticMethods' }
#### void .GL_Scale (number x, number y, number z)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_Scale(number,number,number).md" -->

___
### GL_SetColor ()
{: #GL_SetColor .lua-content-item aria-label='StaticMethods' }
#### integer .GL_SetColor ([GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_SetColor(Graphics.GL_Color).md" -->

___
### GL_SetColorTint ()
{: #GL_SetColorTint .lua-content-item aria-label='StaticMethods' }
#### void .GL_SetColorTint ([GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_SetColorTint(Graphics.GL_Color).md" -->

___
### GL_SetStencilMode ()
{: #GL_SetStencilMode .lua-content-item aria-label='StaticMethods' }
#### void .GL_SetStencilMode (GL_StencilMode stencilMode, integer ref, integer mask)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_SetStencilMode(GL_StencilMode,integer,integer).md" -->

___
### GL_Translate ()
{: #GL_Translate .lua-content-item aria-label='StaticMethods' }
#### boolean .GL_Translate (number x, number y, number z=0.f)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GL_Translate(number,number,number).md" -->

___
### GetColorTint ()
{: #GetColorTint .lua-content-item aria-label='StaticMethods' }
#### [GL_Color](../Graphics/GL_Color) .GetColorTint ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Graphics/CSurface/GetColorTint().md" -->

___


