---
layout: lua
title: CSurface
lang: en
---

# Class "CSurface"




## Static Methods
### AddTexVertices ()
{: aria-label='StaticMethods' }
#### void .AddTexVertices (vector\<[GL_TexVertex](../Graphics/GL_TexVertex)\> vec, number x1, number y1, number u1, number v1, number x2, number y2, number u2, number v2)
{: aria-label='StaticMethods' }
**Warning**: operations with `std::vector` are not yet implemented

______
### GL_BlitImage ()
{: aria-label='StaticMethods' }
#### boolean .GL_BlitImage ([GL_Texture](../Graphics/GL_Texture) tex, number x, number y, number x2, number y2, number rotation, [GL_Color](../Graphics/GL_Color) color, boolean mirror)
{: aria-label='StaticMethods' }
Renders an image texture
`float x, float y` -- starting point (top-left corner)
`float x2, float y2` -- width and length

______
### GL_BlitImagePartial ()
{: aria-label='StaticMethods' }
#### boolean .GL_BlitImagePartial ([GL_Texture](../Graphics/GL_Texture) tex, number x, number y, number size_x, number size_y, number start_x, number end_x, number start_y, number end_y, number alpha, [GL_Color](../Graphics/GL_Color) color, boolean mirror)
{: aria-label='StaticMethods' }
Renders a portion of an image texture
`float x, float y` -- starting point (top-left corner)
`float x2, float y2` -- width and length
`float start_x, float end_x, float start_y, float end_y` -- normalized coordinates of the portion of the texture to render
Example:

______
### GL_BlitMultiColorImage ()
{: aria-label='StaticMethods' }
#### void .GL_BlitMultiColorImage ([GL_Texture](../Graphics/GL_Texture) tex, vector\<[GL_ColorTexVertex](../Graphics/GL_ColorTexVertex)\> texVertices, boolean antialias)
{: aria-label='StaticMethods' }

______
### GL_BlitMultiImage ()
{: aria-label='StaticMethods' }
#### void .GL_BlitMultiImage ([GL_Texture](../Graphics/GL_Texture) tex, vector\<[GL_TexVertex](../Graphics/GL_TexVertex)\> texVertices, boolean antialias)
{: aria-label='StaticMethods' }

______
### GL_BlitPixelImage ()
{: aria-label='StaticMethods' }
#### boolean .GL_BlitPixelImage ([GL_Texture](../Graphics/GL_Texture) tex, number x, number y, number x2, number y2, number rotation, [GL_Color](../Graphics/GL_Color) color, boolean mirror)
{: aria-label='StaticMethods' }

______
### GL_BlitPixelImageWide ()
{: aria-label='StaticMethods' }
#### boolean .GL_BlitPixelImageWide ([GL_Texture](../Graphics/GL_Texture) tex, number x, number y, integer x2, integer y2, number opacity, [GL_Color](../Graphics/GL_Color) color, boolean mirror)
{: aria-label='StaticMethods' }

______
### GL_ClearAll ()
{: aria-label='StaticMethods' }
#### void .GL_ClearAll ()
{: aria-label='StaticMethods' }
Remove everything that has been drawn.

______
### GL_ClearColor ()
{: aria-label='StaticMethods' }
#### void .GL_ClearColor ()
{: aria-label='StaticMethods' }

______
### GL_CreateImagePrimitive ()
{: aria-label='StaticMethods' }
#### [GL_Primitive](../Graphics/GL_Primitive) .GL_CreateImagePrimitive ([GL_Texture](../Graphics/GL_Texture) tex, number x, number y, number size_x, number size_y, number rotate, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }

______
### GL_CreateMultiImagePrimitive ()
{: aria-label='StaticMethods' }
#### [GL_Primitive](../Graphics/GL_Primitive) .GL_CreateMultiImagePrimitive ([GL_Texture](../Graphics/GL_Texture) tex, vector\<[GL_TexVertex](../Graphics/GL_TexVertex)\> vec, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }

______
### GL_CreateMultiLinePrimitive ()
{: aria-label='StaticMethods' }
#### [GL_Primitive](../Graphics/GL_Primitive) .GL_CreateMultiLinePrimitive (vector\<[GL_Line](../Graphics/GL_Line)\> vec, [GL_Color](../Graphics/GL_Color) color, number thickness)
{: aria-label='StaticMethods' }

