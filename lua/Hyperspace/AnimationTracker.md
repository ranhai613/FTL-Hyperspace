---
layout: lua
title: AnimationTracker
lang: en
---

# Class "AnimationTracker"


## Constructors
{: #Constructors .lua-content-section}
### AnimationTracker ()
{: #AnimationTracker .lua-content-item aria-label='Constructors' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) AnimationTracker ()
{: aria-label='Constructors' }

___




## Methods
{: #Methods .lua-content-section}
### GetAlphaLevel ()
{: #GetAlphaLevel .lua-content-item aria-label='Methods' }
#### number :GetAlphaLevel (boolean reverse)
{: aria-label='Methods' }

___
### Progress ()
{: #Progress .lua-content-item aria-label='Methods' }
#### number :Progress (number speed)
{: aria-label='Methods' }

___
### SetLoop ()
{: #SetLoop .lua-content-item aria-label='Methods' }
#### void :SetLoop (boolean loop, number loopDelay)
{: aria-label='Methods' }

___
### SetProgress ()
{: #SetProgress .lua-content-item aria-label='Methods' }
#### void :SetProgress (number time)
{: aria-label='Methods' }

___
### Start ()
{: #Start .lua-content-item aria-label='Methods' }
#### void :Start (number time)
{: aria-label='Methods' }

___
### StartReverse ()
{: #StartReverse .lua-content-item aria-label='Methods' }
#### void :StartReverse (number time)
{: aria-label='Methods' }

___
### Stop ()
{: #Stop .lua-content-item aria-label='Methods' }
#### void :Stop (boolean resetTime)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### currentDelay
{: #currentDelay .lua-content-item aria-label='Fields' }
#### number .currentDelay
{: aria-label='Fields' }

___
### current_time
{: #current_time .lua-content-item aria-label='Fields' }
#### number .current_time
{: aria-label='Fields' }

___
### done
{: #done .lua-content-item aria-label='Fields' }
#### boolean .done
{: aria-label='Fields' }

___
### loop
{: #loop .lua-content-item aria-label='Fields' }
#### boolean .loop
{: aria-label='Fields' }

___
### loopDelay
{: #loopDelay .lua-content-item aria-label='Fields' }
#### number .loopDelay
{: aria-label='Fields' }

___
### reverse
{: #reverse .lua-content-item aria-label='Fields' }
#### boolean .reverse
{: aria-label='Fields' }

___
### running
{: #running .lua-content-item aria-label='Fields' }
#### boolean .running
{: aria-label='Fields' }

___
### time
{: #time .lua-content-item aria-label='Fields' }
#### number .time
{: aria-label='Fields' }

___
