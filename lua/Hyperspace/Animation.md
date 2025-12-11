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

______
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

______
### Done ()
{: aria-label='Methods' }
#### boolean :Done ()
{: aria-label='Methods' }

______
### LoadState ()
{: aria-label='Methods' }
#### void :LoadState (integer fd)
{: aria-label='Methods' }

______
### OnRender ()
{: aria-label='Methods' }
#### void :OnRender (number opacity, [GL_Color](../Graphics/GL_Color) color, boolean mirror)
{: aria-label='Methods' }

______
### RandomStart ()
{: aria-label='Methods' }
#### integer :RandomStart ()
{: aria-label='Methods' }

______
### SaveState ()
{: aria-label='Methods' }
#### void :SaveState (integer fd)
{: aria-label='Methods' }

______
### SetAnimationId ()
{: aria-label='Methods' }
#### void :SetAnimationId ([GL_Texture](../Graphics/GL_Texture) tex)
{: aria-label='Methods' }

______
### SetCurrentFrame ()
{: aria-label='Methods' }
#### void :SetCurrentFrame (integer frame)
{: aria-label='Methods' }

______
### SetProgress ()
{: aria-label='Methods' }
#### void :SetProgress (number progress)
{: aria-label='Methods' }

______
### Start ()
{: aria-label='Methods' }
#### void :Start (boolean reset)
{: aria-label='Methods' }

______
### StartReverse ()
{: aria-label='Methods' }
#### void :StartReverse (boolean reset)
{: aria-label='Methods' }

______
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

______
### animationStrip
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .animationStrip
{: aria-label='Fields' }

______
### bAlwaysMirror
{: aria-label='Fields' }
#### boolean .bAlwaysMirror
{: aria-label='Fields' }

______
### currentFrame
{: aria-label='Fields' }
#### integer .currentFrame
{: aria-label='Fields' }

______
### fScale
{: aria-label='Fields' }
#### number .fScale
{: aria-label='Fields' }

______
### fYStretch
{: aria-label='Fields' }
#### number .fYStretch
{: aria-label='Fields' }

______
### fadeOut
{: aria-label='Fields' }
#### number .fadeOut
{: aria-label='Fields' }

______
### info
{: aria-label='Fields' }
#### [AnimationDescriptor](../Hyperspace/AnimationDescriptor) .info
{: aria-label='Fields' }

______
### mask_x_pos
{: aria-label='Fields' }
#### integer .mask_x_pos
{: aria-label='Fields' }

______
### mask_x_size
{: aria-label='Fields' }
#### integer .mask_x_size
{: aria-label='Fields' }

______
### mask_y_pos
{: aria-label='Fields' }
#### integer .mask_y_pos
{: aria-label='Fields' }

______
### mask_y_size
{: aria-label='Fields' }
#### integer .mask_y_size
{: aria-label='Fields' }

______
### mirroredPrimitive
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .mirroredPrimitive
{: aria-label='Fields' }

______
### position
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .position
{: aria-label='Fields' }

______
### primitive
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .primitive
{: aria-label='Fields' }

______
### randomizeFrames
{: aria-label='Fields' }
#### boolean .randomizeFrames
{: aria-label='Fields' }

______
### soundForward
{: aria-label='Fields' }
#### string .soundForward
{: aria-label='Fields' }

______
### soundQueue
{: aria-label='Fields' }
#### vector\<vector\<string\>\> .soundQueue
{: aria-label='Fields' }

______
### soundReverse
{: aria-label='Fields' }
#### string .soundReverse
{: aria-label='Fields' }

______
### startFadeOut
{: aria-label='Fields' }
#### number .startFadeOut
{: aria-label='Fields' }

______
### tracker
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .tracker
{: aria-label='Fields' }

___