______
### GL_CreateMultiRectPrimitive ()
{: aria-label='StaticMethods' }
#### [GL_Primitive](../Graphics/GL_Primitive) .GL_CreateMultiRectPrimitive (vector\<[Rect](../Hyperspace/Rect)\> vec, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }

______
### GL_CreatePixelImagePrimitive ()
{: aria-label='StaticMethods' }
#### [GL_Primitive](../Graphics/GL_Primitive) .GL_CreatePixelImagePrimitive ([GL_Texture](../Graphics/GL_Texture) tex, number x, number y, number size_x, number size_y, number rotate, [GL_Color](../Graphics/GL_Color) color, boolean unk)
{: aria-label='StaticMethods' }

______
### GL_CreateRectOutlinePrimitive ()
{: aria-label='StaticMethods' }
#### [GL_Primitive](../Graphics/GL_Primitive) .GL_CreateRectOutlinePrimitive (integer x, integer y, integer w, integer h, [GL_Color](../Graphics/GL_Color) color, number lineWidth)
{: aria-label='StaticMethods' }

______
### GL_CreateRectPrimitive ()
{: aria-label='StaticMethods' }
#### [GL_Primitive](../Graphics/GL_Primitive) .GL_CreateRectPrimitive (number x, number y, number w, number h, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }

______
### GL_DestroyPrimitive ()
{: aria-label='StaticMethods' }
#### void .GL_DestroyPrimitive ([GL_Primitive](../Graphics/GL_Primitive) primitive)
{: aria-label='StaticMethods' }

______
### GL_DisableBlend ()
{: aria-label='StaticMethods' }
#### boolean .GL_DisableBlend ()
{: aria-label='StaticMethods' }

______
### GL_DrawCircle ()
{: aria-label='StaticMethods' }
#### boolean .GL_DrawCircle (number x, number y, number radius, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
Renders a full circle
`float x, float y` -- center point
`radius` -- the radius of the circle

______
### GL_DrawEllipse ()
{: aria-label='StaticMethods' }
#### boolean .GL_DrawEllipse (integer x, integer y, integer a1, integer b1, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
Draws a full ellipse.
`int x, int y` -- The coordinates of the ellipse's center
`int a1` -- The horizontal radius.
`int a2` -- The vertical radius.
`GL_Color color` -- The color of the ellipse, normalized to RGBA values within the range [0, 1]

______
### GL_DrawLaser ()
{: aria-label='StaticMethods' }
#### boolean .GL_DrawLaser (integer x, integer y, integer w, integer h, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
Renders a beam.
`int x, int y` -- origin point
`int w` -- beam length
`int h` -- beam thickness

______
### GL_DrawLine ()
{: aria-label='StaticMethods' }
#### boolean .GL_DrawLine (number x1, number y1, number x2, number y2, number lineWidth, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
Renders a line
`float x1, float y1` -- starting point
`float x2, float y2` -- end point

______
### GL_DrawRect ()
{: aria-label='StaticMethods' }
#### boolean .GL_DrawRect (number x1, number y1, number x2, number y2, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
Renders a rectangle
`float x1, float y1` -- starting point (top-left corner)
`float x2, float y2` -- width and length

______
### GL_DrawRectOutline ()
{: aria-label='StaticMethods' }
#### boolean .GL_DrawRectOutline (integer x1, integer y1, integer x2, integer y2, [GL_Color](../Graphics/GL_Color) color, number lineWidth)
{: aria-label='StaticMethods' }
Renders a rectange, no fill
`float x1, float y1` -- starting point (top-left corner)
`float x2, float y2` -- width and length

______
### GL_DrawShield ()
{: aria-label='StaticMethods' }
#### boolean .GL_DrawShield (integer x, integer y, number a1, number b1, integer angle1, integer angle2, [GL_Color](../Graphics/GL_Color) color, number thickness)
{: aria-label='StaticMethods' }
Renders a gradient shield effect. (like how a portion of the shield turns white when a beam hits it)
`int x, int y` -- center point
`float a1, float b1` -- radius X, radius Y
`int angle1, int angle2` -- start direction, end direction

