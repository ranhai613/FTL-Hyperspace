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
{: aria-label='Functions' }
#### void :AddSoundQueue (integer frame, string sound)
{: aria-label='Functions' }

______
### Done ()
{: aria-label='Functions' }
#### boolean :Done ()
{: aria-label='Functions' }

______
### LoadState ()
{: aria-label='Functions' }
#### void :LoadState (integer fd)
{: aria-label='Functions' }

______
### OnRender ()
{: aria-label='Functions' }
#### void :OnRender (number opacity, [GL_Color](../Graphics/GL_Color) color, boolean mirror)
{: aria-label='Functions' }

______
### RandomStart ()
{: aria-label='Functions' }
#### integer :RandomStart ()
{: aria-label='Functions' }

______
### SaveState ()
{: aria-label='Functions' }
#### void :SaveState (integer fd)
{: aria-label='Functions' }

______
### SetAnimationId ()
{: aria-label='Functions' }
#### void :SetAnimationId ([GL_Texture](../Graphics/GL_Texture) tex)
{: aria-label='Functions' }

______
### SetCurrentFrame ()
{: aria-label='Functions' }
#### void :SetCurrentFrame (integer frame)
{: aria-label='Functions' }

______
### SetProgress ()
{: aria-label='Functions' }
#### void :SetProgress (number progress)
{: aria-label='Functions' }

______
### Start ()
{: aria-label='Functions' }
#### void :Start (boolean reset)
{: aria-label='Functions' }

______
### StartReverse ()
{: aria-label='Functions' }
#### void :StartReverse (boolean reset)
{: aria-label='Functions' }

______
### Update ()
{: aria-label='Functions' }
#### void :Update ()
{: aria-label='Functions' }

___


## Fields
### animName
{: aria-label='Variables' }
#### string .animName
{: aria-label='Variables' }

______
### animationStrip
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .animationStrip
{: aria-label='Variables' }

______
### bAlwaysMirror
{: aria-label='Variables' }
#### boolean .bAlwaysMirror
{: aria-label='Variables' }

______
### currentFrame
{: aria-label='Variables' }
#### integer .currentFrame
{: aria-label='Variables' }

______
### fScale
{: aria-label='Variables' }
#### number .fScale
{: aria-label='Variables' }

______
### fYStretch
{: aria-label='Variables' }
#### number .fYStretch
{: aria-label='Variables' }

______
### fadeOut
{: aria-label='Variables' }
#### number .fadeOut
{: aria-label='Variables' }

______
### info
{: aria-label='Variables' }
#### [AnimationDescriptor](../Hyperspace/AnimationDescriptor) .info
{: aria-label='Variables' }

______
### mask_x_pos
{: aria-label='Variables' }
#### integer .mask_x_pos
{: aria-label='Variables' }

______
### mask_x_size
{: aria-label='Variables' }
#### integer .mask_x_size
{: aria-label='Variables' }

______
### mask_y_pos
{: aria-label='Variables' }
#### integer .mask_y_pos
{: aria-label='Variables' }

______
### mask_y_size
{: aria-label='Variables' }
#### integer .mask_y_size
{: aria-label='Variables' }

______
### mirroredPrimitive
{: aria-label='Variables' }
#### [GL_Primitive](../Graphics/GL_Primitive) .mirroredPrimitive
{: aria-label='Variables' }

______
### position
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .position
{: aria-label='Variables' }

______
### primitive
{: aria-label='Variables' }
#### [GL_Primitive](../Graphics/GL_Primitive) .primitive
{: aria-label='Variables' }

______
### randomizeFrames
{: aria-label='Variables' }
#### boolean .randomizeFrames
{: aria-label='Variables' }

______
### soundForward
{: aria-label='Variables' }
#### string .soundForward
{: aria-label='Variables' }

______
### soundQueue
{: aria-label='Variables' }
#### vector\<vector\<string\>\> .soundQueue
{: aria-label='Variables' }

______
### soundReverse
{: aria-label='Variables' }
#### string .soundReverse
{: aria-label='Variables' }

______
### startFadeOut
{: aria-label='Variables' }
#### number .startFadeOut
{: aria-label='Variables' }

______
### tracker
{: aria-label='Variables' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .tracker
{: aria-label='Variables' }

___
