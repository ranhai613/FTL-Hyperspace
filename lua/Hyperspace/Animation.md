---
layout: lua
title: Animation
lang: en
---

# Class "Animation"


## Constructors
{: #Constructors .lua-content-section}
### Animation ()
{: #Animation .lua-content-item aria-label='Constructors' }
#### [Animation](../Hyperspace/Animation) Animation ()
{: aria-label='Constructors' }

___
### Animation ()
{: #Animation .lua-content-item aria-label='Constructors' }
#### [Animation](../Hyperspace/Animation) Animation (string _image, integer _length, number _time, [Pointf](../Hyperspace/Pointf) _position, integer _imageWidth, integer _imageHeight, integer _stripStartX, integer _numFrames)
{: aria-label='Constructors' }

___




## Methods
{: #Methods .lua-content-section}
### AddSoundQueue ()
{: #AddSoundQueue .lua-content-item aria-label='Methods' }
#### void :AddSoundQueue (integer frame, string sound)
{: aria-label='Methods' }

___
### Done ()
{: #Done .lua-content-item aria-label='Methods' }
#### boolean :Done ()
{: aria-label='Methods' }

___
### LoadState ()
{: #LoadState .lua-content-item aria-label='Methods' }
#### void :LoadState (integer fd)
{: aria-label='Methods' }

___
### OnRender ()
{: #OnRender .lua-content-item aria-label='Methods' }
#### void :OnRender (number opacity, [GL_Color](../Graphics/GL_Color) color, boolean mirror)
{: aria-label='Methods' }

___
### RandomStart ()
{: #RandomStart .lua-content-item aria-label='Methods' }
#### integer :RandomStart ()
{: aria-label='Methods' }

___
### SaveState ()
{: #SaveState .lua-content-item aria-label='Methods' }
#### void :SaveState (integer fd)
{: aria-label='Methods' }

___
### SetAnimationId ()
{: #SetAnimationId .lua-content-item aria-label='Methods' }
#### void :SetAnimationId ([GL_Texture](../Graphics/GL_Texture) tex)
{: aria-label='Methods' }

___
### SetCurrentFrame ()
{: #SetCurrentFrame .lua-content-item aria-label='Methods' }
#### void :SetCurrentFrame (integer frame)
{: aria-label='Methods' }

___
### SetProgress ()
{: #SetProgress .lua-content-item aria-label='Methods' }
#### void :SetProgress (number progress)
{: aria-label='Methods' }

___
### Start ()
{: #Start .lua-content-item aria-label='Methods' }
#### void :Start (boolean reset)
{: aria-label='Methods' }

___
### StartReverse ()
{: #StartReverse .lua-content-item aria-label='Methods' }
#### void :StartReverse (boolean reset)
{: aria-label='Methods' }

___
### Update ()
{: #Update .lua-content-item aria-label='Methods' }
#### void :Update ()
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### animName
{: #animName .lua-content-item aria-label='Fields' }
#### string .animName
{: aria-label='Fields' }

___
### animationStrip
{: #animationStrip .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .animationStrip
{: aria-label='Fields' }

___
### bAlwaysMirror
{: #bAlwaysMirror .lua-content-item aria-label='Fields' }
#### boolean .bAlwaysMirror
{: aria-label='Fields' }

___
### currentFrame
{: #currentFrame .lua-content-item aria-label='Fields' }
#### integer .currentFrame
{: aria-label='Fields' }

___
### fScale
{: #fScale .lua-content-item aria-label='Fields' }
#### number .fScale
{: aria-label='Fields' }

___
### fYStretch
{: #fYStretch .lua-content-item aria-label='Fields' }
#### number .fYStretch
{: aria-label='Fields' }

___
### fadeOut
{: #fadeOut .lua-content-item aria-label='Fields' }
#### number .fadeOut
{: aria-label='Fields' }

___
### info
{: #info .lua-content-item aria-label='Fields' }
#### [AnimationDescriptor](../Hyperspace/AnimationDescriptor) .info
{: aria-label='Fields' }

___
### mask_x_pos
{: #mask_x_pos .lua-content-item aria-label='Fields' }
#### integer .mask_x_pos
{: aria-label='Fields' }

___
### mask_x_size
{: #mask_x_size .lua-content-item aria-label='Fields' }
#### integer .mask_x_size
{: aria-label='Fields' }

___
### mask_y_pos
{: #mask_y_pos .lua-content-item aria-label='Fields' }
#### integer .mask_y_pos
{: aria-label='Fields' }

___
### mask_y_size
{: #mask_y_size .lua-content-item aria-label='Fields' }
#### integer .mask_y_size
{: aria-label='Fields' }

___
### mirroredPrimitive
{: #mirroredPrimitive .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .mirroredPrimitive
{: aria-label='Fields' }

___
### position
{: #position .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .position
{: aria-label='Fields' }

___
### primitive
{: #primitive .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .primitive
{: aria-label='Fields' }

___
### randomizeFrames
{: #randomizeFrames .lua-content-item aria-label='Fields' }
#### boolean .randomizeFrames
{: aria-label='Fields' }

___
### soundForward
{: #soundForward .lua-content-item aria-label='Fields' }
#### string .soundForward
{: aria-label='Fields' }

___
### soundQueue
{: #soundQueue .lua-content-item aria-label='Fields' }
#### vector\<vector\<string\>\> .soundQueue
{: aria-label='Fields' }

___
### soundReverse
{: #soundReverse .lua-content-item aria-label='Fields' }
#### string .soundReverse
{: aria-label='Fields' }

___
### startFadeOut
{: #startFadeOut .lua-content-item aria-label='Fields' }
#### number .startFadeOut
{: aria-label='Fields' }

___
### tracker
{: #tracker .lua-content-item aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .tracker
{: aria-label='Fields' }

___