______
### GL_DrawTriangle ()
{: aria-label='StaticMethods' }
#### boolean .GL_DrawTriangle ([Point](../Hyperspace/Point) vertex1, [Point](../Hyperspace/Point) vertex2, [Point](../Hyperspace/Point) vertex3, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }
Renders a triangle. The verticies are constructed with `Hyperspace.Point(x, y)`

______
### GL_EnableBlend ()
{: aria-label='StaticMethods' }
#### boolean .GL_EnableBlend ()
{: aria-label='StaticMethods' }

______
### GL_GetColor ()
{: aria-label='StaticMethods' }
#### [GL_Color](../Graphics/GL_Color) .GL_GetColor ()
{: aria-label='StaticMethods' }

______
### GL_LoadIdentity ()
{: aria-label='StaticMethods' }
#### integer .GL_LoadIdentity ()
{: aria-label='StaticMethods' }

______
### GL_OrthoProjection ()
{: aria-label='StaticMethods' }
#### integer .GL_OrthoProjection (number mx1, number mx2, number mx3, number mx4, number mx5, number mx6)
{: aria-label='StaticMethods' }

______
### GL_PopMatrix ()
{: aria-label='StaticMethods' }
#### integer .GL_PopMatrix ()
{: aria-label='StaticMethods' }
Remove the current graphic from the selected stack.

______
### GL_PopScissor ()
{: aria-label='StaticMethods' }
#### void .GL_PopScissor ()
{: aria-label='StaticMethods' }

______
### GL_PopStencilMode ()
{: aria-label='StaticMethods' }
#### void .GL_PopStencilMode ()
{: aria-label='StaticMethods' }

______
### GL_PushMatrix ()
{: aria-label='StaticMethods' }
#### integer .GL_PushMatrix ()
{: aria-label='StaticMethods' }
Push the current graphic, that is about to be drawn, onto the selected stack. Which can later be modified with other `CSurface` methods.

______
### GL_PushStencilMode ()
{: aria-label='StaticMethods' }
#### void .GL_PushStencilMode ()
{: aria-label='StaticMethods' }

______
### GL_RemoveColorTint ()
{: aria-label='StaticMethods' }
#### void .GL_RemoveColorTint ()
{: aria-label='StaticMethods' }

______
### GL_RenderPrimitive ()
{: aria-label='StaticMethods' }
#### void .GL_RenderPrimitive ([GL_Primitive](../Graphics/GL_Primitive) primitive)
{: aria-label='StaticMethods' }

______
### GL_RenderPrimitiveWithAlpha ()
{: aria-label='StaticMethods' }
#### void .GL_RenderPrimitiveWithAlpha ([GL_Primitive](../Graphics/GL_Primitive) primitive, number alpha)
{: aria-label='StaticMethods' }

______
### GL_RenderPrimitiveWithColor ()
{: aria-label='StaticMethods' }
#### void .GL_RenderPrimitiveWithColor ([GL_Primitive](../Graphics/GL_Primitive) primitive, [GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }

______
### GL_Rotate ()
{: aria-label='StaticMethods' }
#### void .GL_Rotate (number angle, number x, number y, number z=1.f)
{: aria-label='StaticMethods' }

______
### GL_Scale ()
{: aria-label='StaticMethods' }
#### void .GL_Scale (number x, number y, number z)
{: aria-label='StaticMethods' }

______
### GL_SetColor ()
{: aria-label='StaticMethods' }
#### integer .GL_SetColor ([GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }

______
### GL_SetColorTint ()
{: aria-label='StaticMethods' }
#### void .GL_SetColorTint ([GL_Color](../Graphics/GL_Color) color)
{: aria-label='StaticMethods' }

______
### GL_SetStencilMode ()
{: aria-label='StaticMethods' }
#### void .GL_SetStencilMode (GL_StencilMode stencilMode, integer ref, integer mask)
{: aria-label='StaticMethods' }

______
### GL_Translate ()
{: aria-label='StaticMethods' }
#### boolean .GL_Translate (number x, number y, number z=0.f)
{: aria-label='StaticMethods' }

______
### GetColorTint ()
{: aria-label='StaticMethods' }
#### [GL_Color](../Graphics/GL_Color) .GetColorTint ()
{: aria-label='StaticMethods' }

___


