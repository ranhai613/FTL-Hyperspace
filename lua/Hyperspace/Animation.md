---
layout: lua
title: Animation
lang: en
category: Class
---

# Class "Animation"

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### Animation ()
{: #Animation .lua-content-item aria-label='Constructors' }
#### [Animation](../Hyperspace/Animation) Animation ()
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/Animation().md" -->

___
### Animation ()
{: #Animation .lua-content-item aria-label='Constructors' }
#### [Animation](../Hyperspace/Animation) Animation (string _image, integer _length, number _time, [Pointf](../Hyperspace/Pointf) _position, integer _imageWidth, integer _imageHeight, integer _stripStartX, integer _numFrames)
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/Animation(string,integer,number,Hyperspace.Pointf,integer,integer,integer,integer).md" -->

___




## Methods
{: #Methods .lua-content-section}
### AddSoundQueue ()
{: #AddSoundQueue .lua-content-item aria-label='Methods' }
#### void :AddSoundQueue (integer frame, string sound)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/AddSoundQueue(integer,string).md" -->

___
### Done ()
{: #Done .lua-content-item aria-label='Methods' }
#### boolean :Done ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/Done().md" -->

___
### LoadState ()
{: #LoadState .lua-content-item aria-label='Methods' }
#### void :LoadState (integer fd)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/LoadState(integer).md" -->

___
### OnRender ()
{: #OnRender .lua-content-item aria-label='Methods' }
#### void :OnRender (number opacity, [GL_Color](../Graphics/GL_Color) color, boolean mirror)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/OnRender(number,Graphics.GL_Color,boolean).md" -->

___
### RandomStart ()
{: #RandomStart .lua-content-item aria-label='Methods' }
#### integer :RandomStart ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/RandomStart().md" -->

___
### SaveState ()
{: #SaveState .lua-content-item aria-label='Methods' }
#### void :SaveState (integer fd)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/SaveState(integer).md" -->

___
### SetAnimationId ()
{: #SetAnimationId .lua-content-item aria-label='Methods' }
#### void :SetAnimationId ([GL_Texture](../Graphics/GL_Texture) tex)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/SetAnimationId(Graphics.GL_Texture).md" -->

___
### SetCurrentFrame ()
{: #SetCurrentFrame .lua-content-item aria-label='Methods' }
#### void :SetCurrentFrame (integer frame)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/SetCurrentFrame(integer).md" -->

___
### SetProgress ()
{: #SetProgress .lua-content-item aria-label='Methods' }
#### void :SetProgress (number progress)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/SetProgress(number).md" -->

___
### Start ()
{: #Start .lua-content-item aria-label='Methods' }
#### void :Start (boolean reset)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/Start(boolean).md" -->

___
### StartReverse ()
{: #StartReverse .lua-content-item aria-label='Methods' }
#### void :StartReverse (boolean reset)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/StartReverse(boolean).md" -->

___
### Update ()
{: #Update .lua-content-item aria-label='Methods' }
#### void :Update ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/Update().md" -->

___


## Fields
{: #Fields .lua-content-section}
### animName
{: #animName .lua-content-item aria-label='Fields' }
#### string .animName
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/animName.md" -->

___
### animationStrip
{: #animationStrip .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .animationStrip
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/animationStrip.md" -->

___
### bAlwaysMirror
{: #bAlwaysMirror .lua-content-item aria-label='Fields' }
#### boolean .bAlwaysMirror
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/bAlwaysMirror.md" -->

___
### currentFrame
{: #currentFrame .lua-content-item aria-label='Fields' }
#### integer .currentFrame
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/currentFrame.md" -->

___
### fScale
{: #fScale .lua-content-item aria-label='Fields' }
#### number .fScale
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/fScale.md" -->

___
### fYStretch
{: #fYStretch .lua-content-item aria-label='Fields' }
#### number .fYStretch
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/fYStretch.md" -->

___
### fadeOut
{: #fadeOut .lua-content-item aria-label='Fields' }
#### number .fadeOut
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/fadeOut.md" -->

___
### info
{: #info .lua-content-item aria-label='Fields' }
#### [AnimationDescriptor](../Hyperspace/AnimationDescriptor) .info
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/info.md" -->

___
### mask_x_pos
{: #mask_x_pos .lua-content-item aria-label='Fields' }
#### integer .mask_x_pos
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/mask_x_pos.md" -->

___
### mask_x_size
{: #mask_x_size .lua-content-item aria-label='Fields' }
#### integer .mask_x_size
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/mask_x_size.md" -->

___
### mask_y_pos
{: #mask_y_pos .lua-content-item aria-label='Fields' }
#### integer .mask_y_pos
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/mask_y_pos.md" -->

___
### mask_y_size
{: #mask_y_size .lua-content-item aria-label='Fields' }
#### integer .mask_y_size
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/mask_y_size.md" -->

___
### mirroredPrimitive
{: #mirroredPrimitive .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .mirroredPrimitive
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/mirroredPrimitive.md" -->

___
### position
{: #position .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .position
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/position.md" -->

___
### primitive
{: #primitive .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .primitive
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/primitive.md" -->

___
### randomizeFrames
{: #randomizeFrames .lua-content-item aria-label='Fields' }
#### boolean .randomizeFrames
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/randomizeFrames.md" -->

___
### soundForward
{: #soundForward .lua-content-item aria-label='Fields' }
#### string .soundForward
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/soundForward.md" -->

___
### soundQueue
{: #soundQueue .lua-content-item aria-label='Fields' }
#### vector\<vector\<string\>\> .soundQueue
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/soundQueue.md" -->

___
### soundReverse
{: #soundReverse .lua-content-item aria-label='Fields' }
#### string .soundReverse
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/soundReverse.md" -->

___
### startFadeOut
{: #startFadeOut .lua-content-item aria-label='Fields' }
#### number .startFadeOut
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/startFadeOut.md" -->

___
### tracker
{: #tracker .lua-content-item aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .tracker
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Animation/tracker.md" -->

___
