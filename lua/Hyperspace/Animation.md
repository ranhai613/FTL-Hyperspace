---
layout: lua
title: Animation
lang: en
---

# Class "Animation"


## Constructors
### Animation ()
{: aria-label='Constructors' }
#### [Animation](../Hyperspace/Animation) Animation ()
{: aria-label='Constructors' }

___
### Animation ()
{: aria-label='Constructors' }
#### [Animation](../Hyperspace/Animation) Animation (string _image, integer _length, number _time, [Pointf](../Hyperspace/Pointf) _position, integer _imageWidth, integer _imageHeight, integer _stripStartX, integer _numFrames)
{: aria-label='Constructors' }

___




## Methods
### AddSoundQueue ()
{: aria-label='Methods' }
#### void :AddSoundQueue (integer frame, string sound)
{: aria-label='Methods' }

___
### Done ()
{: aria-label='Methods' }
#### boolean :Done ()
{: aria-label='Methods' }

___
### LoadState ()
{: aria-label='Methods' }
#### void :LoadState (integer fd)
{: aria-label='Methods' }

___
### OnRender ()
{: aria-label='Methods' }
#### void :OnRender (number opacity, [GL_Color](../Graphics/GL_Color) color, boolean mirror)
{: aria-label='Methods' }

___
### RandomStart ()
{: aria-label='Methods' }
#### integer :RandomStart ()
{: aria-label='Methods' }

___
### SaveState ()
{: aria-label='Methods' }
#### void :SaveState (integer fd)
{: aria-label='Methods' }

___
### SetAnimationId ()
{: aria-label='Methods' }
#### void :SetAnimationId ([GL_Texture](../Graphics/GL_Texture) tex)
{: aria-label='Methods' }

___
### SetCurrentFrame ()
{: aria-label='Methods' }
#### void :SetCurrentFrame (integer frame)
{: aria-label='Methods' }

___
### SetProgress ()
{: aria-label='Methods' }
#### void :SetProgress (number progress)
{: aria-label='Methods' }

___
### Start ()
{: aria-label='Methods' }
#### void :Start (boolean reset)
{: aria-label='Methods' }

___
### StartReverse ()
{: aria-label='Methods' }
#### void :StartReverse (boolean reset)
{: aria-label='Methods' }

___
### Update ()
{: aria-label='Methods' }
#### void :Update ()
{: aria-label='Methods' }

___


## Fields
### animName
{: aria-label='Fields' }
#### string .animName
{: aria-label='Fields' }

___
### animationStrip
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .animationStrip
{: aria-label='Fields' }

___
### bAlwaysMirror
{: aria-label='Fields' }
#### boolean .bAlwaysMirror
{: aria-label='Fields' }

___
### currentFrame
{: aria-label='Fields' }
#### integer .currentFrame
{: aria-label='Fields' }

___
### fScale
{: aria-label='Fields' }
#### number .fScale
{: aria-label='Fields' }

___
### fYStretch
{: aria-label='Fields' }
#### number .fYStretch
{: aria-label='Fields' }

___
### fadeOut
{: aria-label='Fields' }
#### number .fadeOut
{: aria-label='Fields' }

___
### info
{: aria-label='Fields' }
#### [AnimationDescriptor](../Hyperspace/AnimationDescriptor) .info
{: aria-label='Fields' }

___
### mask_x_pos
{: aria-label='Fields' }
#### integer .mask_x_pos
{: aria-label='Fields' }

___
### mask_x_size
{: aria-label='Fields' }
#### integer .mask_x_size
{: aria-label='Fields' }

___
### mask_y_pos
{: aria-label='Fields' }
#### integer .mask_y_pos
{: aria-label='Fields' }

___
### mask_y_size
{: aria-label='Fields' }
#### integer .mask_y_size
{: aria-label='Fields' }

___
### mirroredPrimitive
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .mirroredPrimitive
{: aria-label='Fields' }

___
### position
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .position
{: aria-label='Fields' }

___
### primitive
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .primitive
{: aria-label='Fields' }

___
### randomizeFrames
{: aria-label='Fields' }
#### boolean .randomizeFrames
{: aria-label='Fields' }

___
### soundForward
{: aria-label='Fields' }
#### string .soundForward
{: aria-label='Fields' }

___
### soundQueue
{: aria-label='Fields' }
#### vector\<vector\<string\>\> .soundQueue
{: aria-label='Fields' }

___
### soundReverse
{: aria-label='Fields' }
#### string .soundReverse
{: aria-label='Fields' }

___
### startFadeOut
{: aria-label='Fields' }
#### number .startFadeOut
{: aria-label='Fields' }

___
### tracker
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .tracker
{: aria-label='Fields' }

___
